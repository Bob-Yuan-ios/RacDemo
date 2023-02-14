//
//  MyService.swift
//  HelloWhy
//
//  Created by Bob on 2023/2/7.
//

import Foundation
import Moya
import RxSwift
import Reachability
import SwiftyJSON

enum Result {
    case success(Moya.Response)
    case failure(Error)
}

// MARK: - Provider setup
private func JSONResponseDataFormatter(_ data: Data) -> String {
    do {
        let dataAsJson = try JSONSerialization.jsonObject(with: data)
        let prettyData = try JSONSerialization.data(withJSONObject: dataAsJson, options: .prettyPrinted)
        return String(data: prettyData, encoding: .utf8) ?? String(data: data, encoding: .utf8) ?? ""
    } catch {
        return String(data: data, encoding: .utf8) ?? ""
    }
}

private extension String {
    var urlEscaped: String {
        addingPercentEncoding(withAllowedCharacters: .urlHostAllowed)!
    }
    
    var utf8Encoded: Data {
        Data(self.utf8)
    }
}

public enum MyService {
    case zen
    case userProfile(String)
    case userRepositories(String)
}

extension MyService: TargetType {
    
    public var sampleData: Data {
        return Data()
    }
    
    static var disposeBag = DisposeBag()
    static var netWorkStatus = Reachability.Connection.unavailable

    public var baseURL: URL { URL(string: "https://api.myservice.com")! }
    
    public var path: String {
        switch self {
        case .zen:
            return "/zen"
        case .userProfile(let name):
            return "/users/\(name.urlEscaped)"
        case .userRepositories(let name):
            return "/users/\(name.urlEscaped)/repos"
        }
    }
    
    public var method: Moya.Method {
        switch self {
            case .zen:
                return .get
            default:
                return .post
        }
    }
    
    public var task: Task {
        switch self {
        case .userProfile:
            return .requestParameters(parameters: ["sort": "pushed"], encoding: URLEncoding.default)
        default:
            return .requestPlain
        }
    }
    
    public var validationType: ValidationType {
        switch self {
        case .zen:
            return .successCodes
        default:
            return .none
        }
    }
    
    public var headers: [String : String]? {
        return ["Content-type": "application/json"]
    }
}

extension MyService {
    static func request<T: TargetType>(target: T) -> Single<Any> {
        
        sleep(2)
        
        let netWorkStatus = false//MyService.checkNetworkStatus()
        if !netWorkStatus {
            return Single<Any>.create{ signal -> Disposable in
                let model = SettingModel.init()
                model.settingContent = "无网络"
                signal(.success(model))
                return Disposables.create()
            }
        }
        
        let provider = MoyaProvider<T>()
        return Single<Any>.create { signal -> Disposable in
            
            provider.rx.request(target).asObservable().subscribe { (event) in
                switch event{
                    case let .next(response):
                        signal(.success(response.data))
                    case let .error(error):
                        signal(.error(error))
                    case .completed: break
                }
            }.disposed(by: MyService.disposeBag)
            
            return Disposables.create()
        }
    }
}

extension MyService {
    static func checkNetworkStatus() -> Bool {
        do{
            let reach = try Reachability.init(hostname: "https://www.baidu.com")
            MyService.netWorkStatus = reach.connection
        }catch{}
        
        if  netWorkStatus == .unavailable {
            return false
        }
        
        return true
    }
}

//
//  SwiftRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/13.
//

import Foundation
import UIKit
import SnapKit

import KakaoSDKAuth
import KakaoSDKCommon
import KakaoSDKUser

@objc class SwiftRootViewController : UIViewController, SettingViewDelegate {
    
    func didSelectedRow(indexPath: IndexPath) {
        self.tableV.tableH.deselectRow(at: indexPath, animated: false)
        print("indexPath:\(indexPath.row)")
    }
    
    
    private lazy var tableV = SettingView.init(frame: CGRect.zero)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.view.backgroundColor = UIColor.red
        self.view.addSubview(self.tableV)
        
        self.contentConstraints()
        
        self.tableV.tableDelegate = self
        self.tableV.bindView(viewModel: SettingViewModel.init())
        
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
//        let learning = Programming.init()
//        learning.mapTest()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
//        // 需要完成相关配置
//        if(UserApi.isKakaoTalkLoginAvailable()){
//            UserApi.shared.loginWithKakaoTalk { (oauthToken, error) in
//                if let error = error {
//                    print(error)
//                }else{
//                    print("login kakao talk success")
//                    guard (oauthToken != nil) else { return }
//                    let oToken: OAuthToken = oauthToken!
//                    print("accessToken is:\(oToken.accessToken)")
//
//                    let jwtDic: NSDictionary = LDEncypt.jwtDecode(withJwtString: oToken.idToken!) as NSDictionary
//                    print("jwtToken information:\(jwtDic)")
//                }
//            }
//            return
//        }
        
//        // 可以直接使用
//        UserApi.shared.loginWithKakaoAccount { (oauthToken, error) in
//            if let error = error {
//                print(error)
//            }else{
//                print("login kakao account success")
//                guard (oauthToken != nil) else { return }
//                let oToken: OAuthToken = oauthToken!
//                print("accessToken is:\(oToken.accessToken)")
//
//                let jwtDic: NSDictionary = LDEncypt.jwtDecode(withJwtString: oToken.idToken!) as NSDictionary
//                print("jwtToken information:\(jwtDic)")
//            }
//        }
    }
    
    @objc func setupKakao() {
        KakaoSDK.initSDK(appKey: "9010f33a3e8c231dd563809e8774a874")
    }
    
    @objc func handOpenUrl(openUrl url: URL) -> Bool{
        print("url======\(url)")
        if (AuthApi.isKakaoTalkLoginUrl(url)) {
            return AuthController.handleOpenUrl(url: url)
        }
        return false
    }
}

extension SwiftRootViewController {
    func contentConstraints() {
        self.tableV.snp.makeConstraints({ make in
            make.edges.equalTo(self.view.safeAreaLayoutGuide)
        })
    }
}

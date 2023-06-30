//
//  SettingViewModel.swift
//  HelloWhy
//
//  Created by Bob on 2023/2/7.
//

import Foundation
import SwiftyJSON

import RxSwift
import RxCocoa

enum SRRefreshStatus {
    case none
    case beingHeaderRefresh
    case endHeaderRefresh
    case beingFooterRefresh
    case endFooterRefresh
    case noMoreData
}


class SettingViewModel: NSObject {
    var models : BehaviorRelay<[SettingModel]> = BehaviorRelay(value: [])
    var refreshStatus : BehaviorRelay<SRRefreshStatus> = BehaviorRelay(value: SRRefreshStatus.none)
}
 

extension SettingViewModel: ViewModelType {
    typealias Input = SettingInput
    typealias Output = SettigOutput
    
    struct SettingInput {

    }
    
    struct SettigOutput {
        let sections: Driver<[SettingSection]>
        let requestCommand = PublishSubject<Bool>()

        init(sections: Driver<[SettingSection]>){
            self.sections = sections
        }
    }
    
    func transform(input: SettingInput) -> SettigOutput {
        
        let sections = models.asObservable().map{ (models) -> [SettingSection] in
            return [SettingSection(items: models)]
        }.asDriver(onErrorJustReturn: [])
        
        let output = SettigOutput(sections: sections)
//        output.requestCommand.subscribe(onNext: { isReload in
//            print("hahaha:\(isReload)")
//            MyService.request(target: MyService.zen)
//                .asObservable()
//                .subscribe({(event) in
//                    switch event {
//                        case let .next(modelArr):
//                            print("request next...");
//                            self.models.accept([modelArr as! SettingModel])
//                        case .error(_):
//                            print("request error...")
//                        case .completed:
//                            print("reqeust complete...")
//                            let value : SRRefreshStatus = isReload ? .endHeaderRefresh : .noMoreData
//                            self.refreshStatus.accept(value)
//                    }
//                })
//                .disposed(by: MyService.disposeBag)
//        }).disposed(by: MyService.disposeBag)

        return output
    }
}

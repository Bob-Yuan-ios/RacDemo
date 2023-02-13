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

class SettingViewModel: NSObject {
    var models : BehaviorRelay<[SettingModel]> = BehaviorRelay(value: [])
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
        output.requestCommand.subscribe(onNext: { isReload in
            print("hahaha:\(isReload)")
            MyService.request(target: MyService.zen)
                .asObservable()
                .subscribe({(event) in
                    
                    switch event {
                    case let .next(modelArr):
                        print("next...");
                        self.models.accept([modelArr as! SettingModel])
                    case .error(_):
                        print("error")
                    case .completed:
                        print("complete")
                    }
                })
                .disposed(by: MyService.disposeBag)
        }).disposed(by: MyService.disposeBag)
        
//        output.requestCommand.subscribe { Void in
//
//            MyService.request(target: MyService.zen).asObservable().subscribe({ [weak self] (event) in
//                switch event {
//                    case let .next(modelArr):
//                        print("success")
//                    self?.models.accept(modelArr as! [SettingModel])
//                    case let .error(error):
//                        print("error")
//                    default:
//                        print("other")
//                }
//            }).disposed(by: MyService.disposeBag)
//
//        } onError: { Error in
//            print("transform error")
//        } onCompleted: {
//            print("transform completed")
//        } onDisposed: {
//            print("transform disposed")
//        }.disposed(by: MyService.disposeBag)

        return output
    }
}

//
//  SwiftRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/13.
//

import Foundation

import UIKit
import TruliooSDK

@objc class SwiftRootViewController : UIViewController, SettingViewDelegate, TruliooDelegate{
    
    func didSelectedRow(indexPath: IndexPath) {
        self.tableV.tableH.deselectRow(at: indexPath, animated: false)
        print("indexPath~~~ ~~~:\(indexPath.row)")
        
        let workflow = TruliooWorkflow("shortCode")
        Trulioo().initialize(delegate: self, workflow: workflow)
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
    
    //#pragma trulioo delegate method
    func onInitialized() {
        print("Trulioo SDK Initialized")
        Trulioo().launch(delegate: self)
    }
    
    func onComplete(result: TruliooSuccess) {
        print("Verification success")
    }
    
    func onError(error: TruliooError) {
        print("Verification error")
    }
    
    func onException(exception: TruliooException) {
        print("Verification exception")
    }
}

extension SwiftRootViewController {
    func contentConstraints() {
        self.tableV.snp.makeConstraints({ make in
            make.edges.equalTo(self.view.safeAreaLayoutGuide)
        })
    }
}

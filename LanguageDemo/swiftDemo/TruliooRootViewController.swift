//
//  TruliooRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/5/15.
//


import UIKit
import TruliooSDK
import TruliooCore

import Foundation

class TruliooRootViewController : UIViewController, TruliooDelegate{
    
    func onInitialized() {
        print("SDK Initialized")
        TruliooSDK.Trulioo().launch(delegate: self)
    }
    
    func onComplete(result: TruliooSDK.TruliooSuccess) -> Void {
        print("Verification success with transactionID: \(result.transactionId)")
    }
    
    func onError(error: TruliooSDK.TruliooError) {
        print("Verification error code: \(error.code), transactionID: \(error.transactionId), msg: \(error.message)")
    }
    
    func onException(exception: TruliooException) {
        print("Verification exception \(exception.message)")
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "Trulioo认证"
        self.view.backgroundColor = UIColor.white
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        let shorCode = "DrBkhdjjiwknjjif" // 只能使用一次 //
        let workflow = TruliooWorkflow(shorCode)
        TruliooSDK.Trulioo().initialize(delegate: self, workflow: workflow)
    }
}

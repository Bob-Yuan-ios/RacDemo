//
//  SwiftRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/13.
//

import Foundation
import UIKit
import SnapKit

@objc class SwiftRootViewController : UIViewController {
    
    private lazy var tableV = SettingView.init(frame: CGRect.zero)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.view.backgroundColor = UIColor.red
        self.view.addSubview(self.tableV)
        
        self.contentConstraints()
        self.tableV.bindView(viewModel: SettingViewModel.init())
    }
}

extension SwiftRootViewController {
    func contentConstraints() {
        self.tableV.snp.makeConstraints({ make in
            make.edges.equalTo(self.view.safeAreaLayoutGuide)
        })
    }
}

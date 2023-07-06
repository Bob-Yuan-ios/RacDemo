//
//  SwiftRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/13.
//

import Foundation
import UIKit
import SnapKit

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
}

extension SwiftRootViewController {
    func contentConstraints() {
        self.tableV.snp.makeConstraints({ make in
            make.edges.equalTo(self.view.safeAreaLayoutGuide)
        })
    }
}

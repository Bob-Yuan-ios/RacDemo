//
//  SwiftRootViewController.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/13.
//

import Foundation
import UIKit

import LightweightCharts
import SnapKit

@objc class SwiftRootViewController : UIViewController, SettingViewDelegate{
    
    func didSelectedRow(indexPath: IndexPath) {
//        self.tableV.tableH.deselectRow(at: indexPath, animated: false)
        print("indexPath~~~ ~~~:\(indexPath.row)")
    }

//    private lazy var tableV = SettingView.init(frame: CGRect.zero)

    var chart: LightweightCharts!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        self.view.backgroundColor = UIColor.red
//        self.view.addSubview(self.tableV)
//
//        self.contentConstraints()
//
//        self.tableV.tableDelegate = self
//        self.tableV.bindView(viewModel: SettingViewModel.init())
        
        
        chart = LightweightCharts()
        view.addSubview(chart)
        
        chart.snp.makeConstraints { make in
            make.top.left.equalTo(self.view).offset(20)
            make.bottom.right.equalTo(self.view).offset(-20)
        }
        
        var series: BarSeries!
        series = chart.addBarSeries(options: nil)
        
        let data = [
            BarData(time: .string("2018-10-19"), open: 180.34, high: 180.99, low: 178.57, close: 179.85),
              BarData(time: .string("2018-10-22"), open: 180.82, high: 181.40, low: 177.56, close: 178.75),
              BarData(time: .string("2018-10-23"), open: 175.77, high: 179.49, low: 175.44, close: 178.53),
              BarData(time: .string("2018-10-24"), open: 178.58, high: 182.37, low: 176.31, close: 176.97),
              BarData(time: .string("2018-10-25"), open: 177.52, high: 180.50, low: 176.83, close: 179.07)
        ]
        series.setData(data: data)
    }
    
}

extension SwiftRootViewController {
//    func contentConstraints() {
//        self.tableV.snp.makeConstraints({ make in
//            make.edges.equalTo(self.view.safeAreaLayoutGuide)
//        })
//    }
}

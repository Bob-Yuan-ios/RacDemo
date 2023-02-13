//
//  SettingView.swift
//  HelloSwift
//
//  Created by Bob on 2023/2/6.
//

import UIKit
import SnapKit
import ESPullToRefresh
import RxDataSources

let ScreenBounds = UIScreen.main.bounds
let ScreenWidth  = ScreenBounds.size.width
let ScreenHeight = ScreenBounds.size.height

class SettingView: UIView {

    /*
    // Only override draw() if you perform custom drawing.
    // An empty implementation adversely affects performance during animation.
    override func draw(_ rect: CGRect) {
        // Drawing code
    }
    */
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.addSubview(self.tableH)
        
        contentConstraint()
        self.tableH.reloadData()
    }
    
    required init?(coder aDecoder: NSCoder) {
       fatalError("init(coder:) has not been implemented")
    }
    
    public lazy var tableH : UITableView = {
        let tableView = UITableView.init()
        tableView.register(UITableViewCell.self, forCellReuseIdentifier: "cell")
        tableView.delegate = self
//        tableView.dataSource = self
        tableView.backgroundColor = UIColor.yellow

        tableView.es.addPullToRefresh { [self] in
            self.refreshData()
        }
        
        tableView.es.addInfiniteScrolling {
            self.loadMoreData()
        }
        
        return tableView
    }()
    
    private lazy var dataSource: Array = {
        return [[["title": "智能硬件"]],
                [["title": "特色闹铃"],
                 ["title": "定时关闭"]],
                [["title": "账号与安全"]],
                [["title": "推送设置"],
                 ["title": "收听偏好设置"],
                 ["title": "隐私设置"]],
                [["title": "断点续听"],
                 ["title": "2G/3G/4G播放和下载"],
                 ["title": "下载音质"],
                 ["title": "清理占用空间"]],
                [["title": "断点续听"],
                 ["title": "2G/3G/4G播放和下载"],
                 ["title": "下载音质"],
                 ["title": "清理占用空间"]],
                [["title": "断点续听"],
                 ["title": "2G/3G/4G播放和下载"],
                 ["title": "下载音质"],
                 ["title": "清理占用空间"]],
                [["title": "特色功能"],
                 ["title": "新版本介绍"],
                 ["title": "给喜马拉雅好评"],
                 ["title": "关于"]]]
    }()
    
    private var viewModel: SettingViewModel!
    
}

extension SettingView {
    
    func contentConstraint() {
        tableH.snp.makeConstraints { make in
            make.left.equalTo(self).offset(10)
            make.right.equalTo(self).offset(-10)
            make.top.bottom.equalTo(self)
        }
    }
    
    func bindView(viewModel: SettingViewModel){
        self.viewModel = viewModel
        refreshData()
        
        let dataSource = RxTableViewSectionedReloadDataSource<SettingSection>(configureCell: {(dataSource, tableV, indexPath, itemModel) in

            print("ggg...\(dataSource)")
            print("ggg...\(itemModel)")

            let cell = tableV.dequeueReusableCell(withIdentifier: "cell",
                                                  for: indexPath)
            
            cell.textLabel?.text = itemModel.settingContent
            return cell
        })

        let vmInput = SettingViewModel.SettingInput()
        let vmOutput = viewModel.transform(input: vmInput)
        vmOutput.sections.asDriver()
            .drive(tableH.rx.items(dataSource: dataSource))
            .disposed(by: MyService.disposeBag)
    }
    
    @objc func refreshData() {
        print("下拉刷新中...")

//        let cTimer: DispatchSourceTimer = DispatchSource.makeTimerSource(flags: [], queue: DispatchQueue(label: "sQ"))
//        let whenWhen = DispatchTime.now() + DispatchTimeInterval.seconds(2)
//        cTimer.schedule(deadline: whenWhen)
//        cTimer.setEventHandler {
//            DispatchQueue.main.async {
//                self.tableH.es.stopPullToRefresh()
//                print("下拉刷新结束...")
//                cTimer.suspend()
//            }
//        }
//        cTimer.resume()
        
        let vmInput = SettingViewModel.SettingInput()
        let vmOutput = viewModel.transform(input: vmInput)
        vmOutput.requestCommand.onNext(true)
    }
    
    @objc func loadMoreData() {
        print("上拉加载中...")
        let cTimer: DispatchSourceTimer = DispatchSource.makeTimerSource(flags: [], queue: DispatchQueue(label: "sQ"))
        let whenWhen = DispatchTime.now() + DispatchTimeInterval.seconds(2)
        cTimer.schedule(deadline: whenWhen)
        cTimer.setEventHandler {
            DispatchQueue.main.async {
                self.tableH.es.noticeNoMoreData()
                print("上拉加载结束...")
                cTimer.suspend()
            }
        }
        cTimer.resume()
        
//        let vmInput = SettingViewModel.SettingInput()
//        let vmOutput = viewModel.transform(input: vmInput)
//        vmOutput.requestCommand.onNext(false)
    }
}

extension SettingView : UITableViewDelegate, UITableViewDataSource {
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return dataSource.count
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dataSource[section].count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)
        let sectionArray = dataSource[indexPath.section]
        let dict: [String: String] = sectionArray[indexPath.row]
        cell.textLabel?.text = dict["title"]
        return cell
    }
    
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 10
    }
}

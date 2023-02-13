//
//  SettingView.swift
//  HelloSwift
//
//  Created by Bob on 2023/2/6.
//

import UIKit
import SnapKit

import RxDataSources
import ESPullToRefresh

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
        return [[SettingModel.init()]]
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

        let dataSource = RxTableViewSectionedReloadDataSource<SettingSection>(configureCell: {(dataSource, tableV, indexPath, itemModel) in

            let cell = tableV.dequeueReusableCell(withIdentifier: "cell",  for: indexPath)
            cell.textLabel?.text = itemModel.settingContent
            cell.setNeedsDisplay()
            
            return cell
        })

    
        let vmInput = SettingViewModel.SettingInput()
        let vmOutput = viewModel.transform(input: vmInput)
        vmOutput.sections.asDriver()
            .drive(tableH.rx.items(dataSource: dataSource))
            .disposed(by: MyService.disposeBag)
        viewModel.refreshStatus.asObservable().subscribe { status in
            switch status{
                case .noMoreData:
                    print("refresh status no more data####")
                    self.tableH.es.noticeNoMoreData()
                default:
                    print("refresh status default#####")
                    self.tableH.es.stopPullToRefresh()
            }
        } onError: { error in
            print("refresh status error:\(error.localizedDescription)")
        } onCompleted: {
            print("refresh status complete#####")
        } onDisposed: {
           print("refresh status disposed####")
        }.disposed(by: MyService.disposeBag)
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
        let vmInput = SettingViewModel.SettingInput()
        let vmOutput = viewModel.transform(input: vmInput)
        vmOutput.requestCommand.onNext(false)
    }
}

extension SettingView : UITableViewDelegate {
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: false)
        print("didSelectRow...\(indexPath.row)")
    }
}
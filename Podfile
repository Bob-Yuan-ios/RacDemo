use_frameworks!
platform :ios, "14.0"

#source 'https://cdn.cocoapods.org/'
#source 'https://github.com/SumSubstance/Specs.git'

# 主工程
target 'RacDemo' do

    # 布局
    pod 'Masonry'
    
    # 键盘自动收回
    pod 'IQKeyboardManager'
    
    # MVVM框架
    pod 'ReactiveObjC'
    
    # 上拉/下拉 刷新
    pod 'MJRefresh'
    pod 'MJExtension'
    
    # HTTPS请求
    pod 'AFNetworking'
    
    # webSocket请求
    pod 'SocketRocket'

    # tcpSocket请求
    pod 'CocoaAsyncSocket'

    # 布局
    pod 'SnapKit'
    
    # JSON Model 转换
    pod 'SwiftyJSON'
    pod 'ObjectMapper'

    # 上拉/下拉 刷新
    pod 'ESPullToRefresh'

    # Rx
    pod 'RxSwift'
    pod 'RxDataSources'
    
    # 网络可用
    pod 'ReachabilitySwift'

    ######### Pod 通用设置
    post_install do |installer|
      installer.pods_project.targets.each do |target|
                
        target.build_configurations.each do |config|
            # 设置swift库版本
            config.build_settings['SWIFT_VERSION'] = '5.0'
            # 设置 支持版本
            config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '14.0'
        end
        
      end
      
    end
    
end

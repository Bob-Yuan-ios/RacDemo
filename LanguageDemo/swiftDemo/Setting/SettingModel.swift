//
//  SettingModel.swift
//  HelloWhy
//
//  Created by Bob on 2023/2/7.
//

import Foundation

import ObjectMapper
import RxDataSources

class SettingModel : Mappable {

    var settingContent : String?
    
    func mapping(map: Map) {
        settingContent <- map["settingContent"]
    }
    
    required
    init?(map: Map) {
        
    }
    
    init(){
        
    }
    
}


struct SettingSection {
    var items: [Item]
}

extension SettingSection: SectionModelType {
    typealias Item = SettingModel
    
    init(original: SettingSection, items: [SettingModel]) {
        self = original
        self.items = items
    }
}

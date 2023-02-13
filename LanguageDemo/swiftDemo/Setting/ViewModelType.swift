//
//  ViewModelType.swift
//  HelloWhy
//
//  Created by Bob on 2023/2/8.
//

import Foundation

protocol ViewModelType {
    associatedtype Input
    associatedtype Output
    
    func transform(input: Input) -> Output
}

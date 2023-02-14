//
//  Programming.swift
//  LanguageDemo
//
//  Created by Bob on 2023/2/14.
//

import Foundation

class Programming {
   
    
    func mapTest() {
        
//        let values = [2.0, 4.0, 5.0, 9.0]
//        var square: [Double] = []
//        square = values.map({ element in
//            element * element
//        })
//        print("square...\(square)")
        
//        let milsToPoint: [String: Double] = ["point1": 120, "point2": 90]
//        let kmPoint = milsToPoint.map { (key: String, value: Double) in
//            value * 1.31
//        }
//        print(kmPoint)
        
//        let digits = [1, 3, 5, 7, 9, 8]
//        let evn = digits.filter { (number) in
//            return (number%2 == 0)
//        }
//        print(evn)
        
//        let items = [1, 3.7, 0.8]
//        let total = items.reduce(10, plusAction(a:b:))
//        print(total)

//        let codes = ["abc", "def", "ghi"]
//        let text = codes.reduce("", +)
//        print(text)
        
//        // 把多个集合合并成一个
//        let people: [String?] = ["a", nil, "b", "gg", "king"]
//        let valid = people.compactMap { (element) in
//            element
//        }
//        print(valid)
        
//        let collections = [[1, 3, 5], [2, 4, 6], [7, 8, 9]]
//        let allSquare = collections.flatMap { intArr in
//            intArr.map { element in
//                element * element
//            }
//        }
//        print(allSquare)
       
//        // 链式语法
//        let marks = [1, 2, 3, 4, 5.1]
//        let totalPass = marks.filter { element in
//            return element >= 3
//        }.reduce(100, plusAction(a:b:))
//        print("totalPass is:\(totalPass)")
        
//        let decrem = calcDecrement(forDecrement: 101)
//        print(decrem())
        
//        closure(a: 101, b: 9)
        
        let aStudent = MarkStudent.init(mark: 101)
        var bStudent = aStudent
        bStudent.mark = -1
        print(aStudent.mark)
        print(bStudent.mark)
        
//        let aModel = SettingModel.init()
//        let bModel = aModel
//        bModel.settingContent = "ffff"
//        print(aModel.settingContent ?? "")
//        print(bModel.settingContent!)
    }
 
    func plusAction(a: Double, b: Double) -> Double {
        print("a:\(a)====b:\(b)")
        return a + b + 10
    }
   
    // 函数嵌套
    func calcDecrement(forDecrement total: Int) -> () -> Int {
        var overallDecrement = 0
        func decrementer() -> Int {
            overallDecrement -= total
            return overallDecrement
        }
        return decrementer
    }
    
    // 闭包
    func closure(a: Int, b: Int) {
        let divide = {(a: Int, b: Int) -> Double in
            guard b != 0 else{ return Double(NSNotFound)}
            return Double(a)/Double(b)
        }
        print(divide(a, b))
    }
}

struct MarkStudent {
    var mark: Int
    
    init(mark: Int){
        self.mark = mark
    }
}

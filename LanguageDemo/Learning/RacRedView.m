//
//  RacRedView.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/29.
//

#import "RacRedView.h"
#import <Masonry/Masonry.h>
#import "GTTextField.h"
#import "GTCommonInfo.h"


@interface RacRedView ()

@property (nonatomic, strong) UILabel     *ageLbl;
@property (nonatomic, strong) UILabel     *nameLbl;
@property (nonatomic, strong) UILabel     *heightLbl;

@property (nonatomic, strong) UITextField *ageTF;
@property (nonatomic, strong) UITextField *nameTF;
@property (nonatomic, strong) UITextField *heightTF;

@end

@implementation RacRedView
 
- (id)initWithFrame:(CGRect)frame{

    self = [super initWithFrame:frame];
    if (self) {
        NSAttributedString *attStr = [[NSAttributedString alloc] initWithString:@"" attributes:@{NSForegroundColorAttributeName:[UIColor lightGrayColor]}];
 

        /* ======================================================= */
        _ageLbl = [UILabel new];
        [self addSubview:_ageLbl];
        _ageLbl.text = @"年龄";
 
        _ageTF = [GTTextField new];
        [self addSubview:_ageTF];
        _ageTF.attributedPlaceholder = attStr;
        _ageTF.placeholder = @"请输入年龄";
        /* ======================================================= */

        
        /* ======================================================= */
        _nameLbl = [UILabel new];
        [self addSubview:_nameLbl];
        _nameLbl.text = @"昵称";

        _nameTF = [GTTextField new];
        [self addSubview:_nameTF];
        _nameTF.attributedPlaceholder = attStr;
        _nameTF.placeholder = @"请输入昵称";
        /* ======================================================= */

        /* ======================================================= */
        _heightLbl = [UILabel new];
        [self addSubview:_heightLbl];
        _heightLbl.text = @"身高";

        [_heightLbl mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.mas_equalTo(_nameLbl.mas_bottom).mas_offset(@20);
            make.left.mas_offset(@15);
            make.height.mas_equalTo(@40);
        }];
        
        _heightTF = [GTTextField new];
        [self addSubview:_heightTF];
        _heightTF.attributedPlaceholder = attStr;
        _heightTF.placeholder = @"请输入身高";
        /* ======================================================= */
        
        _submitBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        [self addSubview:_submitBtn];
        _submitBtn.backgroundColor = [UIColor yellowColor];
        _submitBtn.layer.cornerRadius = 4.f;
        
        [self limitInputImp2];
        [self limitTextInputImp1];

        [self refreshBtnState];
    }
    return self;
}

/*
 1、textfield 限制输入框输入
 2、textfield 所有项完成输入后，uibutton状态从不可点击，切换到可点击
 */
- (void)limitTextInputImp1{
    //对输入框的限制
    [_ageTF.rac_textSignal subscribeNext:^(NSString *x) {

        static NSInteger const maxIntegerLength = 8; //最大整数位
        static NSInteger const maxFloatLength = 2;   //最大精确到小数位
        
        if (x.length) {
            
            //第一个字符处理
            //第一个字符为0,且长度>1时
            if ([[x substringWithRange:NSMakeRange(0, 1)] isEqualToString:@"0"]) {
                if (x.length>1) {
                    if ([[x substringWithRange:NSMakeRange(1, 1)] isEqualToString:@"0"]) {
                        //如果第二个字符还是0,即"00",则无效,改为"0"
                        self->_ageTF.text=@"0";
                    }else if (![[x substringWithRange:NSMakeRange(1, 1)] isEqualToString:@"."]){
                        //如果第二个字符不是".",比如"03",清除首位的"0"
                        self->_ageTF.text=[x substringFromIndex:1];
                    }
                }
            }else if ([[x substringWithRange:NSMakeRange(0, 1)] isEqualToString:@"."]){
                //第一个字符为"."时,改为"0."
                self->_ageTF.text=@"0.";
            }
            
            //2个以上字符的处理
            NSRange pointRange = [x rangeOfString:@"."];
            NSRange pointsRange = [x rangeOfString:@".."];
            if (pointsRange.length>0) {
                //含有2个小数点
                self->_ageTF.text=[x substringToIndex:x.length-1];
            }else if (pointRange.length>0){
                //含有1个小数点时,并且已经输入了数字,则不能再次输入小数点
                if ((pointRange.location!=x.length-1) && ([[x substringFromIndex:x.length-1]isEqualToString:@"."])) {
                    self->_ageTF.text=[x substringToIndex:x.length-1];
                }
                if (pointRange.location+maxFloatLength<x.length) {
                    //输入位数超出精确度限制,进行截取
                    self->_ageTF.text=[x substringToIndex:pointRange.location+maxFloatLength+1];
                }
            } else{
                if (x.length>maxIntegerLength) {
                    self->_ageTF.text=[x substringToIndex:maxIntegerLength];
                }
            }
        }
    }];
}

- (void)limitInputImp2{
    
    [[_heightTF.rac_textSignal filter:^BOOL(NSString * _Nullable value) {
        NSInteger valueLength = 6;
       // 包含小数点，小数点后面只允许输入两位
       if ([value containsString:@"."]) {
           NSInteger decimalPointIndex =  [value rangeOfString:@"."].location;
           valueLength = decimalPointIndex + 3;
           // 1. 第一位是小数点，默认变成 0.  允许再输入两位数字
           if (decimalPointIndex == 0) {
               value = [NSString stringWithFormat:@"0%@",value];
           }

           //  2.不允许输入多个（2个及以上）小数点
           for (NSInteger i = 0; i < value.length - decimalPointIndex - 1; i++) {
               NSString *character = [value substringWithRange:NSMakeRange(decimalPointIndex + i + 1, 1)];
               if ([character isEqualToString:@"."]) {
                   value = [value stringByReplacingCharactersInRange:NSMakeRange(decimalPointIndex + i + 1, 1) withString:@""];
               }
           }
       }

       if (value.length > valueLength) {
           self->_heightTF.text = [value substringToIndex:valueLength];
       } else {
           self->_heightTF.text = value;
       }
       return value.length <= valueLength;
    }] subscribeNext:^(NSString * _Nullable x) {
        DSLog(@"filter result:%@", x);
    }];
}

- (void)refreshModel{
    [RACObserve(self.ageTF, text) subscribeNext:^(id  _Nullable x) {
        self->_racRedM.age = x;
    }];
    
    [RACObserve(self.nameTF, text) subscribeNext:^(id  _Nullable x) {
        self->_racRedM.name = x;
    }];
    
    [RACObserve(self.heightTF, text) subscribeNext:^(id  _Nullable x) {
        self->_racRedM.height = x;
    }];
}

- (void)refreshBtnState{

    NSArray *arr = @[
        _ageTF.rac_textSignal,
        _nameTF.rac_textSignal,
        _heightTF.rac_textSignal
    ];
    
    [[RACSignal combineLatest:arr] subscribeNext:^(RACTuple * _Nullable x) {
        BOOL fillAllInfo = ([x.first length] && [x.second length] && [x.third length]);
        UIColor *btnColor = fillAllInfo ? [UIColor redColor] : [UIColor yellowColor];
        [self->_submitBtn setBackgroundColor:btnColor];
        [self->_submitBtn setEnabled:fillAllInfo];
    }];
}

- (void)layoutSubviews{
    [super layoutSubviews];
    
    DSLog(@":%@" ,NSStringFromCGRect(_ageLbl.frame));
    if(!CGRectEqualToRect(CGRectZero, _ageLbl.frame)) return;
    WSLog(@":%@" ,NSStringFromCGRect(_ageLbl.frame));
    ESLog(@":%@" ,NSStringFromCGRect(_ageLbl.frame));

    [_ageLbl mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(@120);
        make.left.mas_offset(@15);
        make.height.mas_equalTo(@40);
    }];

    [_ageTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerY.mas_equalTo(_ageLbl.mas_centerY);
        make.left.mas_equalTo(_ageLbl.mas_right).mas_offset(@10);
        make.right.mas_offset(@-15);
        make.height.mas_equalTo(@40);
    }];
    
    [_nameLbl mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(_ageLbl.mas_bottom).mas_offset(@20);
        make.left.mas_offset(@15);
        make.height.mas_equalTo(@40);
    }];
    
    [_nameTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerY.mas_equalTo(_nameLbl.mas_centerY);
        make.left.mas_equalTo(_nameLbl.mas_right).mas_offset(@10);
        make.height.mas_equalTo(@40);
        make.right.mas_offset(@-15);
    }];
    
    [_heightTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerY.mas_equalTo(_heightLbl.mas_centerY);
        make.left.mas_equalTo(_heightLbl.mas_right).mas_offset(@10);
        make.height.mas_equalTo(@40);
        make.right.mas_offset(@-15);
    }];

    
    [_submitBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_offset(@15);
        make.right.mas_offset(@-15);
        make.top.mas_equalTo(_heightTF.mas_bottom).mas_offset(@40);
        make.height.mas_equalTo(@40);
    }];
}

- (RACSubject *)subject{
    if (!_subject) {
        _subject = [RACSubject subject];
    }
    return _subject;
}


//- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
//    [self.subject sendNext:@"点击红色视图"];
//}
//
//- (void)dealloc{
//    NSLog(@"执行释放方法 并发送信号结束消息 ...");
//    [_subject sendCompleted];
//}

@end

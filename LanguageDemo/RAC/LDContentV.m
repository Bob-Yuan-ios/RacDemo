//
//  LDContentV.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDContentV.h"

@interface LDContentV ()
<
UITextFieldDelegate
>

@property (nonatomic, strong) UITextField *userNameTF;

@property (nonatomic, strong) UITextField *passwdTF;

@property (nonatomic, strong) UITextField *confirmPasswdTF;

@property (nonatomic, strong) UIButton *submitBtn;

@end

@implementation LDContentV

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        [self setChildConstrant];
     }
    return self;
}

- (void)setChildConstrant{
    
    [self addSubview:self.userNameTF];
    [self.userNameTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(100);
        make.left.mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
    
    [self addSubview:self.passwdTF];
    [self.passwdTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.userNameTF.mas_bottom).mas_offset(10);
        make.left.mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
    
    [self addSubview:self.confirmPasswdTF];
    [self.confirmPasswdTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.passwdTF.mas_bottom).mas_offset(10);
        make.left.mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
    
    [self addSubview:self.submitBtn];
    [self.submitBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.confirmPasswdTF.mas_bottom).mas_offset(20);
        make.left.mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
}
 

- (void)addContentVM:(LDContentVM *)contentVM{
    
    [RACObserve(self.userNameTF, text) subscribeNext:^(id  _Nullable x) {
        contentVM.contentModel.userName = x;
    }];
    
    [RACObserve(self.passwdTF, text) subscribeNext:^(id  _Nullable x) {
        contentVM.contentModel.passwd = x;
    }];
    
    [RACObserve(self.confirmPasswdTF, text) subscribeNext:^(id  _Nullable x) {
        contentVM.contentModel.confirmPasswd = x;
    }];
    
    
    RAC(self.submitBtn, enabled) = [RACSignal
                                    combineLatest:@[
        self.userNameTF.rac_textSignal,
        self.passwdTF.rac_textSignal,
        self.confirmPasswdTF.rac_textSignal,
    ] reduce:^(NSString *userName, NSString *passwd, NSString *confPasswd){
        return @(userName.length > 0 & passwd.length > 0 && [passwd isEqualToString:confPasswd]);
    }];
    
    [[self.submitBtn rac_signalForControlEvents:UIControlEventTouchUpInside] subscribeNext:^(__kindof UIControl * _Nullable x) {
        [[contentVM.loginCommand execute:@"触发登录操作"] subscribeNext:^(id  _Nullable x) {
            if (200 == [[x objectForKey:@"code"] intValue]) {
                NSDictionary *data = [x objectForKey:@"data"];
                if (data && [data isKindOfClass:[NSDictionary class]]) {
                    LDUserM *user = [LDUserM modelWithDictionary:data];
                    NSLog(@"=======%@", user.description);
                    //刷新UI
                }
            }
        }];
    }];
}

 

#pragma mark --
- (UITextField *)userNameTF{
    if (!_userNameTF) {
        _userNameTF = [UITextField new];
        _userNameTF.delegate = self;
        _userNameTF.layer.borderColor = [UIColor redColor].CGColor;
        _userNameTF.layer.borderWidth = 1.f;
    }
    return _userNameTF;
}

- (UITextField *)passwdTF{
    if (!_passwdTF) {
        _passwdTF = [UITextField new];
        _passwdTF.delegate = self;
        _passwdTF.layer.borderColor = [UIColor redColor].CGColor;
        _passwdTF.layer.borderWidth = 1.f;
        _passwdTF.secureTextEntry = YES;
    }
    return _passwdTF;
}

- (UITextField *)confirmPasswdTF{
    if (!_confirmPasswdTF) {
        _confirmPasswdTF = [UITextField new];
        _confirmPasswdTF.delegate = self;
        _confirmPasswdTF.layer.borderColor = [UIColor redColor].CGColor;
        _confirmPasswdTF.layer.borderWidth = 1.f;
        _confirmPasswdTF.secureTextEntry = YES;
    }
    return _confirmPasswdTF;
}

- (UIButton *)submitBtn{
    if (!_submitBtn) {
        _submitBtn = [UIButton new];
        _submitBtn.backgroundColor = [UIColor yellowColor];
        _submitBtn.enabled = NO;
    }
    return _submitBtn;
}
@end

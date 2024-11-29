//
//  YSLoginView.m
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import "YSLoginView.h"



@interface YSLoginView ()

@property (nonatomic, strong) UITextField *userNameTF;
@property (nonatomic, strong) UITextField *passwordTF;
@property (nonatomic, strong) UIButton    *loginButton;

@end

@implementation YSLoginView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (instancetype)init{
    self = [super init];
    if (self) {
        [self setupView];
        [self setupConstraints];
    }
    return self;
}

- (void)setupView{
    [self addSubview:self.userNameTF];
    [self addSubview:self.passwordTF];
    [self addSubview:self.loginButton];
}

- (void)setupConstraints{
    [self.userNameTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(44);
        make.left.mas_offset(16);
        make.right.mas_offset(-16);
    }];
    
    [self.passwordTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.userNameTF.mas_bottom).mas_offset(10);
        make.left.mas_offset(16);
        make.right.mas_offset(-16);
    }];
    
    [self.loginButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.passwordTF.mas_bottom).mas_offset(10);
        make.left.mas_offset(16);
        make.right.mas_offset(-16);
        make.height.mas_equalTo(44);
    }];
}

- (void)setupSignal{
    
    RACSignal *isFormValid = [RACSignal combineLatest:@[self.userNameTF.rac_textSignal,
        self.passwordTF.rac_textSignal]
    reduce:^id(NSString *userName, NSString *password){
        return @(userName.length > 0 && password.length > 0);
    }];
    
    RAC(self.loginButton, enabled) = isFormValid;
    
    [[self.loginButton rac_signalForControlEvents:UIControlEventTouchUpInside] subscribeNext:^(__kindof UIControl * _Nullable x) {
        
    }];
}

#pragma mark lazy load
- (UITextField *)userNameTF{
    if (!_userNameTF) {
        _userNameTF = [[UITextField alloc] init];
    }
    return _userNameTF;
}


- (UITextField *)passwordTF{
    if (!_passwordTF) {
        _passwordTF = [[UITextField alloc] init];
    }
    return _passwordTF;
}

- (UIButton *)loginButton{
    if (!_loginButton) {
        _loginButton = [UIButton buttonWithType:UIButtonTypeSystem];
    }
    return _loginButton;
}


@end

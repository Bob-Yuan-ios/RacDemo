//
//  LDLoginView.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDLoginView.h"

@interface LDLoginView ()
<
UITextFieldDelegate
>


@property (nonatomic, strong) UILabel *userNameLbl;

@property (nonatomic, strong) UITextField *userNameTF;

@property (nonatomic, strong) UILabel *passwordLbl;

@property (nonatomic, strong) UITextField *passwdTF;

@property (nonatomic, strong) UIButton *submitBtn;



@end

@implementation LDLoginView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

//- (instancetype)initWithFrame:(CGRect)frame{
//    self = [super initWithFrame:frame];
//    if (self) {
//        [self setChildConstrant];
//     }
//    return self;
//}

- (instancetype)init{
    self = [super init];
    if (self) {
        [self setChildConstrant];
        [self uiAction];
    }
    return self;
}

#pragma mark UI Logic
- (void)addContentVM:(LDLoginViewModel *)contentVM{
    
    //UI => 数据模型
    [RACObserve(self.userNameTF, text) subscribeNext:^(id  _Nullable x) {
        contentVM.contentModel.userName = x;
    }];
    
    [RACObserve(_passwdTF, text) subscribeNext:^(id  _Nullable x) {
        contentVM.contentModel.passwd = x;
    }];
    
    //数据模型 => UI
    [RACObserve(contentVM, userModel) subscribeNext:^(id  _Nullable x) {
        NSLog(@"监控数据模型变化:%@", x);
    }];
}

 
- (void)uiAction{
    //UI Action
    NSArray *signalArr = @[self.userNameTF.rac_textSignal, self.passwdTF.rac_textSignal];
    RAC(self.submitBtn, enabled) = [RACSignal combineLatest:signalArr
                                                     reduce:^(NSString *userName, NSString *passwd){
        return @(userName.length >= 6 & userName.length <= 12 && passwd.length > 0);
    }];
    
    [[self.submitBtn rac_signalForControlEvents:UIControlEventTouchUpInside]
                              subscribeNext:^(__kindof UIControl * _Nullable x) {
        //释放才能把输入的值带给模型
        [self endEditing:YES];
        if (self.loginBlock)  self.loginBlock();
    }];
}

#pragma mark UI Draw
- (void)setChildConstrant{
    
    UIView *sepLine = [UIView new];
    [self addSubview:sepLine];
    [sepLine mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self).mas_offset(20);
        make.left.right.equalTo(self);
        make.height.mas_equalTo(1);
    }];
    sepLine.backgroundColor = [UIColor lightGrayColor];
     
    [self addSubview:self.userNameLbl];
    [self.userNameLbl mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(sepLine.mas_bottom).mas_offset(10);
        make.left.mas_offset(15);
        make.height.mas_offset(44);
    }];
    self.userNameLbl.text = @"用户名";

    [self addSubview:self.userNameTF];
    [self.userNameTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(sepLine.mas_bottom).mas_offset(10);
        make.left.equalTo(self.userNameLbl.mas_right).mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
    
    [self addSubview:self.passwordLbl];
    [self.passwordLbl mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.userNameLbl.mas_bottom).mas_offset(10);
        make.left.mas_offset(15);
        make.height.mas_offset(44);
    }];
    self.passwordLbl.text = @"密    码";

    [self addSubview:self.passwdTF];
    [self.passwdTF mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.userNameTF.mas_bottom).mas_offset(10);
        make.left.equalTo(self.passwordLbl.mas_right).mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
    
    [self addSubview:self.submitBtn];
    [self.submitBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.passwdTF.mas_bottom).mas_offset(20);
        make.left.mas_offset(15);
        make.right.mas_offset(-15);
        make.height.mas_offset(44);
    }];
}
 


#pragma mark lazy load
- (UITextField *)userNameTF{
    if (!_userNameTF) {
        _userNameTF = [UITextField new];
        _userNameTF.delegate = self;
        _userNameTF.layer.borderColor = [UIColor lightGrayColor].CGColor;
        _userNameTF.layer.borderWidth = 1.f;
        
        _userNameTF.placeholder = @"昵称6-12位";
    }
    return _userNameTF;
}

- (UITextField *)passwdTF{
    if (!_passwdTF) {
        _passwdTF = [UITextField new];
        _passwdTF.delegate = self;
        _passwdTF.layer.borderColor = [UIColor lightGrayColor].CGColor;
        _passwdTF.layer.borderWidth = 1.f;
        _passwdTF.secureTextEntry = YES;
        
        _passwdTF.placeholder = @"请输入密码";
    }
    return _passwdTF;
}
 
- (UIButton *)submitBtn{
    if (!_submitBtn) {
        _submitBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        _submitBtn.backgroundColor = [UIColor blueColor];
        [_submitBtn setTitle:@"登录" forState:UIControlStateNormal];
        _submitBtn.titleLabel.textColor = [UIColor whiteColor];
    }
    return _submitBtn;
}

- (UILabel *)userNameLbl{
    if (!_userNameLbl) {
        _userNameLbl = [UILabel new];
        _userNameLbl.backgroundColor = [UIColor lightGrayColor];
        
//        //设置换行
//        _userNameLbl.numberOfLines = 0;
//
//        //给一个maxWidth
//        _userNameLbl.preferredMaxLayoutWidth = 30;
//
//        //设置
//        [_userNameLbl setContentHuggingPriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisVertical];
 
        // 设置自适应优先级
        [_userNameLbl setContentHuggingPriority:UILayoutPriorityDefaultHigh forAxis:UILayoutConstraintAxisHorizontal];
    }
    return _userNameLbl;
}

- (UILabel *)passwordLbl{
    if (!_passwordLbl) {
        _passwordLbl = [UILabel new];
        _passwordLbl.backgroundColor = [UIColor lightGrayColor];
        [_passwordLbl setPreferredMaxLayoutWidth:80];
        
        // 设置自适应优先级
        [_passwordLbl setContentHuggingPriority:UILayoutPriorityDefaultHigh forAxis:UILayoutConstraintAxisHorizontal];
    }
    return _passwordLbl;
}
@end

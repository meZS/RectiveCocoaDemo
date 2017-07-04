//
//  CustomView.m
//  ReactiveCocoaDemo
//
//  Created by wordy on 2017/7/3.
//  Copyright © 2017年 golddatacommunications. All rights reserved.
//

#import "CustomView.h"

@implementation CustomView

- (instancetype)init
{
    if (self = [super init]) {
        // 不用重复调用,若已调用其他init构造方法.
        
        [self setView];
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        
        [self setView];
    }
    return self;
}
- (void)setView
{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button setTitle:@"点我" forState:UIControlStateNormal];
    [button setBackgroundColor:[UIColor redColor]];
    [button setFrame:CGRectMake(200/2, 150/2, 100, 50)];
    [button addTarget:self action:@selector(click) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:button];

    
}
- (void)click
{
    // 通知代理
    // 判断代理信号是否有值
    if (self.delegateSignal) {
        // 有值,才需要通知--根据业务发送信号内容
        [self.delegateSignal sendNext:@"按钮被点击了"];
    }
 
    self.name = @"德玛西亚"; // 调用set方法赋值. _name=@"": 普通赋值
    
}

- (void)setName:(NSString *)name
{
    _name = name;
}



@end

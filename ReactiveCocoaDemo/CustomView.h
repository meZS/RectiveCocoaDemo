//
//  CustomView.h
//  ReactiveCocoaDemo
//
//  Created by wordy on 2017/7/3.
//  Copyright © 2017年 golddatacommunications. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RACSubject.h" // 信号接收者
@interface CustomView : UIView

// 添加一个RACSubject 代替代理
@property (nonatomic,strong)RACSubject *delegateSignal;


@property (nonatomic,copy)NSString * name;

@end

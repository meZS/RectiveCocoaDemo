//
//  ViewController.h
//  ReactiveCocoaDemo
//
//  Created by wordy on 2017/7/3.
//  Copyright © 2017年 golddatacommunications. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReactiveCocoa.h"
#import "NSNotificationCenter+RACSupport.h" // 代替通知
#import "RACEXTScope.h" //处理 @weakify(self)@strongify(self),
//在 Block 内如果需要访问 self 的方法、变量，建议使用 weakSelf。
// 如果在 Block 内需要多次 访问 self，则需要使用 strongSelf。
@interface ViewController : UIViewController


@property (nonatomic,strong)RACCommand *command;


@property (nonatomic,strong)UILabel *label;
@end



// Model 声明
@interface City : NSObject

@property (nonatomic,copy)NSString *m_city;
@property (nonatomic,copy)NSString *name;
@property (nonatomic,copy)NSString *age;
+ (City *)parseWithDict:(NSDictionary *)dict;

- (instancetype)initWithDict:(NSDictionary *)dict; // 解析字典

@end

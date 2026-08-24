//
//  BaiduMobAdRewardVideoModel.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2026/6/24.
//  Copyright © 2026 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdRewardVideoModel : NSObject

/**
 * 订单激励组件展示奖励值
 * 例如：@"100"
 */
@property (nonatomic, strong) NSString *orderRewardValue;

/**
 * 订单激励组件展示奖励单位
 * 例如：@"元"
 */
@property (nonatomic, strong) NSString *orderRewardUnit;

@end

NS_ASSUME_NONNULL_END

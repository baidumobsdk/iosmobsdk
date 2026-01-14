//
//  BaiduMobAdRewardRequestParamters.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2025/12/29.
//  Copyright © 2025 Baidu. All rights reserved.
//

#import <BaiduMobAdSDK/BaiduMobAdFeedRequestParameters.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdRewardRequestParamters : BaiduMobAdFeedRequestParameters

/**
 * 设置两段式奖励信息
 * 注：需要在show之前调用，普通奖励参数不生效
 */
// 二段激励 配置信息(必传)  奖励类型，0: 普通奖励(可不配置)，1:膨胀奖励、2: 翻倍奖励
@property (nonatomic, strong) NSString *rewardType;
// 二段激励 配置信息(必传)  基础奖励数值(例如：10)，最多支持展示 5 位
@property (nonatomic, strong) NSString *basicReward;
// 二段激励 配置信息(必传)  基础奖励单位(例如：元)，最多支持展示 3 位
@property (nonatomic, strong) NSString *basicUnit;
// 二段激励 配置信息(必传)  膨胀/翻倍奖励数值(例如: 40)，最多支持展示 5 位
@property (nonatomic, strong) NSString *advancedReward;
// 二段激励 配置信息(必传)  膨胀/翻倍奖励单位(例如：元)，最多支持展示 3 位
@property (nonatomic, strong) NSString *advancedUnit;
// 二段激励 配置信息(翻倍奖励必传)  翻倍奖励的倍数(仅需传入数字)，例如2倍传入 @"2"
@property (nonatomic, strong) NSString *multiple;

@end

NS_ASSUME_NONNULL_END

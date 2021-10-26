//
//  BaiduMobAdExpressInterstitial.h
//  BaiduMobAdSDK
//
//  Created by yangdingjia on 2021/9/18.
//  Copyright © 2021 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaiduMobAdExpressIntDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdExpressInterstitial : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id <BaiduMobAdExpressIntDelegate> delegate;

/**
 *  应用的APPID
 */
@property (nonatomic, copy) NSString *publisherId;

/**
 *  设置/获取代码位(广告位)id
 */
@property (nonatomic, copy) NSString *adUnitTag;

/**
 *  启动位置信息 如果enable，plist 需要增加NSLocationWhenInUseUsageDescription
 */
@property (nonatomic, assign) BOOL enableLocation;

/**
 *  预加载插屏广告，并缓存物料信息到本地。
 *  注意广告的展示存在有效期，单次检索后须在一定时间内展示在页面上
 */
- (void)load;

/**
 *  返回广告状态
 *  YES代表可用(广告未过期，且缓存成功)，NO代表不可用
 */
- (BOOL)isReady;

/**
 *  展示插屏使用的controller present
 */
- (void)showFromViewController:(UIViewController *)controller;

/**
 *  广告价格标签
 */
- (NSString *)getECPMLevel;

/**
 * 反馈竞价成功及二价
 * @param secondPrice 第二价格
 */
- (void)biddingSuccess:(NSString *)secondPrice;

/**
 * 反馈竞价失败及原因
 * @param reason 失败原因
 */
- (void)biddingFail:(NSString *)reason;

@end

NS_ASSUME_NONNULL_END

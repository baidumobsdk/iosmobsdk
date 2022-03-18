//
//  BaiduMobAdExpressNativeView+inter.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/1/4.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BaiduMobAdNativeAdObject;
@class BaiduMobAdNative;
@class BaiduMobAdNativeVideoView;

@interface BaiduMobAdExpressNativeView : UIView

@property (nonatomic, strong) BaiduMobAdNativeAdObject *adObject;

/**
 信息流广告容器宽,不设置默认屏幕宽。如需需改，先设置后，再render
 */
@property (nonatomic, assign) CGFloat width;

/**
 信息流广告容器高,render成功回调后，生效。
 */
@property (nonatomic, assign) CGFloat height;

/**
 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 设置组件的当前ViewController，以打开落地页等，必选。
 */
@property (nonatomic, weak) UIViewController *baseViewController;

/**
 设置信息流广告对象，用于回调
 */
@property (nonatomic, weak) BaiduMobAdNative *native;


@property (nonatomic, strong) UIView *videoContentView;

@property (nonatomic, strong) BaiduMobAdNativeVideoView *playerView;

/**
 组件渲染
 */
- (void)render;

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

/**
 * 是否过期，默认为false，30分钟后过期，需要重新请求广告
 */
- (BOOL)isExpired;

- (instancetype)initWithAdObject:(BaiduMobAdNativeAdObject *)adObject;

@end


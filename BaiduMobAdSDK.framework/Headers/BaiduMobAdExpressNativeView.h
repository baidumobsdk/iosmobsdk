//
//  BaiduMobAdExpressNativeView.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/1/4.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaiduMobAdCommonConfig.h"

typedef enum {
    BaiduMobAdExpressNativeNormalTheme = 0, // 默认 普通主题
    BaiduMobAdExpressNativeDarkTheme = 1  // 黑夜模式
} BaiduMobAdExpressNativeTheme;

@interface BaiduMobAdExpressNativeView : UIView

/**
 * 优选模板容器宽度，默认为屏幕宽，需要在render调用前配置
 */
@property (nonatomic, assign) CGFloat width;

/**
 * 优选模板高度，调用render后可以获取模板高度
 */
@property (nonatomic, assign, readonly) CGFloat height;

/**
 * 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 * 设置组件的当前ViewController，以打开落地页等，必选。
 */
@property (nonatomic, weak) UIViewController *baseViewController;

/**
 * 信息流优选模板广告样式类型
 */
@property (nonatomic, assign) BaiduMobAdSmartFeedStyleType style_type;

/**
 * 设置优选模板主题
 */
- (void)setExpressTheme:(BaiduMobAdExpressNativeTheme)theme;

/**
 * 渲染模板
 */
- (void)render;

/**
 * 发送展现
 */
- (void)trackImpression;

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

/**
 * 销毁模板，释放内存
 */
- (void)destroyExpressView;

@end

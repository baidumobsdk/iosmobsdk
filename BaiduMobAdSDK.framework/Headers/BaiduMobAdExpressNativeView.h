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
#import "BaiduMobAdExpressNativeData.h"

@protocol BaiduMobAdNativeInterationDelegate;

typedef enum {
    BaiduMobAdExpressNativeNormalTheme = 0, // 默认 普通主题
    BaiduMobAdExpressNativeDarkTheme = 1  // 黑夜模式
} BaiduMobAdExpressNativeTheme;

@interface BaiduMobAdExpressNativeView : UIView

/**
 * 广告交互 delegate
 */
@property (nonatomic, weak) id <BaiduMobAdNativeInterationDelegate> interationDelegate;

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
 * 负反馈后获取广告物料信息
 */
@property (nonatomic, strong) BaiduMobAdExpressNativeData *adData;

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
 * @param reason 失败原因，参考文档附录
 */
- (void)biddingFail:(NSString *)reason;

/**
 * 反馈竞价失败及原因
 * @param reason 失败原因，参考文档附录
 * @param winInfo 竞胜方的信息，
 *        Key：ecpm Value：为本次竞胜方出价（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞胜方渠道ID，类型为Integer。具体ID枚举见文档
 */
- (void)biddingFail:(NSString *)reason winInfo:(NSDictionary *)winInfo;

/**
 * 是否过期，默认为false，2h后过期，需要重新请求广告
 */
- (BOOL)isExpired;

/**
 * 销毁模板，释放内存
 */
- (void)destroyExpressView;

/**
 * 根据key获取广告相关字段
 * @param key 需要获取的key字段
 * @return 字段的字符串
 */
- (NSString *)getAdDataForKey:(NSString *)key;

@end

//
//  BaiduMobAdExpressNativeView.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/1/4.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <BaiduMobAdSDK/BaiduMobAdExpressNativeData.h>

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
 * 优选模板全屏样式宽高比，仅在竖版视频样式生效，设置宽除高的小数，设置后，以此比例计算尺寸渲染。
 */
@property (nonatomic, assign) CGFloat ratio;

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
 * 注意：5.351版本以后，无需调用该接口，SDK内自检测模板广告曝光
 */
- (void)trackImpression BaiduMobAdDEPRECATED_MSG("5.351以后将废弃，无需调用");

/**
 *  广告价格标签
 */
- (NSString *)getECPMLevel;

/**
 * 竞价成功，上报竞价失败排名第二的信息
 * @param secondInfo 竞败方，排名第二的信息
 *        Key：ecpm Value：为本次竞败方排名第二的价格（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞败方排名第二的渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 成功失败回调，请注意失败回调

 */
- (void)biddingSuccessWithSecondInfo:(NSDictionary *)secondInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;

/**
 * 反馈竞价失败及原因，无广告返回时，请通过请求失败接口的adObject对象上报信息
 * @param winInfo 竞胜方的信息，
 *        Key：ecpm Value：为本次竞胜方出价（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞胜方渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 成功失败回调，请注意失败回调
 */
- (void)biddingFailWithWinInfo:(NSDictionary *)winInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;

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

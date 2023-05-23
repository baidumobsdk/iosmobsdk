//
//  BaiduMobAdSplash.h
//  BaiduMobAdSDK
//
//  Created by LiYan on 16/5/25.
//  Copyright © 2016年 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaiduMobAdSplashDelegate.h"
#import "BaiduMobAdFeedRequestParameters.h"
@interface BaiduMobAdSplash : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id <BaiduMobAdSplashDelegate> delegate;

/**
 * 开屏点睛-卡片样式delegate
 */
@property (nonatomic, weak) id <BaiduMobAdSplashCardViewDelegate> cardDelegate;

/**
 * 开屏点睛-icon样式delegate
 */
@property (nonatomic, weak) id <BaiduMobAdSplashFocusZoomOutViewDelegate> zoomOutDelegate;

/**
 * 是否支持开屏点睛-卡片样式
 * 广告返回后获取，不可set
 */
@property (nonatomic, assign, readonly) BOOL hasCardView;

/**
 * 是否支持开屏点睛-icon样式
 * 广告返回后获取，不可set
 */
@property (nonatomic, assign, readonly) BOOL hasZoomOutView;

/**
 *  设置/获取代码位id
 */
@property (nonatomic, copy) NSString *AdUnitTag;

/**
 *  设置开屏广告是否可以点击的属性,开屏默认可以点击。
 */
@property (nonatomic, assign) BOOL canSplashClick;

/**
 *  SDK版本
 */
@property (nonatomic, readonly) NSString *version;

/**
 * 广告请求超时时间，默认3s，单位s
 */
@property (nonatomic, assign) NSTimeInterval timeout;

/**
 * 广告渲染视图大小，必须大于200*200
 */
@property (nonatomic, assign) CGSize adSize;

/**
 *  使用controller present 落地页
 */
@property (nonatomic, weak) UIViewController *presentAdViewController;

/**
 * 设置摇一摇的尺寸高或宽，摇一摇默认69pt
 */
@property (nonatomic, assign) CGFloat shakeImageViewSize;
/**
 * 设置扭一扭图片的尺寸高，默认63pt
 */
@property (nonatomic, assign) CGFloat twistImageViewSize;

//扭一扭蒙层颜色
@property (nonatomic, strong) UIColor *twistMaskColor;

/**
 * 设置底价过滤，支持客户端与服务端bidding配置
 * 仅支持整数值，单位：分
 */
@property (nonatomic, assign) int bidFloor;






/**
 * 开屏传参
 */
@property (nonatomic, strong) BaiduMobAdFeedRequestParameters *requestParameters;

/**
 *  请求并展示开屏广告，广告尺寸以传入window大小为准
 */
- (void)loadAndDisplayUsingKeyWindow:(UIWindow *)keyWindow;

/**
 *  请求并展示半屏开屏广告，广告尺寸以传入view大小为准
 */
- (void)loadAndDisplayUsingContainerView:(UIView *)view;

/**
 * 展示开屏点睛-卡片样式
 * 注意：若渲染该样式，需要实现cardDelegate
 * 不要释放开屏对象，否则回调无法正常回调
 * @param viewController 用于展示卡片的VC
 */
- (void)showCardViewInViewController:(UIViewController *)viewController;

/**
 * 展示开屏点睛-icon样式
 * 注意：若渲染该样式，需要实现zoomOutDelegate
 * 不要释放开屏对象，否则回调无法正常回调
 * @param viewController 用于展示卡片的VC
 */
- (void)showZoomOutViewInViewController:(UIViewController *)viewController;

/**
 * 展示广告
 * @param viewController 展示广告所在的VC
*/
- (void)showSplashViewInViewController:(UIViewController *)viewController;

/**
 * 请求开屏广告，仅请求不做展示，需要手动调用show展示广告
 * load之前请先设置开屏渲染视图大小：adSize
 */
- (void)load;

/**
 * 展示广告
*/
- (void)showInContainerView:(UIView *)view;

/**
 * 重置广告容器大小
*/
- (void)resizeLayout;

/**
 * 开屏广告自定义相关配置字段
 */
- (NSString *)getExtData;

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
 * 获取Bidding token
 * @return 媒体ADX请求广告所需的token
 */
- (NSString *)getBiddingToken;

/**
 * 请求bidding广告
 * @param bidId 媒体传入，竞价成功的广告id
 */
- (void)loadBiddingAd:(NSString *)bidId;

/**
 * 销毁开屏，释放资源
 */
- (void)stop;


/**
 * 根据key获取广告相关字段
 * @param key 需要获取的key字段
 * @return 字段的字符串
 */
- (NSString *)getAdDataForKey:(NSString *)key;

#pragma mark - DEPRECATED_ATTRIBUTE

- (void)setBiddingData:(NSString *)data BaiduMobAdDEPRECATED_MSG("已废弃，请接入最新的服务端bidding渲染方式");


@end

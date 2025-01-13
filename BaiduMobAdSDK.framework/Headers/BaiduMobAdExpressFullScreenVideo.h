//
//  BaiduMobAdExpressFullScreenVideo.h
//  BaiduMobAdSDK
//
//  Created by Sun,Mingzhe on 2020/9/29.
//  Copyright © 2020 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdExpressFullScreenVideoDelegate.h>
#import <BaiduMobAdSDK/BaiduMobAdFeedRequestParameters.h>


@interface BaiduMobAdExpressFullScreenVideo : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id <BaiduMobAdExpressFullScreenVideoDelegate> delegate;


/**
 * 全屏视频传参
 */
@property (nonatomic, strong) BaiduMobAdFeedRequestParameters *requestParameters;

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
 * 广告类型，请在request请求之前赋值
 */
@property (nonatomic, assign) BaiduMobAdType adType;

/**
 * 设置底价过滤，支持客户端与服务端bidding配置
 * 仅支持整数值，单位：分
 */
@property (nonatomic, assign) int bidFloor;

/**
 *  预加载视频广告，并缓存物料信息到本地。
 *  注意广告的展示存在有效期，单次检索后须在一定时间内展示在页面上
 */
- (void)load;

/**
 *  全屏视频广告的展示存在有效期，单次检索后须在一定时间内展示在页面上
 *  返回本地是否有可用广告    YES代表本地有缓存成功且未过期的广告，NO代表不可用
 */
- (BOOL)isReady;

/**
 *  展示全屏视频，默认RootViewController present
 *  默认使用本地缓存，本地缓存失效则在线请求播放
 */
- (void)show;


/**
 *  展示全屏视频，使用controller present
 *  默认使用本地缓存，本地缓存失效则在线请求播放
 */
- (void)showFromViewController:(UIViewController *)controller;

/**
 *  广告价格标签
 */
- (NSString *)getECPMLevel;

- (NSString *)getPECPM;

/**
 * 竞价成功，上报竞价失败排名第二的信息
 * @param secondInfo 竞败方，排名第二的信息
 *        Key：ecpm Value：为本次竞败方排名第二的价格（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞败方排名第二的渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 发送成功或失败回调
 */
- (void)biddingSuccessWithSecondInfo:(NSDictionary *)secondInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;

/**
 * 反馈竞价失败及原因，无广告返回时也可用此接口上报竞胜方信息
 * @param winInfo 竞胜方的信息
 *        Key：ecpm Value：为本次竞胜方出价（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞胜方渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 发送成功或失败回调
 */
- (void)biddingFailWithWinInfo:(NSDictionary *)winInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;


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

#pragma mark - DEPRECATED_ATTRIBUTE

- (void)setBiddingData:(NSString *)data BaiduMobAdDEPRECATED_MSG("已废弃，请接入最新的服务端bidding渲染方式");


@end

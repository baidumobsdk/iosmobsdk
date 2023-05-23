//
//  BaiduMobAdRewardVideo.h
//  BaiduMobAdSDK
//
//  Created by Yang,Dingjia on 2018/7/3.
//  Copyright © 2018年 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdRewardVideoDelegate.h"
#import "BaiduMobAdFeedRequestParameters.h"



@interface BaiduMobAdRewardVideo : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id <BaiduMobAdRewardVideoDelegate> delegate;

/**
 * 激励视频传参
 */
@property (nonatomic, strong) BaiduMobAdFeedRequestParameters *requestParameters;


/**
 *  应用的APPID
 */
@property (nonatomic, copy) NSString *publisherId;

/**
 *  设置/获取代码位(广告位)id
 */
@property (nonatomic, copy) NSString *AdUnitTag;

/**
 *  启动位置信息 如果enable，plist 需要增加NSLocationWhenInUseUsageDescription
 */
@property (nonatomic, assign) BOOL enableLocation;

/**
 *  是否使用激励倒计时
 */
@property (nonatomic, assign) BOOL useRewardCountdown;

/**
 * 设置用户id
 */
@property (nonatomic, strong) NSString *userID;

/**
 * 设置自定义参数
 */
@property (nonatomic, strong) NSString *extraInfo;

/**
 * 是否使用跳过弹窗
 */
@property (nonatomic, assign) BOOL useSkipAlertView;

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
 *  激励视频广告的展示存在有效期，单次检索后须在一定时间内展示在页面上
 *  返回本地是否有可用广告    YES代表本地有缓存成功且未过期的广告，NO代表不可用
 */
- (BOOL)isReady;

/**
 *  展示激励视频，默认RootViewController present
 *  默认使用本地缓存，本地缓存失效则在线请求播放
 */
- (void)show;

/**
 *  展示激励视频，使用controller present
 *  默认使用本地缓存，本地缓存失效则在线请求播放
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
 * 根据key获取广告相关字段
 * @param key 需要获取的key字段
 * @return 字段的字符串
 */
- (NSString *)getAdDataForKey:(NSString *)key;

#pragma mark - DEPRECATED_ATTRIBUTE

- (void)setBiddingData:(NSString *)data BaiduMobAdDEPRECATED_MSG("已废弃，请接入最新的服务端bidding渲染方式");


@end

//
//  BaiduMobAdNative.h
//  BaiduMobAdSdk
//
//  Created by lishan04 on 15-1-8.
//
//

#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdNativeAdDelegate.h>
#import <BaiduMobAdSDK/BaiduMobAdFeedRequestParameters.h>
#import <BaiduMobAdSDK/BaiduMobAdNativeInterationDelegate.h>

@class BaiduMobAdNativeAdView;

@interface BaiduMobAdNative : NSObject

/**
 *  应用的APPID
 */
@property(nonatomic, copy) NSString *publisherId;

/**
 *  设置/获取代码位(广告位)id
 */
@property (nonatomic, copy) NSString *adUnitTag;

#warning 注意！！接入变更：信息流广告原有delegate已经废弃，广告请求和行为delegate拆分为两个adDelegate和InterationDelegate
/**
 * 广告请求 delegate
 */
@property (nonatomic, weak) id<BaiduMobAdNativeAdDelegate> adDelegate;

/**
 * 针对视频缓存delegate
 * 适用于竖版视频，信息流视频不建议使用
 */
@property (nonatomic, weak) id<BaiduMobAdNativeCacheDelegate> cacheDelegate;

/**
 * 模版高度，仅用于信息流模版广告
 */
@property (nonatomic, strong) NSNumber *baiduMobAdsHeight;

/**
 * 模版宽度，仅用于信息流模版广告
 */
@property (nonatomic, strong) NSNumber *baiduMobAdsWidth;

/**
 *  使用controller present 落地页
 */
@property (nonatomic, weak) UIViewController *presentAdViewController;

/**
 * 广告请求成功后是否缓存视频物料，YES:缓存 NO:不缓存。默认缓存
 */
@property (nonatomic, assign) BOOL isCacheVideo;

/**
 * 广告请求超时时间，默认30s，单位s
 */
@property (nonatomic, assign) NSTimeInterval timeout;

/**
 * 广告类型，请在request请求之前赋值
 */
@property (nonatomic, assign) BaiduMobAdType adType;

/**
 * 信息流传参
 */
@property (nonatomic, strong) BaiduMobAdFeedRequestParameters *requestParameters;

/**
 * 设置底价过滤，支持客户端与服务端bidding配置
 * 仅支持整数值，单位：分
 */
@property (nonatomic, assign) int bidFloor;

/**
 * 是否请求优选模板广告，默认请求元素广告
 */
@property (nonatomic, assign) BOOL isExpressNativeAds;

/**
 *  请求信息流广告
 *  注意广告的展示存在有效期，单次检索后须在一定时间内展示在页面上
 */
- (void)requestNativeAds;

/**
 *  预加载视频素材  如果有多条素材会在所以素材均缓存完毕后回调nativeVideoAdCacheSuccess
 */
- (void)preloadVideoMaterial;

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

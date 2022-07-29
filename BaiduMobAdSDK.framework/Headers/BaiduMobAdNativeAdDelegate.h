//
//  BaiduMobAdInterstitialDelegate.h
//  BaiduMobAdWebSDK
//
//  Created by deng jinxiang on 13-8-1.
//
//
#import <Foundation/Foundation.h>
#import "BaiduMobAdCommonConfig.h"

@class BaiduMobAdNative;
@class BaiduMobAdNativeAdView;
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdExpressNativeView;

@protocol BaiduMobAdNativeAdDelegate <NSObject>

@optional
/**
 *  应用在mssp.baidu.com上的APPID
 */
- (NSString *)publisherId;

/**
 * 广告位id
 */
- (NSString *)apId;

/**
 * 模版高度，仅用于信息流模版广告
 */
- (NSNumber *)baiduMobAdsHeight;

/**
 * 模版宽度，仅用于信息流模版广告
 */
- (NSNumber *)baiduMobAdsWidth;

/**
 *  渠道ID
 */
- (NSString *)channelId;

/**
 *  启动位置信息
 */
- (BOOL)enableLocation;//如果enable，plist 需要增加NSLocationWhenInUseUsageDescription

/**
 * 广告请求成功
 * 请求成功的数组，如果只成功返回一条原生广告，数组大小为1
 * 注意：如果是返回元素，nativeAds为BaiduMobAdNativeAdObject数组。如果是优选模板，nativeAds为BaiduMobAdExpressNativeView数组
 */
- (void)nativeAdObjectsSuccessLoad:(NSArray *)nativeAds nativeAd:(BaiduMobAdNative *)nativeAd;

/**
 *  广告请求失败
 */
- (void)nativeAdsFailLoadCode:(NSString *)errCode
                      message:(NSString *)message
                     nativeAd:(BaiduMobAdNative *)nativeAd;

#pragma mark - Deprecated

- (void)smartFeedbackSelectedWithObject:(BaiduMobAdNativeAdObject *)object BaiduMobAdDEPRECATED_MSG("已废弃，请使用nativeAdDislikeClick:");

- (void)nativeAdsFailLoad:(BaiduMobFailReason)reason nativeAd:(BaiduMobAdNative *)nativeAd BaiduMobAdDEPRECATED_MSG("已废弃，请使用nativeAdsFailLoadCode:message:nativeAd:");

@end

#pragma mark - 视频缓存delegate

@protocol BaiduMobAdNativeCacheDelegate <NSObject>

@optional
/**
 *  视频缓存成功
 */
- (void)nativeVideoAdCacheSuccess:(BaiduMobAdNative *)nativeAd;

/**
 *  视频缓存失败
 */
- (void)nativeVideoAdCacheFail:(BaiduMobAdNative *)nativeAd withError:(BaiduMobFailReason)reason;

@end

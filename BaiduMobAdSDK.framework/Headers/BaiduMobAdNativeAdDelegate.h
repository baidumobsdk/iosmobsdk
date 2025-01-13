//
//  BaiduMobAdInterstitialDelegate.h
//  BaiduMobAdWebSDK
//
//  Created by deng jinxiang on 13-8-1.
//
//
#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdCommonConfig.h>

@class BaiduMobAdNative;
@class BaiduMobAdNativeAdView;
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdExpressNativeView;

@protocol BaiduMobAdNativeAdDelegate <NSObject>

@required

/**
 * 广告请求成功
 * 请求成功的数组，如果只成功返回一条原生广告，数组大小为1
 * 注意：如果是返回元素，nativeAds为BaiduMobAdNativeAdObject数组。如果是优选模板，nativeAds为BaiduMobAdExpressNativeView数组
 */
- (void)nativeAdObjectsSuccessLoad:(NSArray *)nativeAds nativeAd:(BaiduMobAdNative *)nativeAd;

/**
 * 广告请求失败
 * adObject对象内仅有竞胜竞败能力，支持无广告返回时提供竞败信息上传
 */
- (void)nativeAdsFailLoadCode:(NSString *)errCode
                      message:(NSString *)message
                     nativeAd:(BaiduMobAdNative *)nativeAd
                     adObject:(BaiduMobAdNativeAdObject *)adObject;

@optional

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

#pragma mark - 已过期方法

/**
 *  应用在mssp.baidu.com上的APPID
 */
- (NSString *)publisherId BaiduMobAdDEPRECATED_MSG("已废弃，请使用BaiduMobAdNative.publisherId传入");

/**
 * 广告位id
 */
- (NSString *)apId BaiduMobAdDEPRECATED_MSG("已废弃，请使用BaiduMobAdNative.adUnitTag传入");

/**
 *  广告请求失败
 */
- (void)nativeAdsFailLoadCode:(NSString *)errCode
                      message:(NSString *)message
                     nativeAd:(BaiduMobAdNative *)nativeAd
                    BaiduMobAdDEPRECATED_MSG("已废弃，请使用nativeAdsFailLoadCode:message:nativeAd:adObject:");
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

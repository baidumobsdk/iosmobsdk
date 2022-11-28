//
//  BaiduMobAdNativeInterationDelegate.h
//  BaiduMobAdSDK
//
//  Created by yangdingjia on 2022/7/8.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#ifndef BaiduMobAdNativeInterationDelegate_h
#define BaiduMobAdNativeInterationDelegate_h


#endif /* BaiduMobAdNativeInterationDelegate_h */

@class BaiduMobAdNative;
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdExpressNativeView;

@protocol BaiduMobAdNativeInterationDelegate <NSObject>

@optional

/**
 *  广告曝光成功
 */
- (void)nativeAdExposure:(UIView *)nativeAdView nativeAdDataObject:(BaiduMobAdNativeAdObject *)object;

/**
 *  广告曝光失败
 */
- (void)nativeAdExposureFail:(UIView *)nativeAdView
          nativeAdDataObject:(BaiduMobAdNativeAdObject *)object
                  failReason:(int)reason;

/**
 *  广告点击
 */
- (void)nativeAdClicked:(UIView *)nativeAdView nativeAdDataObject:(BaiduMobAdNativeAdObject *)object;

/**
 *  广告详情页关闭
 */
- (void)didDismissLandingPage:(UIView *)nativeAdView;

/**
 *  联盟官网点击跳转
 */
- (void)unionAdClicked:(UIView *)nativeAdView nativeAdDataObject:(BaiduMobAdNativeAdObject *)object;

/**
 *  反馈弹窗展示
 *  @param adView 当前的广告视图
 */
- (void)nativeAdDislikeShow:(UIView *)adView;

/**
 *  反馈弹窗点击
 *  @param adView 当前的广告视图
 *  @param reason 反馈原因
 */
- (void)nativeAdDislikeClick:(UIView *)adView reason:(BaiduMobAdDislikeReasonType)reason;

/**
 *  反馈弹窗关闭
 *  @param adView 当前的广告视图
 */
- (void)nativeAdDislikeClose:(UIView *)adView;

/**
 *  视频缓存成功
 */
- (void)nativeVideoAdCacheSuccess:(BaiduMobAdNative *)nativeAd;

/**
 *  视频缓存失败
 */
- (void)nativeVideoAdCacheFail:(BaiduMobAdNative *)nativeAd withError:(BaiduMobFailReason)reason;

/**
 * BaiduMobAdExpressNativeView组件渲染成功
 */
- (void)nativeAdExpressSuccessRender:(BaiduMobAdExpressNativeView *)express
                            nativeAd:(BaiduMobAdNative *)nativeAd;

@end

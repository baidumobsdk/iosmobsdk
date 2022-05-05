//
//  BaiduMobAdExpressIntDelegate.h
//  BaiduMobAdSDK
//
//  Created by yangdingjia on 2021/9/18.
//  Copyright © 2021 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdCommonConfig.h"

@class BaiduMobAdExpressInterstitial;

@protocol BaiduMobAdExpressIntDelegate <NSObject>

@optional
#pragma mark - 广告请求delegate
/**
 * 广告请求成功
 */
- (void)interstitialAdLoaded:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 * 广告请求失败
 */
- (void)interstitialAdLoadFailCode:(NSString *)errCode
                           message:(NSString *)message
                    interstitialAd:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 *  广告曝光成功
 */
- (void)interstitialAdExposure:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 *  广告展现失败
 */
- (void)interstitialAdExposureFail:(BaiduMobAdExpressInterstitial *)interstitial withError:(int)reason;


/**
 *  广告被关闭
 */
- (void)interstitialAdDidClose:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 *  广告被点击
 */
- (void)interstitialAdDidClick:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 *  广告落地页关闭
 */
- (void)interstitialAdDidLPClose:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 * 广告反馈点击
 */
- (void)interstitialAdDislikeClick:(BaiduMobAdExpressInterstitial *)interstitial;

#pragma mark - 视频缓存delegate

/**
 *  视频缓存成功
 */
- (void)interstitialAdDownloadSucceeded:(BaiduMobAdExpressInterstitial *)interstitial;

/**
 *  视频缓存失败
 */
- (void)interstitialAdDownLoadFailed:(BaiduMobAdExpressInterstitial *)interstitial;

#pragma mark - Deprecated
- (void)interstitialAdLoadFailed:(BaiduMobAdExpressInterstitial *)interstitial withError:(BaiduMobFailReason)reason BaiduMobAdDEPRECATED_MSG("interstitialAdFailCode:message:interstitialAd:");

@end


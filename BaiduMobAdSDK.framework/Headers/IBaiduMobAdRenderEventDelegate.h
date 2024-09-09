//
//  IBaiduMobAdRenderEventDelegate.h
//  BaiduMobAdSDK
//
//  Created by lishan04 on 16/5/12.
//  Copyright © 2016年 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdCommonConfig.h>
@class BaiduMobAdRenderer;
@class BaiduMobAdInstance;

@protocol IBaiduMobAdRenderEventDelegate <NSObject>
@optional
- (void)onAdLoaded:(BaiduMobAdRenderer *)render
    withAdInstance:(BaiduMobAdInstance *)adInstance
    withDictionary:(NSDictionary *)dict;

- (void)onAdError:(BaiduMobAdRenderer *)render
   withAdInstance:(BaiduMobAdInstance *)adInstance
           reason:(BaiduMobFailReason)reason
   withDictionary:(NSDictionary *)dict;

- (void)onAdPresent:(BaiduMobAdRenderer *)render
        withAdInstance:(BaiduMobAdInstance *)adInstance
        withDictionary:(NSDictionary *)dict;

- (void)onAdImpression:(BaiduMobAdRenderer *)render
        withAdInstance:(BaiduMobAdInstance *)adInstance
        withDictionary:(NSDictionary *)dict;

- (void)onAdClicked:(BaiduMobAdRenderer *)render
     withAdInstance:(BaiduMobAdInstance *)adInstance
     withDictionary:(NSDictionary *)dict;

- (void)onAdStart:(BaiduMobAdRenderer *)render
   withAdInstance:(BaiduMobAdInstance *)adInstance
   withDictionary:(NSDictionary *)dict;

- (void)onAdFinish:(BaiduMobAdRenderer *)render
    withAdInstance:(BaiduMobAdInstance *)adInstance
    withDictionary:(NSDictionary *)dict;

- (void)onAdSkip:(BaiduMobAdRenderer *)render
  withAdInstance:(BaiduMobAdInstance *)adInstance
  withDictionary:(NSDictionary *)dict;

- (void)onSplashVideoReadyPlay:(BaiduMobAdRenderer *)render
                       withDictionary:(NSDictionary *)dict;

- (void)setVisibility:(BOOL)visibility;
/**
 *  在用户点击完广告条出现全屏广告页面以后，用户关闭全屏广告时的回调
 */
- (void)onAdDismissLp;


/**
 广告展现失败

 @param render AdRender
 @param adInstance BaiduMobAdInstance
 @param reason BaiduMobFailReason
 @param dict parameter
 */
- (void)onAdFailedDisplayAd:(BaiduMobAdRenderer *)render
                 adInstance:(BaiduMobAdInstance *)adInstance
                     reason:(BaiduMobFailReason)reason
                 dictionary:(NSDictionary *)dict;


@end

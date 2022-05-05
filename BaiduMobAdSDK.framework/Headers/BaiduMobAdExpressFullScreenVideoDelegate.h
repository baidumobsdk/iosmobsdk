//
//  BaiduMobAdExpressFullScreenVideoDelegate.h
//  BaiduMobAdSDK
//
//  Created by Sun,Mingzhe on 2020/9/29.
//  Copyright © 2020 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdCommonConfig.h"

@class BaiduMobAdExpressFullScreenVideo;

@protocol BaiduMobAdExpressFullScreenVideoDelegate <NSObject>

@optional
#pragma mark - 广告请求delegate
/**
 * 全屏视频广告请求成功
 */
- (void)fullScreenVideoAdLoadSuccess:(BaiduMobAdExpressFullScreenVideo *)video;

/**
 * 全屏视频广告请求失败
 */
- (void)fullScreenVideoAdLoadFailCode:(NSString *)errCode
                              message:(NSString *)message
                         fullScreenAd:(BaiduMobAdExpressFullScreenVideo *)video;

#pragma mark - 视频缓存delegate
/**
 *  视频缓存成功
 */
- (void)fullScreenVideoAdLoaded:(BaiduMobAdExpressFullScreenVideo *)video;

/**
 *  视频缓存失败
 */
- (void)fullScreenVideoAdLoadFailed:(BaiduMobAdExpressFullScreenVideo *)video withError:(BaiduMobFailReason)reason;

#pragma mark - 视频播放delegate

/**
 *  视频开始播放
 */
- (void)fullScreenVideoAdDidStarted:(BaiduMobAdExpressFullScreenVideo *)video;

/**
 *  广告展示失败
 */
- (void)fullScreenVideoAdShowFailed:(BaiduMobAdExpressFullScreenVideo *)video withError:(BaiduMobFailReason)reason;

/**
 *  广告完成播放
 */
- (void)fullScreenVideoAdDidPlayFinish:(BaiduMobAdExpressFullScreenVideo *)video;

/**
 *  用户点击尾帧关闭按钮
 @param progress 当前播放进度 单位百分比 （注意浮点数）
 */
- (void)fullScreenVideoAdDidClose:(BaiduMobAdExpressFullScreenVideo *)video withPlayingProgress:(CGFloat)progress;

/**
 *  用户点击视频跳过按钮
 @param progress 当前播放进度 单位百分比 （注意浮点数）
 */
- (void)fullScreenVideoAdDidSkip:(BaiduMobAdExpressFullScreenVideo *)video withPlayingProgress:(CGFloat)progress;

/**
 *  用户点击下载/查看详情
 @param progress 当前播放进度 单位百分比
 */
- (void)fullScreenVideoAdDidClick:(BaiduMobAdExpressFullScreenVideo *)video withPlayingProgress:(CGFloat)progress;


#pragma mark - Deprecated
- (void)fullScreenVideoAdLoadFail:(BaiduMobAdExpressFullScreenVideo *)video BaiduMobAdDEPRECATED_MSG("fullScreenVideoAdLoadFailCode:message:fullScreenAd:");

@end

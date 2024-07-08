//
//  BaiduMobAdRewardVideoDelegate.h
//  BaiduMobAdSDK
//
//  Created by Yang,Dingjia on 2018/7/3.
//  Copyright © 2018年 Baidu Inc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdCommonConfig.h>

@class BaiduMobAdRewardVideo;

@protocol BaiduMobAdRewardVideoDelegate <NSObject>

@required

#pragma mark - 广告请求delegate
/**
 * 激励视频广告请求成功
 */
- (void)rewardedAdLoadSuccess:(BaiduMobAdRewardVideo *)video;

/**
 * 激励视频广告请求失败
 */
- (void)rewardedAdLoadFailCode:(NSString *)errCode
                       message:(NSString *)message
                    rewardedAd:(BaiduMobAdRewardVideo *)video;

@optional

#pragma mark - 视频缓存delegate
/**
 *  视频缓存成功
 */
- (void)rewardedVideoAdLoaded:(BaiduMobAdRewardVideo *)video;

/**
 *  视频缓存失败
 */
- (void)rewardedVideoAdLoadFailed:(BaiduMobAdRewardVideo *)video withError:(BaiduMobFailReason)reason;

#pragma mark - 视频播放delegate

/**
 *  视频开始播放
 */
- (void)rewardedVideoAdDidStarted:(BaiduMobAdRewardVideo *)video;

/**
 *  广告曝光成功
 */
- (void)rewardedVideoAdDidExposured:(BaiduMobAdRewardVideo *)video;

/**
 *  广告展示失败
 */
- (void)rewardedVideoAdShowFailed:(BaiduMobAdRewardVideo *)video withError:(BaiduMobFailReason)reason;

/**
 *  广告完成播放
 */
- (void)rewardedVideoAdDidPlayFinish:(BaiduMobAdRewardVideo *)video;

/**
 * 成功激励回调
 * 低于30s的视频播放达到90%即会回调
 * 高于30s的视频播放达到27s即会回调
 * @param verify 激励验证，YES为成功
 */
- (void)rewardedVideoAdRewardDidSuccess:(BaiduMobAdRewardVideo *)video verify:(BOOL)verify;

/**
 *  用户点击视频跳过按钮，进入尾帧
 @param progress 当前播放进度 单位百分比 （注意浮点数）
 */
- (void)rewardedVideoAdDidSkip:(BaiduMobAdRewardVideo *)video withPlayingProgress:(CGFloat)progress;

#warning 5.33版本回调时机变更：原rewardedVideoAdDidClose关闭回调拆分为DidClose和WillClose两个回调。新增willClose接口回调时机等同于原DidClose回调时机，新DidClose将在页面完全关闭后回调。
/**
 *  用户点击关闭，激励视频视图关闭
 @param progress 当前播放进度 单位百分比 （注意浮点数）
 */
- (void)rewardedVideoAdDidClose:(BaiduMobAdRewardVideo *)video withPlayingProgress:(CGFloat)progress;


/**
 *  用户点击关闭，激励视频视图即将关闭
 @param progress 当前播放进度 单位百分比 （注意浮点数）
 */
- (void)rewardedVideoAdWillClose:(BaiduMobAdRewardVideo *)video withPlayingProgress:(CGFloat)progress;

/**
 *  用户点击下载/查看详情
 @param progress 当前播放进度 单位百分比
 */
- (void)rewardedVideoAdDidClick:(BaiduMobAdRewardVideo *)video withPlayingProgress:(CGFloat)progress;


@end


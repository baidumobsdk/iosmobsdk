//
//  BaiduMobAdNativeCPUDelegate.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/5/16.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaiduMobAdCommonConfig.h"
@class BaiduMobAdNativeCPU;
@class BaiduMobAdNativeCPUObject;
@class BaiduMobAdNativeCPUVideoView;

@protocol BaiduMobAdNativeCPUDelegate <NSObject>

@optional

/**
 * CPU请求成功
 * @param 请求成功的BaiduMobAdNativeCPUObject数组，如果只成功返回一条广告，数组大小为1
 */
- (void)nativeCPUSuccessLoad:(NSArray *)cpusArray
                   NativeCPU:(BaiduMobAdNativeCPU *)nativeCPU;

/**
 *  CPU请求失败
 */
- (void)nativeCPUFailLoadCode:(NSString *)errCode
                      message:(NSString *)message
                     nativeAd:(BaiduMobAdNativeCPU *)nativeCPU;

/**
 *  详情页关闭
 */
- (void)didDismissLandingPage:(UIView *)nativeCPUView;

/**
 * 广告/内容的 曝光/点击 事件回调
 * @param actType CLICK 点击，IMPRESSION曝光
 */
- (void)nativeCPUNotifyPerformance:(UIView *)nativeCPUView
                               act:(NSString *)actType;

/**
 * 广告负反馈点击
 */
- (void)nativeCPUDislikeClickView:(UIView *)view CPUObject:(BaiduMobAdNativeCPUObject *)object reason:(BaiduMobAdDislikeReasonType)reason;

/**
 * 内容详情页加载完成
 * @param UIViewController 详情页视图
 */
- (void)didFinishLandingPage:(UIViewController *)viewController
                      object:(BaiduMobAdNativeCPUObject *)object;

@end

@protocol BaiduMobAdNativeCPUVideoViewDelegate <NSObject>

@optional

/**
 视频准备开始播放
 
 @param videoView self
 */
- (void)nativeCPUVideoDidStartPlaying:(BaiduMobAdNativeCPUVideoView *)videoView;

/**
 视频暂停播放
 
 @param videoView self
 */
- (void)nativeCPUVideoDidPause:(BaiduMobAdNativeCPUVideoView *)videoView;

/**
 视频播放完成

 @param videoView self
 */
- (void)nativeCPUVideoDidComplete:(BaiduMobAdNativeCPUVideoView *)videoView;

/**
 视频播放失败

 @param videoView self
 */
- (void)nativeCPUVideoDidFailed:(BaiduMobAdNativeCPUVideoView *)videoView;

@end


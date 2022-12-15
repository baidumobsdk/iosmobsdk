//
//  BaiduMobAdNativeReporter.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2022/12/5.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 发送视频广告相关日志
@interface BaiduMobAdNativeReporter : NSObject

/**
 * 视频播放器展示打点，当播放器渲染完成准备播放时调用
 */
- (void)showPlayer;

/**
 * 视频播放器准备就绪打点
 */
- (void)readyPlayVideo;

/**
 * 视频播放器开始播放打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlaybackTime 视频当前播放进度，单位为s
 */
- (void)startPlayVideoStartPlayTime:(NSTimeInterval)startPlayTime
                    withCurrentTime:(NSTimeInterval)currentPlaybackTime;

/**
 * 视频播放器终止/暂停播放打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlayBackTime 视频当前播放进度，单位为s
 * @param reason 终止/暂停原因，原因如下，传入值为原因对应的数字字符串
 *      1：点击广告跳转落地页
        2：离开APP：用户进后台行为
        3：暂停：用户点击暂停
        4：点其他广告元素跳转非落地页其他链接
        5：全部播放完成
        6：关闭广告
        7：其他：包括调用销毁播放器、暂停接口，但无法监控到的用户行为等
 */
- (void)stopPlayVideoStartPlayTime:(NSTimeInterval)startPlayTime
                   withCurrentTime:(NSTimeInterval)currentPlaybackTime
                            reason:(NSString *)reason;

/**
 * 视频播放器重新播放打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlayBackTime 视频当前播放进度，单位为s
 */
- (void)replayVideoStartPlayTime:(NSTimeInterval)startPlayTime
                 withCurrentTime:(NSTimeInterval)currentPlaybackTime;

/**
 * 视频播放器播放失败打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlaybackTime 视频当前播放进度，单位为s
 */
- (void)failPlayVideoStartPlayTime:(NSTimeInterval)startPlayTime
                   withCurrentTime:(NSTimeInterval)currentPlaybackTime;

/**
 * 视频播放器声音切换打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlaybackTime 视频当前播放进度，单位为s
 * @param mute 视频静音切换
 */
- (void)didPlayerMuteChangeStartPlayTime:(NSTimeInterval)startPlayTime
                         withCurrentTime:(NSTimeInterval)currentPlaybackTime
                                  isMute:(BOOL)mute;

/**
 * 视频播放器卡顿/加载中 打点
 * @param startPlayTime 视频开始播放的刻度，单位为s
 * @param currentPlaybackTime 视频当前播放进度，单位为s
 */
- (void)didPlayerBufferStartPlayTime:(NSTimeInterval)startPlayTime
                     withCurrentTime:(NSTimeInterval)currentPlaybackTime;


@end

NS_ASSUME_NONNULL_END

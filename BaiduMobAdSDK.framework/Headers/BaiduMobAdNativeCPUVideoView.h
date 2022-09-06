//
//  BaiduMobAdNativeCPUVideoView.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2022/6/23.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaiduMobAdNativeCPUDelegate.h"
@class BaiduMobAdNativeCPUObject;


NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeCPUVideoView : UIView

- (instancetype)initWithFrame:(CGRect)frame cpuObject:(BaiduMobAdNativeCPUObject *)cpuObject;

@property (nonatomic, weak) id <BaiduMobAdNativeCPUVideoViewDelegate> cpuVideoDelegate; //视频事件delegate

// 视频正在播放
- (BOOL)isPlaying;

// 视频开始播放
- (void)play;

// 视频暂停播放
- (void)pause;

// 销毁播放器
- (void)stop;

@end

NS_ASSUME_NONNULL_END

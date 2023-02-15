//
//  BaiduMobAdNativeSlideView.h
//  BaiduMobAdSDK
//
//  Created by chenyaohuang on 2023/1/13.
//  Copyright © 2023 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN


@protocol BaiduMobAdNativeSlideViewDelegate <NSObject>

// 滑一滑组件消失
- (void)nativeSlideViewDismiss:(UIView *)slideView adObject:(BaiduMobAdNativeAdObject *)object;

@end


@interface BaiduMobAdNativeSlideView : UIView

@property (nonatomic, weak) id <BaiduMobAdNativeSlideViewDelegate> delegate;



/**
 * 初始化滑一滑组件，
 * @param frame 组件frame
 * @param repeat:动画播放次数，-1为无限循环
 * @param animationWidth 动画区域的宽度,不包括文本，不得超过frame尺寸
 * @param animationHeight 动画区域的高度,不包括文本，不得超过frame尺寸
 * @param object BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 */
- (instancetype)initWithFrame:(CGRect)frame
                       repeat:(int)repeat
               animationWidth:(CGFloat)animationWidth
              animationHeight:(CGFloat)animationHeight
                     adObject:(BaiduMobAdNativeAdObject *)object;
// 动画播放
- (void)startSlideAnimation;

// 销毁
- (void)destorySlideView;

@end

NS_ASSUME_NONNULL_END


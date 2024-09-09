//
//  BaiduMobAdDynamicBarrageManager.h
//  XAdSDKDevSample
//
//  Created by sunmingzhe01 on 2024/8/2.
//  Copyright © 2024 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMobAdSDK/BaiduMobAdNativeAdObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdDynamicBarrageManagerDelegate <NSObject>

// 弹幕点击
- (void)baiduDynamicBarrageClick:(UIView *)view;

// 弹幕播放
- (void)baiduDynamicBarrageShow:(UIView *)view;

// 弹幕销毁
- (void)baiduDynamicBarrageDestory:(UIView *)view;

@end

@interface BaiduMobAdDynamicBarrageManager : UIView

@property (nonatomic, weak) id <BaiduMobAdDynamicBarrageManagerDelegate> delegate;

// 初始化，组件高度按下发信息自适应，传入的宽度需要大于120pt
- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

// 渲染组件
- (void)renderDynamicBarrage;

// 获取组件的高度，调用renderDynamicBarrage后才可以获取
- (CGFloat)getComponentHeight;

// 开始播放弹幕
- (void)startAnimation;

// 暂停弹幕
- (void)pause;

// 续播弹幕
- (void)resume;

// 停止接口，不再生成新弹幕，滚动结束后自动销毁
- (void)stop;

// 销毁接口
- (void)destoryComponent;

@end

NS_ASSUME_NONNULL_END

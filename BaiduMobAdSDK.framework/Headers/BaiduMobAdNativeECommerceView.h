//
//  BaiduMobAdNativeECommerceView.h
//  BaiduMobAdSDK
//
//  Created by v_lipengfei15 on 2025/8/29.
//  Copyright © 2025 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BaiduMobAdNativeAdObject;
@class BaiduMobAdNativeECommerceView;

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativeECommerceViewDelegate <NSObject>

/// 电商卡片组件点击关闭
- (void)baiduMobAdNativeECommerceClickClose:(BaiduMobAdNativeECommerceView *)eCommerceView;

@end

@interface BaiduMobAdNativeECommerceView : UIView

/// delegate
@property (nonatomic, weak) id <BaiduMobAdNativeECommerceViewDelegate> delegate;

/// 组件初始化，不建议修改frame，可通过动画调整整体大小
- (instancetype)initNativeECommerceView:(BaiduMobAdNativeAdObject *)adObject;

/// 展示组件
- (void)showECommerceView;

/// 销毁组件，回收内存
- (void)destoryECommerceView;

@end

NS_ASSUME_NONNULL_END

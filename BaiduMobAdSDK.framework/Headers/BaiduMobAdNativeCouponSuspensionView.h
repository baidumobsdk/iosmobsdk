//
//  BaiduMobAdNativeSaleCardView.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2024/3/26.
//  Copyright © 2024 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdNativeCouponSuspensionView;

typedef NS_ENUM(NSInteger, BaiduMobAdNativeCouponSuspensionType) {
    BaiduMobAdNativeCouponCardView = 0, // 优惠券样式，组件尺寸95*124
    BaiduMobAdNativeCouponIconView // 挂件样式,80*102
};

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativeCouponSuspensionViewDelegate <NSObject>

/// 优惠券悬浮组件关闭
- (void)baiduMobAdNativeCouponSuspensionClickClose:(BaiduMobAdNativeCouponSuspensionView *)suspensionView;

@end

@interface BaiduMobAdNativeCouponSuspensionView : UIView

/// 组件初始化，不建议修改frame，可通过动画调整整体大小
- (instancetype)initNativeCouponSuspensionView:(BaiduMobAdNativeAdObject *)adObject;

/// delegate
@property (nonatomic, weak) id <BaiduMobAdNativeCouponSuspensionViewDelegate> delegate;

/// 获取当前广告的组件样式
- (BaiduMobAdNativeCouponSuspensionType)getNativeCouponSuspensionViewType;

/// 组件渲染
- (void)renderCouponSuspensionView;

/// 销毁组件，回收内存
- (void)destoryCouponSuspensionView;

@end

NS_ASSUME_NONNULL_END

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

/**
 * 初始化组件 (返回的组件大小是根据传入的宽高值和组件实际的宽高比动态计算)
 * @param frame 组件frame
 * @param adObject BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 */
- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

/// 获取当前广告的组件样式
- (BaiduMobAdNativeCouponSuspensionType)getNativeCouponSuspensionViewType;

/// 组件渲染
- (void)renderCouponSuspensionView;

/// 销毁组件，回收内存
- (void)destoryCouponSuspensionView;

@end

NS_ASSUME_NONNULL_END

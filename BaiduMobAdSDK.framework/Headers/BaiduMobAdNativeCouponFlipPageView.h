//
//  BaiduMobAdNativeFlipPageView.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2024/3/26.
//  Copyright © 2024 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeCouponFlipPageView : UIView

/// 组件初始化，默认组件大小154*154，不建议修改组件frame，可通过动画修改视图尺寸
/// @param adObject 广告对象
- (instancetype)initNativeCouponFlipPageView:(BaiduMobAdNativeAdObject *)adObject;

// 渲染组件
- (void)renderCouponFlipPageView;

// 销毁组件，回收内存
- (void)destoryCouponFlipPageView;

@end

NS_ASSUME_NONNULL_END

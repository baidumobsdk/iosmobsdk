//
//  BaiduMobAdDiscountMagneticView.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2025/12/4.
//  Copyright © 2025 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdDiscountMagneticView : UIView

- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

/// 展示组件
- (void)showDiscountMagneticView;

/// 销毁组件，回收内存
- (void)destoryDiscountMagneticView;

@end

NS_ASSUME_NONNULL_END

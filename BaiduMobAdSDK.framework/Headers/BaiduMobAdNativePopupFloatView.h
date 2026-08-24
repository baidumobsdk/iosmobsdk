//
//  BaiduMobAdNativePopupFloatView.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2026/7/24.
//  Copyright © 2026 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativePopupFloatView : UIView

/**
 * 初始化挂件组件
 * @param frame 媒体传入的展示区域
 * @param adObject BaiduMobAdNativeAdObject对象
 */
- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

/// 组件渲染
- (void)renderPopupFloatView;

/// 销毁组件，回收内存
- (void)destoryPopupFloatView;

@end

NS_ASSUME_NONNULL_END

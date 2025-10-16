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
- (instancetype)initNativeECommerceView:(BaiduMobAdNativeAdObject *)adObject BaiduMobAdDEPRECATED_MSG("已废弃，请接入最新的initWithFrame渲染方式");

/**
 * 初始化电商卡片组件
 * @param frame 组件frame (建议传入的宽高比例为 1 : 1.04)
 * @param adObject BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 */
- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

/// 展示组件
- (void)showECommerceView;

/// 销毁组件，回收内存
- (void)destoryECommerceView;

@end

NS_ASSUME_NONNULL_END

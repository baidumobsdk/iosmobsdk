//
//  BaiduMobAdNativePopupGiftView.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2026/7/24.
//  Copyright © 2026 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdNativePopupGiftView;

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativePopupGiftViewDelegate <NSObject>

/// 弹窗礼盒关闭（点关闭 / lottie 结束），媒体可在此切换展示挂件
- (void)baiduMobAdNativePopupGiftViewDidDismiss:(BaiduMobAdNativePopupGiftView *)giftView;

@end

@interface BaiduMobAdNativePopupGiftView : UIView

@property (nonatomic, weak) id <BaiduMobAdNativePopupGiftViewDelegate> delegate;

/// 按媒体传入容器尺寸渲染
- (instancetype)initWithContainerView:(UIView *)containerView adObject:(BaiduMobAdNativeAdObject *)adObject;

/// 组件渲染
- (void)renderPopupGiftView;

/// 销毁组件，回收内存
- (void)destoryPopupGiftView;

@end

NS_ASSUME_NONNULL_END

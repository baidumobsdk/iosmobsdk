//
//  BaiduMobAdFeedBrowseComponent.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2026/7/27.
//  Copyright © 2026 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdFeedBrowseComponent : UIView

/// 指定展示区域和广告对象
- (instancetype)initWithFrame:(CGRect)frame adObject:(BaiduMobAdNativeAdObject *)object;

/// 确认组件展示时调用
- (void)show;

/// 销毁组件，停止页面加载并回收资源
- (void)destoryFeedBrowseComponent;

@end

NS_ASSUME_NONNULL_END

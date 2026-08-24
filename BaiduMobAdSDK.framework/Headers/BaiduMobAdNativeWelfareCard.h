//
//  BaiduMobAdNativeWelfareCard.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2026/7/20.
//  Copyright © 2026 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;
@class BaiduMobAdNativeWelfareCard;

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativeWelfareCardDelegate <NSObject>

/// 福利卡片前卡关闭
- (void)baiduMobAdNativeWelfareCardClickClose:(BaiduMobAdNativeWelfareCard *)welfareCard;

@end

@interface BaiduMobAdNativeWelfareCard : UIView

/// delegate
@property (nonatomic, weak) id <BaiduMobAdNativeWelfareCardDelegate> delegate;

/**
 * 初始化组件 (内部按 297x146 原始尺寸渲染，再通过 transform 等比适配传入区域)
 * @param frame 组件目标展示区域，宽低于 180 或高低于 100 时返回 nil
 * @param adObject BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 */
- (instancetype)initWithFrame:(CGRect)frame withObject:(BaiduMobAdNativeAdObject *)adObject;

/// 组件渲染，需先调用render后才可调用show接口
- (void)renderWelfareCard;

/// 展示组件，调用后播放前卡入场动画并开始计时
- (void)showWelfareCard;

/// 销毁组件，回收内存
- (void)destoryWelfareCard;

@end

NS_ASSUME_NONNULL_END

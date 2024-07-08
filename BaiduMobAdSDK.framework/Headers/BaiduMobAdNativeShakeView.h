//
//  BaiduMobAdNativeShakeView.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2022/9/6.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativeShakeViewDelegate <NSObject>

// 摇一摇销毁
- (void)nativeShakeViewDismiss:(UIView *)shakeView adObject:(BaiduMobAdNativeAdObject *)object;

@end

@interface BaiduMobAdNativeShakeView : UIView

@property (nonatomic, weak) id <BaiduMobAdNativeShakeViewDelegate> delegate;

/**
 * 初始化摇一摇组件，组件高度需要大于80pt。
 * 摇一摇文案内容为：摇动手机  了解更多  如果组件宽度不够，则会自动将宽度适配文字长度。
 * @param frame 组件frame
 * @param object BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 * 如果返回为nil，原因1：组件尺寸不合规；原因2：广告位不支持
 */
- (instancetype)initWithFrame:(CGRect)frame adObject:(BaiduMobAdNativeAdObject *)object;

// 开启摇动检测
- (void)startShake;

// 停止摇动检测
- (void)stopShake;

// 销毁摇一摇组件
- (void)destoryShakeView;

@end


NS_ASSUME_NONNULL_END

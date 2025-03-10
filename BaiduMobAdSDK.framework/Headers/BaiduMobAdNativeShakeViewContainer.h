//
//  BaiduMobAdNativeShakeViewContainer.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2024/11/19.
//

#import <BaiduMobAdSDK/BaiduMobAdNativeShakeView.h>
@class BaiduMobAdNativeAdObject;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeShakeViewContainer : BaiduMobAdNativeShakeView

/**
 * 初始化摇一摇容器组件，组件高度需要大于80pt。
 * 此组件仅提供摇一摇能力，开发者可以在此容器上添加自定义UI
 * @param frame 组件frame
 * @param object BaiduMobAdNativeAdObject对象
 * @return 组件实例对象
 * 如果返回为nil，原因1：组件尺寸不合规；原因2：广告位不支持；原因3：未签署白名单
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

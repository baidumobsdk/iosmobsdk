//
//  BaiduMobAdBookmarkContainerView.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2024/9/6.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;
#import <BaiduMobAdSDK/BaiduMobAdNativeCouponFlipPageView.h>
#import <BaiduMobAdSDK/BaiduMobAdNativeCouponSuspensionView.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdBookmarkContainerView : UIView

/**
 * 设置组件的当前ViewController，以打开落地页等，必选。
 */
@property (nonatomic, weak) UIViewController *baseViewController;

/**
 * 初始化接口，容器宽度需要大于屏幕宽的1/2，否则不渲染，容器强制宽高比为9:16。
 * 注意：三图类素材不支持渲染为书签样式
 */
- (instancetype)initWithFrame:(CGRect)frame withAdObject:(BaiduMobAdNativeAdObject *)adObject;

/**
 * 点击区域控制。仅render前配置生效。
 * YES：容器可点，NO：容器不可点。
 * 默认值：YES
 */
- (void)containerEnableClick:(BOOL)enable;

/**
 * 设置书签底卡颜色，仅render前配置生效
 * 默认值：#C2C5CC
 */
- (void)setBookmarkBottomCardColor:(NSString *)color;

/**
 * 广告logo显隐控制。仅render前配置生效。
 * 默认值：NO
 */
- (void)hideAdLogo:(BOOL)hide;

/**
 * 反馈按钮显隐。仅render前配置生效。
 * 默认值：NO
 */
- (void)hideDislike:(BOOL)hide;

/**
 * 设置静音按钮显隐。仅render前配置生效。
 * 默认值：NO
 */
- (void)hideMuteButton:(BOOL)hide;

/**
 * 设置静音。仅render前配置生效
 * 默认值：随广告物料
 */
- (void)setMute:(BOOL)mute;

/**
 * 渲染组件
 */
- (void)renderBookmarkView;

/**
 * 添加动效。组件曝光通过BaiduMobAdNativeAdObject的曝光接口上报。
 * 该接口是启动书签模板的动效，可在曝光成功时候调用
 */
- (void)showBookmarkAnimation;

/**
 * 销毁组件
 */
- (void)destoryBookmarkView;


@end

NS_ASSUME_NONNULL_END

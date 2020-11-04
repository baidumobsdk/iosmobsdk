//
//  BaiduMobAdSplash.h
//  BaiduMobAdSDK
//
//  Created by LiYan on 16/5/25.
//  Copyright © 2016年 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaiduMobAdSplashDelegate.h"
@interface BaiduMobAdSplash : NSObject

/**
 *  委托对象
 */
@property (nonatomic, weak) id<BaiduMobAdSplashDelegate> delegate;


/**
 *  设置/获取代码位id
 */
@property (nonatomic, copy) NSString *AdUnitTag;

/**
 *  设置开屏广告是否可以点击的属性,开屏默认可以点击。
 */
@property (nonatomic) BOOL canSplashClick;

/**
 *  SDK版本
 */
@property (nonatomic, readonly) NSString *Version;

/**
 * 广告请求超时时间，默认3s，单位s
 */
@property (nonatomic, assign) NSTimeInterval timeout;

/**
 * 广告渲染视图大小，必须大于200*200
 */
@property (nonatomic, assign) CGSize adSize;

/**
 *  使用controller present 落地页
 */
@property (nonatomic, weak) UIViewController *presentAdViewController;

/**
 *  请求并展示开屏广告，广告尺寸以传入window大小为准
 */
- (void)loadAndDisplayUsingKeyWindow:(UIWindow *)keyWindow;

/**
 *  请求并展示半屏开屏广告，广告尺寸以传入view大小为准
 */
- (void)loadAndDisplayUsingContainerView:(UIView *)view;


/**
 * 请求开屏广告，仅请求不做展示，需要手动调用show展示广告
 * load之前请先设置开屏渲染视图大小：adSize
 */
- (void)load;

/**
 * 展示广告
*/
- (void)showInContainerView:(UIView *)view;


@end

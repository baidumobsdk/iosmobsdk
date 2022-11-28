//
//  BaiduMobAdNativeAdQueryObject.h
//  BaiduMobAdSDK
//
//  Created by chenyaohuang on 2022/9/23.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol BaiduMobAdNativeInterationDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeAdEntryObject : UIView

/**
 * 描述 text,词条
 */
@property (copy, nonatomic) NSString *title;

/**
 * 百度logo图标 url
 */
@property (copy, nonatomic) NSString *baiduLogoURLString;

/**
 * 广告标识图标 url
 */
@property (copy, nonatomic) NSString *adLogoURLString;

/**
 * 广告交互 delegate
 */
@property (nonatomic, weak) id <BaiduMobAdNativeInterationDelegate> interationDelegate;
/**
 * 发送展现
 */
- (void)trackImpression:(UIView *)view;

/**
 * 发送点击
 */
- (void)handleClick:(UIView *)view;

/**
 * 是否过期，默认为false，2h后过期，需要重新请求广告
 */
- (BOOL)isExpired;

/**
 * 百度联盟官网logo点击
 */
- (void)baiduLogoClick:(UIView *)baiduLogoView;
@end

NS_ASSUME_NONNULL_END

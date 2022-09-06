//
//  BaiduMobAdNativeCPU.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/5/16.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdNativeCPUDelegate.h"
#import "BaiduMobAdCPURequestParameters.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeCPU : NSObject

/**
 * 原生CPU的delegate
 */
@property (nonatomic, weak) id<BaiduMobAdNativeCPUDelegate> delegate;

/**
 * 广告请求超时时间，默认30s，单位s
 */
@property (nonatomic, assign) NSTimeInterval timeout;

/**
 *  使用controller present 落地页
 */
@property (nonatomic, weak) UIViewController *presentAdViewController;

/**
 * CPU传参
 */
@property (nonatomic, strong) BaiduMobAdCPURequestParameters *requestParameters;

/**
 * appsid
 */
@property(nonatomic, copy) NSString *appsid;

@property (nonatomic, assign) int pageSize;


- (void)loadCPUWithPage:(int)page
               Channels:(int)channels
               IsShowAd:(BOOL)isShowAd;

@end

NS_ASSUME_NONNULL_END

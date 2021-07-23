//
//  BaiduMobAdPermissionSettings.h
//  BaiduMobAdSDK
//
//  Created by yangdingjia on 2021/6/29.
//  Copyright © 2021 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdPermissionSettings : NSObject

+ (instancetype)sharedInstance;

/**
 * 设置是否允许获取IDFA
 * @param permissionGranted YES允许，默认YES
 */
- (void)setReadDeviceIdPermission:(BOOL)permissionGranted;

/**
 * 设置是否允许获取设备存储信息
 * @param permissionGranted YES允许，默认YES
 */
- (void)setReadStorageInfoPermission:(BOOL)permissionGranted;

@end

NS_ASSUME_NONNULL_END

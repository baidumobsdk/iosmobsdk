//
//  BaiduMobAdManager.h
//  BaiduMobAdSDK
//
//  Created by yangdingjia on 2024/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdManager : NSObject

+ (void)setAppsid:(NSString *)appsid;

/// 初始化SDK
/// - Parameter completionHandler: 初始化回调
+ (void)startWithCompletionHandler:(void(^)(BOOL success, NSError * _Nullable error))completionHandler;

+ (NSString *)getSDKVersion;

@end

NS_ASSUME_NONNULL_END

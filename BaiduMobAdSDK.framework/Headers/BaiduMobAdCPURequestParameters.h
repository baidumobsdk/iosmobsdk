//
//  BaiduMobAdCPURequestParameters.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/5/16.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *CPUFontSizeType_SMALL;
extern NSString *CPUFontSizeType_REGULAR;
extern NSString *CPUFontSizeType_LARGE;
extern NSString *CPUFontSizeType_EXTRA_LARGE;
extern NSString *CPUFontSizeType_XX_LARGE;

@interface BaiduMobAdCPURequestParameters : NSObject

@property (nonatomic, assign) int listScene;

@property (nonatomic, assign) int accessType;

@property (nonatomic, assign) BOOL isDark;

@property (nonatomic ,strong) NSString *customUserId;

@property (nonatomic ,strong) NSString *subChannelId;

@property (nonatomic ,strong) NSString *cityIfLocalChannel;

@property (nonatomic ,strong) NSString *keyWord;

@property (nonatomic ,assign) BOOL isLockMode;


// 用于添加key-value，媒体可自定义key-value
- (void)addParametersKey:(NSString *)key value:(NSString *)value;

- (void)setLpFontSize:(NSString *)fontType;

- (NSString *)getFontSize;

@end

NS_ASSUME_NONNULL_END

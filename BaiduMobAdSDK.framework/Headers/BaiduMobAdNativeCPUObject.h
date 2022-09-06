//
//  BaiduMobAdNativeCPUObject.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/5/17.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaiduMobAdNativeCPUObject : NSObject

@property (nonatomic, strong) NSString *type;

@property (nonatomic, strong) NSString *author;

@property (nonatomic, strong) NSString *iconUrl;

@property (nonatomic, strong) NSString *updateTime;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *desc;

@property (nonatomic, assign) BOOL isTop;

@property (nonatomic, strong) NSString *channelId;

@property (nonatomic, strong) NSString *channleName;

@property (nonatomic, assign) BOOL isAutoplay;

@property (nonatomic, assign) BOOL isCanGoLp;

@property (nonatomic, assign) int commentCounts;

@property (nonatomic, assign) int styleTypeCpu;

@property (nonatomic, strong) NSArray *smallImageUrls;

@property (nonatomic, strong) NSArray *imageUrls;

@property (nonatomic, strong) NSDictionary *extra;

@property (nonatomic, assign) int width;

@property (nonatomic, assign) int height;

@property (nonatomic, strong) NSString *adLogoUrl;

@property (nonatomic, strong) NSString *baiduLogoUrl;

@property (nonatomic, strong) NSString *thumbUrl;

@property (nonatomic, assign) int thumbWidth;

@property (nonatomic, assign) int thumbHeight;

@property (nonatomic, assign) int playCounts;

@property (nonatomic, strong) NSString *videoUrl;

@property (nonatomic, assign) int duration;

@property (nonatomic, assign) int presentationType;

@property (nonatomic, strong) NSArray *dislikeReasons;

@property (nonatomic, assign) int actionType;

@property (nonatomic, strong) NSString *brandName;

@property (nonatomic, strong) NSString *contentClickUrl;

@property (nonatomic, assign) int attribute;

@property (nonatomic, assign) long cTime;

@property (nonatomic, assign) long hotId;

// 热榜标题
@property (nonatomic, strong) NSString *hotWord;

// 热榜图片（scheme需要自己拼接）
@property (nonatomic, strong) NSString *image;

// 热榜热度值
@property (nonatomic, assign) double score;

@property (nonatomic, strong) NSString *label;

/**
 * 注册点击事件，传入组件数组，必须保证各组件无点击事件
 * @param viewArray 视图数组
 * @param mainView 广告/内容的主视图
 * @param dislikeView 负反馈视图
 */
- (void)registerViewForInteraction:(NSArray *)viewArray mainView:(UIView *)mainView dislikeView:(UIView *)dislikeView;


@end

NS_ASSUME_NONNULL_END

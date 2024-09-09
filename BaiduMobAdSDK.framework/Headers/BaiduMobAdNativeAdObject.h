//
//  BaiduMobAdNativeAdObject.h
//  BaiduMobNativeSDK
//
//  Created by lishan04 on 15-5-26.
//  Copyright (c) 2015年 lishan04. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BaiduMobAdSDK/BaiduMobAdCommonConfig.h>
#import <BaiduMobAdSDK/BaiduMobAdNativeReporter.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaiduMobAdNativeInterationDelegate;

@interface BaiduMobAdNativeAdObject : NSObject

/**
 * 广告交互 delegate
 */
@property (nonatomic, weak) id <BaiduMobAdNativeInterationDelegate> interationDelegate;

/**
 * 标题 text
 */
@property (copy, nonatomic) NSString *title;
/**
 * 描述 text
 */
@property (copy, nonatomic) NSString *text;
/**
 * 小图 url
 */
@property (copy, nonatomic) NSString *iconImageURLString;
/**
 * 大图 url
 */
@property (copy, nonatomic) NSString *mainImageURLString;

/**
 * 广告标识图标 url
 */
@property (copy, nonatomic) NSString *adLogoURLString;

/**
 * 百度logo图标 url
 */
@property (copy, nonatomic) NSString *baiduLogoURLString;

/**
 * 多图信息流的image url array
 */
@property (strong, nonatomic) NSArray *morepics;
/**
 * 视频url
 */
@property (copy, nonatomic) NSString *videoURLString;
/**
 * 视频时长，单位为s
 */
@property (strong, nonatomic) NSNumber *videoDuration;
/**
 * 自动播放
 */
@property (strong, nonatomic) NSNumber *autoPlay;
/**
 * 品牌名称，若广告返回中无品牌名称则为空
 */
@property (copy, nonatomic) NSString *brandName;
/**
* 开发者配置可接受视频后，对返回的广告单元，需先判断BaiduMobMaterialType再决定使用何种渲染组件
 */
@property (assign, nonatomic) BaiduMobMaterialType materialType;

/**
 * 返回广告单元的点击类型
 */
@property (assign, nonatomic) BaiduMobNativeAdActionType actType;

/**
 * 大图图片宽
 */
@property (copy, nonatomic) NSString *w;
/**
 * 大图图片高
 */
@property (copy, nonatomic) NSString *h;
/**
 价格标签
 */
@property (copy, nonatomic, readonly) NSString *ECPMLevel;

/**
 用户点击行为
 */
@property (copy, nonatomic) NSString *actButtonString;

// 发送视频广告相关日志
@property (nonatomic, strong, readonly) BaiduMobAdNativeReporter *videoReport;

#pragma mark - 智能优选
/**
 信息流广告样式类型
 */
@property (nonatomic, assign) BaiduMobAdSmartFeedStyleType style_type;
/**
 标记信息流广告容器宽高是px还是比例 0：无、1：像素、2：比例
 */
@property (nonatomic, assign) BaiduMobAdSmartFeedSizeType size_type;
/**
 信息流广告容器宽
 */
@property (nonatomic, assign) int container_width;
/**
 信息流广告容器高
 */
@property (nonatomic, assign) int container_height;

/**
 *  使用controller present 落地页，覆盖BaiduMobAdNative的配置
 */
- (void)setPresentAdViewController:(UIViewController *)presentAdViewController;

/**
 *  广告价格标签
 */
- (NSString *)getECPMLevel;

- (NSString *)getPECPM;

/**
 * 竞价成功，上报竞价失败排名第二的信息
 * @param secondInfo 竞败方，排名第二的信息
 *        Key：ecpm Value：为本次竞败方排名第二的价格（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞败方排名第二的渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 发送成功或失败回调
 */
- (void)biddingSuccessWithSecondInfo:(NSDictionary *)secondInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;

/**
 * 反馈竞价失败及原因，无广告返回时也可用此接口上报竞胜方信息
 * @param winInfo 竞胜方的信息
 *        Key：ecpm Value：为本次竞胜方出价（单位：分），类型为Integer。选填
 *        Key：adn    Value：为本次竞胜方渠道ID，类型为Integer。具体ID枚举见文档
 * @param completion 发送成功或失败回调
 */
- (void)biddingFailWithWinInfo:(NSDictionary *)winInfo completion:(void (^)(BOOL success, NSString *errorInfo))completion;

/**
 * 是否过期，默认为false，2h后过期，需要重新请求广告
 */
- (BOOL)isExpired;

/**
 * 发送展现
 */
- (void)trackImpression:(UIView *)view;

/**
 * 发送点击
 */
- (void)handleClick:(UIView *)view;

/**
 * 百度联盟官网logo点击
 */
- (void)baiduLogoClick:(UIView *)baiduLogoView;

/**
 * 根据key获取广告相关字段
 * @param key 需要获取的key字段
 * @return 字段的字符串
 */
- (NSString *)getAdDataForKey:(NSString *)key;

#pragma mark - DEPRECATED_ATTRIBUTE

- (void)trackVideoEvent:(BaiduAdNativeVideoEvent)event withCurrentTime:(NSTimeInterval)currentPlaybackTime BaiduMobAdDEPRECATED_MSG("已废弃，请使用videoReport");

@end


NS_ASSUME_NONNULL_END

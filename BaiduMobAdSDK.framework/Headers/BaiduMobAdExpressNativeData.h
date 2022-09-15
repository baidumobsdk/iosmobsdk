//
//  BaiduMobAdExpressNativeData.h
//  BaiduMobAdSDK
//
//  Created by baoshiwei on 2022/8/18.
//  Copyright © 2022 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdCommonConfig.h"

@interface BaiduMobAdExpressNativeData : NSObject

/**
 * 标题 text
 */
@property (nonatomic, copy) NSString *title;

/**
 * 描述 text
 */
@property (nonatomic, copy) NSString *text;

/**
 * 小图 url
 */
@property (nonatomic, copy) NSString *iconImageURLString;

/**
 * 大图 url
 */
@property (nonatomic, copy) NSString *mainImageURLString;

/**
 * 三图
 */
@property (nonatomic, strong) NSArray *morepics;

/**
 * 视频url
 */
@property (nonatomic, copy) NSString *videoURLString;

/**
* 物料类型
 */
@property (nonatomic, assign) BaiduMobMaterialType materialType;

/**
 * 返回广告单元的点击类型
 */
@property (nonatomic, assign) BaiduMobNativeAdActionType actType;

/**
 *  获取代码位(广告位)id
 */
@property (nonatomic, copy) NSString *adUnitTag;

@end


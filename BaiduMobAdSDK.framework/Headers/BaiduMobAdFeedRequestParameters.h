//
//  BaiduMobAdFeedRequestParameters.h
//  BaiduMobAdSDK
//
//  Created by Sun,Mingzhe on 2020/8/28.
//  Copyright © 2020 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaiduMobAdCommonConfig.h"
/**
 * 【信息流传参】各个参数字段的描述和取值可以参考如下注释
 * 注意：所有参数的总长度(不包含key值)建议控制在120个中文字符内，避免因超长发生截断，影响信息的上报
 * 注意：其中【高】【中】【低】【其它】代表参数的优先级，请尽量提供更多高优先级参数，媒体自定义参数归于【其它】优先级
 * 【高优先级】：USER_SEX、PAGE_TITLE、PAGE_ID、CONTENT_CATEGORY、CONTENT_LABEL
 * 【中优先级】：FAVORITE_BOOK、FIRST_LEVEL_CONTENTS
 * 【低优先级】：CHAPTER_NUM、PAGE_SERIAL_STATUS、PAGE_AUTHOR_ID、SECOND_LEVEL_CONTENTS
 */

// 用户维度
// key：【高】用户性别，unknown = 0，male = 1，female = 2
extern NSString *USER_SEX;
// key：【中】收藏图书ID，取最近的五个, 用"/"分割不同分类
extern NSString *FAVORITE_BOOK;

// 内容维度
// key：【高】小说名称 or 文章标题
extern NSString *PAGE_TITLE;
// key：【高】小说ID or 文章ID
extern NSString *PAGE_ID;
// key：【高】分类, 用"/"分割不同分类
extern NSString *CONTENT_CATEGORY;
// key：【高】关键词, 用"/"分割不同分类
extern NSString *CONTENT_LABEL;
// key：【中】一级目录，格式：章节名，章节编号
extern NSString *FIRST_LEVEL_CONTENTS;
// key：【低】作者名称ID，作者ID/名称
extern NSString *PAGE_AUTHOR_ID;
// key：【低】二级目录，格式：章节名，章节编号
extern NSString *SECOND_LEVEL_CONTENTS;
// key：【低】章节数，取值【0，32位整数】,默认值0
extern NSString *CHAPTER_NUM;
// key：【低】连载状态，0 表示连载 1 表示完结，默认值0
extern NSString *PAGE_SERIAL_STATUS;
// key：【其它】搜索词
extern NSString *QUERY_WORD;

@interface BaiduMobAdFeedRequestParameters : NSObject

// 用于添加key-value，媒体可自定义key-value
- (void)addParametersKey:(NSString *)key value:(NSString *)value;

// 获取传参内容信息
- (NSMutableDictionary *)getFeedRequestParametersDic;

@property (nonatomic, strong, readonly) NSString *USER_SEX BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换USER_SEX使用方式");
@property (nonatomic, strong, readonly) NSString *FAVORITE_BOOK BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换FAVORITE_BOOK使用方式");
@property (nonatomic, strong, readonly) NSString *PAGE_TITLE BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换PAGE_TITLE使用方式");
@property (nonatomic, strong, readonly) NSString *PAGE_ID BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换PAGE_ID使用方式");
@property (nonatomic, strong, readonly) NSString *CONTENT_CATEGORY BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换CONTENT_CATEGORY使用方式");
@property (nonatomic, strong, readonly) NSString *CONTENT_LABEL BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换CONTENT_LABEL使用方式");
@property (nonatomic, strong, readonly) NSString *QUERY_WORD BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换QUERY_WORD使用方式");
@property (nonatomic, strong, readonly) NSString *PAGE_AUTHOR_ID BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换PAGE_AUTHOR_ID使用方式");
@property (nonatomic, strong, readonly) NSString *FIRST_LEVEL_CONTENTS BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换FIRST_LEVEL_CONTENTS使用方式");
@property (nonatomic, strong, readonly) NSString *SECOND_LEVEL_CONTENTS BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换SECOND_LEVEL_CONTENTS使用方式");
@property (nonatomic, strong, readonly) NSString *CHAPTER_NUM BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换CHAPTER_NUM使用方式");
@property (nonatomic, strong, readonly) NSString *PAGE_SERIAL_STATUS BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换PAGE_SERIAL_STATUS使用方式");
@property (nonatomic, strong, readonly) NSMutableDictionary *requestParameters BaiduMobAdDEPRECATED_MSG("已废弃，请及时替换getFeedRequestParametersDic");
@end


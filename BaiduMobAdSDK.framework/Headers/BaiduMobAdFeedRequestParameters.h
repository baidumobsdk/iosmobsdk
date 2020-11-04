//
//  BaiduMobAdFeedRequestParameters.h
//  BaiduMobAdSDK
//
//  Created by Sun,Mingzhe on 2020/8/28.
//  Copyright © 2020 Baidu Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaiduMobAdFeedRequestParameters : NSObject

@property (nonatomic, strong) NSMutableDictionary *requestParameters;

// 用户维度
// 用户性别，unknown = 0，male = 1，female = 2
@property (nonatomic, strong, readonly) NSString *USER_SEX;
// 收藏图书ID，取最近的五个, 用"/"分割不同分类
@property (nonatomic, strong, readonly) NSString *FAVORITE_BOOK;

// 内容维度
// 小说名称 or 文章标题
@property (nonatomic, strong, readonly) NSString *PAGE_TITLE;
// 小说ID or 文章ID
@property (nonatomic, strong, readonly) NSString *PAGE_ID;
// 分类, 用"/"分割不同分类
@property (nonatomic, strong, readonly) NSString *CONTENT_CATEGORY;
// 关键词, 用"/"分割不同分类
@property (nonatomic, strong, readonly) NSString *CONTENT_LABEL;

@property (nonatomic, strong, readonly) NSString *QUERY_WORD;

// 用于添加key-value
- (void)addParametersKey:(NSString *)key value:(NSString *)value;

@end


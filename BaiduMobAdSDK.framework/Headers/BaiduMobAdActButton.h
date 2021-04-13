//
//  BaiduMobAdActButton.h
//  BaiduMobAdSDK
//
//  Created by sunmingzhe01 on 2021/2/23.
//  Copyright © 2021 Baidu Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BaiduMobAdNativeAdObject;

@interface BaiduMobAdActButton : UIButton

/**
 * 设置用户点击行为的文案
 */
- (void)setData:(BaiduMobAdNativeAdObject *)object;

@end

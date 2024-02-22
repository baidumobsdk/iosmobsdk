//
//  BaiduMobAdCommonConfig.h
//  BaiduMobAdSdk
//
//  Created by dengjinxiang on 13-8-22.
//
//
#import <UIKit/UIKit.h>
#ifndef BaiduMobAdSdk_BaiduMobAdCommonConfig_h
#define BaiduMobAdSdk_BaiduMobAdCommonConfig_h
// SDK版本号
#define SDK_VERSION_IN_MSSP @"5.34"

typedef void (^BaiduMobAdViewCompletionBlock)(NSArray *errors);

typedef enum {
    BaiduMobAdTypeFeed = 0, // 默认 请求普通信息流广告
    BaiduMobAdTypePortrait = 1,  // 竖版视频广告
    BaiduMobAdTypeRewardVideo = 2,  // 激励视频
    BaiduMobAdTypeFullScreenVideo = 3,   // 全屏视频
    BaiduMobAdTypeExpressInterstitial = 4,   // 模板插屏
    BaiduMobAdTypeSearchQuery = 5, // 搜一搜
    BaiduMobAdTypeSplash = 6 // 开屏
} BaiduMobAdType;

typedef enum {
    NORMAL, // 一般图文或图片广告
    VIDEO, // 视频广告，需开发者增加播放器支持
    HTML, // html模版广告
    GIF //GIF广告
} BaiduMobMaterialType;

typedef enum {
    BaiduMobNativeAdActionTypeLP = 1,   // 落地页广告
    BaiduMobNativeAdActionTypeDL = 2,   // 下载类广告
    BaiduMobNativeAdActionTypeDeepLink = 512    // 唤醒类广告
} BaiduMobNativeAdActionType;

typedef enum {
    onShow,  //video展现
    onClickToPlay,//点击播放
    onStart, //开始播放
    onError, //播放失败
    onComplete, //完整播放
    onClose, //播放结束
    onFullScreen, //全屏观看
    onClick, //广告点击
    onSkip, //跳过视频
    onShowEndCard,// 展现endcard
    onClickEndCard,// 点击endcard
    onClickDownloadDirect, // 视频下载广告点击直接下载
    onCacheSuccess,//视频缓存成功
    onCacheFail,//视频缓存失败
    onCacheExpire, //广告过期
    onReplay, //重播
    onPlayEnd, // 播放终止，横、竖版视频
    onMute, // 静音按钮点击
    onReady, // 准备播放
    onPlay, // 调用播放
    onFrozen // 播放器卡顿
    
} BaiduAdNativeVideoEvent;

/**
 *  性别类型
 */
typedef enum {
    BaiduMobAdMale = 0,
    BaiduMobAdFeMale = 1,
    BaiduMobAdSexUnknown = 2,
} BaiduMobAdUserGender;

/**
 *  广告展示失败类型枚举
 */
typedef enum _BaiduMobFailReason {
    BaiduMobFailReason_NOAD = 0,// 没有推广返回
    BaiduMobFailReason_EXCEPTION,//网络或其它异常
    BaiduMobFailReason_FRAME//广告尺寸或元素异常，不显示广告
} BaiduMobFailReason;


/**
 *  Landpage页面导航栏颜色设置
 */
typedef enum {
    BaiduMobAdLpStyleDefault,
    BaiduMobAdLpStyleRed,
    BaiduMobAdLpStyleGreen,
    BaiduMobAdLpStyleBrown,
    BaiduMobAdLpStyleDarkBlue,
    BaiduMobAdLpStyleLightBlue,
    BaiduMobAdLpStyleBlack
} BaiduMobAdLpStyle;


/**
 * 智能优选feed类型
 */
typedef NS_ENUM(NSInteger, BaiduMobAdSmartFeedStyleType) {
    FeedType_PIC_BOTTOM_TITLE = 28,//大图底部文字
    FeedType_PIC_TOP_TITLE = 29,//大图上部文字
    FeedType_PIC_LOGO = 30,//大图上部文字+logo
    FeedType_LEFT_PIC = 33,//左图右文
    FeedType_RIGHT_PIC = 34,//右图左文
    FeedType_GROUP_PIC = 35,//三图图文
    FeedType_GROUP_PIC_LOGO = 36,//三图图文+logo
    FeedType_VIDEO_TOP_TITLE = 37, //横版视频+文字
    FeedType_PORTRAIT_VIDEO = 41, // 竖版视频
    FeedType_PORTRAIT_IMAGE = 42 // 竖版图片
};

/**
 * 智能优选尺寸类型
 */
typedef NS_ENUM(NSInteger, BaiduMobAdSmartFeedSizeType) {
    SizeType_NONE = 0,//不使用
    SizeType_PIXEL = 1,//像素
    SizeType_SCALE = 2,//比例
};

/**
 * 竖版视频默认背景图
 */
typedef enum {
    lightColor_pic = 0, // 浅色图片
    deepColor_pic = 1 // 深色图片
} BaiduMobAdVideoFrontPictureType;

/**
 * 用户选择的反馈原因
 */
typedef NS_ENUM(NSInteger, BaiduMobAdDislikeReasonType) {
    BaiduMobAdDislikeReasonCancel = -1, // 取消点击
    BaiduMobAdDislikeReasonUnlike = 0, // 不感兴趣
    BaiduMobAdDislikeReasonLowQuality, // 内容质量差
    BaiduMobAdDislikeReasonRepeatRecommend, // 推荐重复
    BaiduMobAdDislikeReasonVulgarPornography, // 低俗色情
    BaiduMobAdDislikeReasonViolatingLaws, // 违法违规
    BaiduMobAdDislikeReasonFake, // 虚假欺诈
    BaiduMobAdDislikeReasonInducedClick, // 诱导点击
    BaiduMobAdDislikeReasonSuspectedPlagiarism // 疑似抄袭
};

/**
 *  内容联盟频道id列表
 *  仅适用于频道样式
 *  block样式需要开发者自己在mssp申请id
 */
#define CPU_CHANNEL_ENTERTAINMENT   @"1001" //娱乐
#define CPU_CHANNEL_SPORTS          @"1002" //体育
#define CPU_CHANNEL_PICTURE         @"1003" //图片
#define CPU_CHANNEL_MOBILE          @"1005" //手机
#define CPU_CHANNEL_FINANCE         @"1006" //财经
#define CPU_CHANNEL_CAR             @"1007" //汽车
#define CPU_CHANNEL_HOUSE           @"1008" //房产
#define CPU_CHANNEL_FASHION         @"1009" //时尚
#define CPU_CHANNEL_SHOPPING        @"1010" //购物
#define CPU_CHANNEL_MILITARY        @"1012" //军事
#define CPU_CHANNEL_TECH            @"1013" //科技
#define CPU_CHANNEL_HEALTH          @"1014" //健康
#define CPU_CHANNEL_HOTSPOT         @"1021" //热点
#define CPU_CHANNEL_RECOMMEND       @"1022" //推荐
#define CPU_CHANNEL_BEAUTY          @"1024" //美女
#define CPU_CHANNEL_AMUSE           @"1025" //搞笑
#define CPU_CHANNEL_AGG             @"1032" //聚合
#define CPU_CHANNEL_VIDEO           @"1033" //视频
#define CPU_CHANNEL_WOMEN           @"1034" //女人
#define CPU_CHANNEL_LIFE            @"1035" //生活
#define CPU_CHANNEL_CULTURE         @"1036" //文化

#endif

#define BaiduMobAdDEPRECATED_MSG(instead) DEPRECATED_MSG_ATTRIBUTE(instead)
#define BaiduMobAdDEPRECATED DEPRECATED_ATTRIBUTE

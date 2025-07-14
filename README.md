# BaiduMobAdSDK

百度移动应用推广SDK-iOS(官方)

注意：
SDK从4.75版本开始支持pod集成
SDK从4.84版本开始不再支持armv7s，i386架构

# 版本更新说明

- **SDK版本**：v5.394
- **优化：已知问题修复与性能优化**

# 开发环境

- **开发工具** ：Xcode
- **部署目标** ：iOS 9.0及以上版本
- **SDK版本** ：官网最新版本
- **支持架构**：x86_64, armv7, arm64

# 如何开始

- 注册开户

  开发者需在百度联盟(百青藤)上进行注册，在平台审核通过后，开发者就成为了百度广告联盟的正式会员。

- 查看[接入文档](https://union.baidu.com/miniappblog/sdk/iOSSDK.html)，全面了解BaiduMobAdSDK中提供的所有API。

- 如有其他问题可以参考官网的[FAQ](https://union.baidu.com/bqt/#/help)，或者及时与我们联系。

# 使用CocoaPods

CocoaPods是专门为iOS工程提供第三方依赖库的管理工具，它自动化并简化了在项目中使用第三方库（如BaiduMobAdSDK）的过程，通过CocoaPods，您可以更快速便捷的获取最新版本的SDK。

您可以通过以下命令进行CocoaPods的安装：

```shell
gem install cocoapods
```

## Podfile

为了您能集成BaiduMobAdSDK到Xcode工程中，请在Podfile文件中指定它

```ruby
target 'Your APP Xcode Project' do
  pod 'BaiduMobAdSDK'
end
```

然后执行

```shell
pod install
```

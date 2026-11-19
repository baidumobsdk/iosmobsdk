// swift-tools-version: 5.9

import PackageDescription

let package = Package(
    name: "BaiduMobAdSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "BaiduMobAdSDK",
            targets: ["BaiduMobAdSDK"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "BaiduMobAdSDK",
            url: "https://github.com/baidumobsdk/iosmobsdk/releases/download/10.071/BaiduMobAdSDK-10.071.xcframework.zip",
            checksum: "替换为compute-checksum的结果"
        )
    ]
)

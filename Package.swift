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
            targets: [
                "BaiduMobAdSDK",
                "BaiduMobAdSDKResources"
            ]
        )
    ],
    targets: [
        .binaryTarget(
            name: "BaiduMobAdSDK",
            url: "https://github.com/baidumobsdk/iosmobsdk/releases/download/10.071/BaiduMobAdSDK-10.071.xcframework.zip",
            checksum: "f9b974b26af8115a7f848fd8776672f3d341b54956789115a810212a9eb6b1d9"
        ),

        .target(
            name: "BaiduMobAdSDKResources",
            resources: [
                .copy("Resources/baidumobadsdk.bundle")
            ]
        )
    ]
)

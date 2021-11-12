// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "sa-sdk-ios",
    platforms: [
        .iOS(.v8)
    ],
    products: [
        .library(name: "SensorsAnalytics", targets: ["SensorsAnalytics"])
    ],
    dependencies: [],
    targets: [
        .target(
            name: "SensorsAnalytics",
            path: "SensorsAnalyticsSDK",
            publicHeadersPath: ".",
            linkerSettings: [
                .linkedLibrary("icucore"),
                .linkedLibrary("z"),
                .linkedLibrary("sqlite3"),
            ]),
    ]
)

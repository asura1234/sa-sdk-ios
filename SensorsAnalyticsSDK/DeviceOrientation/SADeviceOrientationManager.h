//
//  SADeviceOrientationManager.h
//  SensorsAnalyticsSDK
//
//  Created by 向作为 on 2018/5/21.
//  Copyright © 2015-2020 Sensors Data Co., Ltd. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <CoreMotion/CoreMotion.h>
#import "../Core/SAModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SAConfigOptions (DeviceOrientation)

@property (nonatomic, assign) BOOL enableDeviceOrientation;

@end

@interface SADeviceOrientationManager : NSObject <SAPropertyModuleProtocol>

+ (instancetype)defaultManager;

@property (nonatomic, assign, getter=isEnable) BOOL enable;
@property (nonatomic, strong) SAConfigOptions *configOptions;
@property (nonatomic, copy, readonly, nullable) NSDictionary *properties;

@end

NS_ASSUME_NONNULL_END

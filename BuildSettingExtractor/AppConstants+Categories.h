//
//  AppConstants+Categories.h
//  BuildSettingExtractor
//
//  Created by James Dempsey on 9/30/19.
//  Copyright © 2019 Tapas Software. All rights reserved.
//

#import <AppKit/AppKit.h>

#pragma mark User Default Keys

extern NSString *const TPSOpenDirectoryInFinder;
extern NSString *const TPSIncludeBuildSettingInfoComments;
extern NSString *const TPSOutputFileNameProject;
extern NSString *const TPSOutputFileNameShared;
extern NSString *const TPSOutputFileNameSeparator;
extern NSString *const TPSLinesBetweenBuildSettings;
extern NSString *const TPSLinesBetweenBuildSettingsWithInfo;

#pragma mark -

@interface NSPasteboard (TPS_XcodeProjectURLAdditions)
- (BOOL)tps_canReadXcodeProjectFileURL;
- (NSURL *)tps_readXcodeProjectFileURL;
@end


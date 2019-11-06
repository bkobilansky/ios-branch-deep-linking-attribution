//
//  BNCAppleSearchAds.h
//  Branch
//
//  Created by Ernest Cho on 10/22/19.
//  Copyright © 2019 Branch, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNCPreferenceHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface BNCAppleSearchAds : NSObject

@property (nonatomic, assign, readwrite) BOOL enableAppleSearchAdsCheck;
@property (nonatomic, assign, readwrite) BOOL ignoreAppleTestData;

+ (BNCAppleSearchAds *)sharedInstance;

// Apple suggests a longer delay, however this is detrimental to app launch times
- (void)useAppleRecommendedDelay;

// Checks Apple Search Ads and updates preferences
// This method blocks the thread, it should only be called on a background thread.
- (void)checkAppleSearchAdsSaveTo:(BNCPreferenceHelper *)preferenceHelper installDate:(NSDate *)installDate completion:(void (^_Nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END

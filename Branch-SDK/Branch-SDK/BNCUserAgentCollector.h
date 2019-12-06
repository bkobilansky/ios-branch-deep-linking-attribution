//
//  BNCUserAgentCollector.h
//  Branch
//
//  Created by Ernest Cho on 8/29/19.
//  Copyright © 2019 Branch, Inc. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

// Handles User Agent lookup from WebKit
@interface BNCUserAgentCollector : NSObject

+ (BNCUserAgentCollector *)instance;

@property (nonatomic, copy, readwrite) NSString *userAgent;

- (void)loadUserAgentWithCompletion:(void (^)(NSString * _Nullable userAgent))completion;

@end

NS_ASSUME_NONNULL_END

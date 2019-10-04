//
//  BNCTuneUtility.m
//  Branch
//
//  Created by Ernest Cho on 10/4/19.
//  Copyright © 2019 Branch, Inc. All rights reserved.
//

#import "BNCTuneUtility.h"

@implementation BNCTuneUtility

// INTENG-7695 Tune data indicates an app upgrading from Tune SDK to Branch SDK
+ (BOOL)isTuneDataPresent {
    NSString *tuneMatIdKey = @"_TUNE_mat_id";
    NSString *matId = [[NSUserDefaults standardUserDefaults] stringForKey:tuneMatIdKey];
    if (matId && [matId length] > 0) {
        return YES;
    }
    return NO;
}

@end

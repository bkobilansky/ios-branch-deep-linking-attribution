//
//  BNCError.h
//  Branch-SDK
//
//  Created by Qinwei Gong on 11/17/14.
//  Copyright (c) 2014 Branch Metrics. All rights reserved.
//


#import <Foundation/Foundation.h>


FOUNDATION_EXPORT NSString *_Nonnull const BNCErrorDomain;


typedef NS_ENUM(NSInteger, BNCErrorCode) {

     BNCInitError                   = 1000
    ,BNCDuplicateResourceError      = 1001
    ,BNCRedeemCreditsError          = 1002
    ,BNCBadRequestError             = 1003
    ,BNCServerProblemError          = 1004
    ,BNCNilLogError                 = 1005
    ,BNCVersionError                = 1006
    ,BNCErrorADClientNotAvailable   = 1007

};


///@param errorCode The Branch error code of the error.
NSError *_Nonnull BNCErrorWithCode(BNCErrorCode errorCode);

///@param errorCode The Branch error code of the error.
///@param reason    The reason string for the error.
NSError *_Nonnull BNCErrorWithCodeAndReason(BNCErrorCode errorCode, NSString*_Nullable reason);

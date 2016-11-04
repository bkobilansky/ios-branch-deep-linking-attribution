//
//  BNCSearchAdAttribution.h
//  Branch
//
//  Created by Edward Smith on 11/1/16.
//


#import <Foundation/Foundation.h>


@interface BNCSearchAdAttribution : NSObject

+ (void) checkAttributionWithCompletion:(void (^_Nullable)(NSDictionary*_Nonnull))completion;
+ (NSDictionary* _Nullable) lastAttribution;
+ (NSString*_Nullable) lastAttributionWireFormatString;

@end

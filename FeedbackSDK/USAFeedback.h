//
//  USAFeedback.h
//  Feedback SDK
//
//  Created by Samuel Goodwin on 2/3/15.
//  Copyright (c) 2015 Usabilla. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface USAFeedback : NSObject
+ (void)recordAppLaunchWithAppID:(NSString *)appID;
+ (void)recordFormShowWithAppID:(NSString *)appID;
@end

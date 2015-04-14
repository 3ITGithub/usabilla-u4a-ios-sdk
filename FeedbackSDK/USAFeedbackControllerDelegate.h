//
//  USAFeedbackControllerDelegate.h
//  Feedback SDK
//
//  Created by Samuel Goodwin on 8/26/14.
//  Copyright (c) 2014 Usabilla. All rights reserved.
//

#import <Foundation/Foundation.h>

@class USAFeedbackController;
@protocol USAFeedbackControllerDelegate <NSObject>
- (void)feedbackControllerDidFinishCollectingFeedback:(USAFeedbackController *)controller;
@end

/**
 * USAFeedbackControllerDelegate.h
 * Copyright (c) 2015, Usabilla
 * All rights reserved.
 * Created by Claudio Semerearo (@keepitterron)
 *
 * Controller delegate.
 */

#import <Foundation/Foundation.h>

@class USAFeedbackController;
@protocol USAFeedbackControllerDelegate <NSObject>
- (void)feedbackControllerDidFinishCollectingFeedback:(USAFeedbackController *)controller;
@end

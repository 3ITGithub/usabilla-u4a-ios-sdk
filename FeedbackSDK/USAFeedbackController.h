//
//  ViewController.h
//  Feedback SDK
//
//  Created by Samuel Goodwin on 8/26/14.
//  Edited by Claudio Semeraro on 3/1/15
//  Copyright (c) 2014 Usabilla. All rights reserved.
//

@import UIKit;
@class USAFeedbackController;

typedef void(^USAFeedbackResponse)(USAFeedbackController *controller);

#import "USAFeedbackControllerDelegate.h"
#import "MBProgressHUD+CustomAdditions.h"

@protocol USAScreenshotDelegate<NSObject>
- (void)screenshotDidChange;
- (void)screenshotWillChange;
@end

@interface USAFeedbackController : UITableViewController<UIAlertViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, USAScreenshotDelegate, UIGestureRecognizerDelegate>
@property (nonatomic, assign) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, assign) BOOL showsCancelButton;
@property (nonatomic, weak) id<USAFeedbackControllerDelegate> delegate;
@property (nonatomic, copy) NSDictionary *customVariables;

+ (void)controllerWithScreenshot:(UIImage *)screenshot appID:(NSString *)appID delegate:(id<USAFeedbackControllerDelegate>)delegate response:(USAFeedbackResponse)response;
- (void)submit:(id)sender;
- (void)addImageFromCell:(id)sender;
@end

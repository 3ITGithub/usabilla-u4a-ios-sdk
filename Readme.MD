# Usabilla FeedbackSDK for iOS
This repository contains the FeedbackSDK for iOS and relative CocoaPods spec.

## Pod instructions
Just include `pod 'UsabillaFeedbackSDK', :git => 'git@codebasehq.com:usabilla/application/sdk-pod.git'` in your Pod file and run `pod install` to install the SDK.

## Integration instructions
 - Include `Feedback-SDK.h` in your ViewController header file.
 - Include our assets catalog manually
 - Take an optional screenshot of the current view wherever you feel is appropriate with `UIImage *image = [self.view usa_screenshot];`
 - Get the appID either creating a new app on usabilla.com or using an already created app's appID
 - Launch the form with the code:

 ```
    // optional usabilla loader show
    MBProgressHUD *HUD = [MBProgressHUD fadeInHUDInView:self.view];
    HUD.minShowTime = 0.0f;

    // init controller and present it
    [USAFeedbackController controllerWithScreenshot:image appID:@"YOUR APP ID" delegate:self response:^(USAFeedbackController *controller) {
        // optional usabilla loader hide
        [MBProgressHUD hideAllHUDsForView:self.view animated:YES];
        
        UINavigationController *navigation = [[UINavigationController alloc] initWithRootViewController:controller];
        [self presentViewController:navigation animated:YES completion:nil];
    }];
```

Pass `nil` to `controllerWithScreenshot` if you don't want to have a screenshot of the current view

## Custom variables
You can pass along custom variables that will be attached to the feedback users send.
`controller.customVariables = @{ @"custom_variable": @"one", @"shaken": @1 };`

## Cancel button
If you want to show a Cancel button to allow users to easily go back to your app use:
`controller.showsCancelButton = YES;`

## Shake gesture
You can enable feedback on shake wrapping the form launcher code in:

```
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    if (motion == UIEventSubtypeMotionShake)
    {
        // your code
    }
}
```
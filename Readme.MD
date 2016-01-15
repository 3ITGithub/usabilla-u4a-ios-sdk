# Usabilla FeedbackSDK for iOS
This repository contains the FeedbackSDK for iOS and relative CocoaPods spec.
Take a look at our [Wiki](https://github.com/usabilla/usabilla-u4a-ios-sdk/wiki) for a complete and in depth guide on how to install and customize the SDK.

# Installation 

## Using CocoaPods

Include `pod 'UsabillaFeedbackSDK', :git => 'https://github.com/usabilla/usabilla-l4a-ios-sdk.git'` in your Pod file and run `pod install` to install the SDK.

## Manually

Clone this repository and copy the content of the folder FeedbackSDK (header files, static library and assets catalog) in your project.
Please manually add the following dependencies to your project if not already using it:
- [MBProgressHUD](https://github.com/jdg/MBProgressHUD)

Make sure to add `-ObjC` under *other linker flags* in your **Build settings**


## How to get started

### On the web
- Create a new app on your [Usabilla](https://app.usabilla.com/member/) Live for Apps section.
- Copy th AppId from the app you wish to use in your SDK.


### On the SDK
- Include `Feedback-SDK.h` in your ViewController header file.
- Save the AppId you created on the web on a local variable.
- If you want, you can take an optional screenshot of the current view wherever you feel is appropriate with `UIImage *image = [self.view usa_screenshot];`
- Launch the form with the code:

```
// optional usabilla loader show
MBProgressHUD *HUD = [MBProgressHUD usa_fadeInHUDInView:self.view];
HUD.minShowTime = 0.0f;

// init controller and present it
[USAFeedbackController controllerWithScreenshot:image appID:@"YOUR APP ID" delegate:self response:^(USAFeedbackController *controller) {
// optional usabilla loader hide
[MBProgressHUD hideAllHUDsForView:self.view animated:YES];

// optional, pass custom variables
controller.customVariables = @{ @"username": @"keepitterron", @"user_id": @1 };

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
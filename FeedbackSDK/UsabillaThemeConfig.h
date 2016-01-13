//
//  UsabillaThemeConfig.h
//  ubForm
//
//  Created by Giacomo Pinato on 07/12/15.
//  Copyright © 2015 Usabilla. All rights reserved.
//

#ifndef ThemeConfig_h
#define ThemeConfig_h
@import UIKit;

@class UsabillaThemeConfig;

@interface UsabillaThemeConfig : NSObject

@property (nonatomic, strong, nonnull) UIColor *headerColor;
@property (nonatomic, strong, nonnull) UIColor *headerTextColor;
@property (nonatomic, strong, nonnull) UIColor *primaryTextColor;
@property (nonatomic, strong, nonnull) UIColor *accentColor;
@property (nonatomic, strong, nonnull) UIColor *textOnAccentColor;
@property (nonatomic, strong, nonnull) UIColor *backgroundColor;
@property (nonatomic, strong, nonnull) UIColor *errorColor;
@property (nonatomic, strong, nonnull) UIColor *hintColor;


@property (nonatomic, strong, nonnull) UIFont  *customFont;
@property (nonatomic, strong, nullable) NSArray *enabledEmoticons;
@property (nonatomic, strong, nullable) NSArray *disabledEmoticons;
@property (nonatomic, strong, nullable) UIImage *fullStar;
@property (nonatomic, strong, nullable) UIImage *emptyStar;

+ (id)sharedInstance;

@end
#endif /* ThemeConfig_h */

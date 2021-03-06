//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface IGAnimatablePlaceholderTextFieldConfigBuilder : NSObject
{
    NSArray *_animatablePlaceholderModels;
    double _fontSize;
    UIColor *_placeholderColor;
    NSString *_nonAnimatedPlaceholder;
}

+ (id)animatablePlaceholderTextFieldConfigFromExistingAnimatablePlaceholderTextFieldConfig:(id)arg1;
+ (id)animatablePlaceholderTextFieldConfig;
- (void).cxx_destruct;
- (id)withNonAnimatedPlaceholder:(id)arg1;
- (id)withPlaceholderColor:(id)arg1;
- (id)withFontSize:(double)arg1;
- (id)withAnimatablePlaceholderModels:(id)arg1;
- (id)build;

@end


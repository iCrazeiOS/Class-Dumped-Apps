//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZDKUIUtil : NSObject
{
}

+ (_Bool)shouldEnableAttachments:(id)arg1;
+ (id)fixOrientationOfImage:(id)arg1;
+ (_Bool)isLandscape;
+ (_Bool)isPad;
+ (long long)currentInterfaceOrientation;
+ (double)scaledHeightForSize:(struct CGSize)arg1 constrainedByWidth:(double)arg2;
+ (id)buildButtonWithFrame:(struct CGRect)arg1 andTitle:(id)arg2;
+ (double)separatorHeightForScreenScale;
+ (_Bool)isSameVersion:(id)arg1;
+ (_Bool)isNewerVersion:(id)arg1;
+ (_Bool)isOlderVersion:(id)arg1;
+ (id)applicatorValueForKey:(id)arg1;
+ (id)valueForSelector:(SEL)arg1 fromAppearance:(id)arg2 inClass:(Class)arg3;
+ (id)appearanceValueForView:(id)arg1 selector:(SEL)arg2;
+ (id)appearanceValueForClass:(Class)arg1 whenContainedIn:(Class)arg2 selector:(SEL)arg3;
+ (id)appearanceValueForClass:(Class)arg1 selector:(SEL)arg2;
- (id)importCategories;

@end


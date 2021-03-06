//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKBDisplayUtilities : NSObject
{
    _Bool _displayFamilyNeedsUpdate;
    _Bool _displayFamilyIsLocked;
    double _windowWidth;
    long long _displayFamily;
    struct CGSize _windowSize;
}

+ (struct CGSize)windowSizeForDisplayFamily:(long long)arg1;
+ (long long)estimatedDisplayFamily;
+ (id)currentDeviceTypeString;
+ (id)currentOrientationString;
+ (id)currentDisplayFamilyAndOrientationString;
+ (void)forceDeviceToInterfaceOrientation:(long long)arg1;
+ (long long)orientationForSize:(struct CGSize)arg1;
+ (_Bool)shouldDisplayCompactLayoutForOrientation:(long long)arg1;
+ (_Bool)shouldDisplayCompactLayout;
+ (long long)currentOrientation;
+ (_Bool)isLandscapeMode;
+ (double)currentDisplayWidth;
+ (double)displayLandscapeWidth;
+ (double)displayPortraitWidth;
+ (_Bool)isIphoneXDisplay;
+ (_Bool)isiPadDisplay;
+ (_Bool)isSmallDisplay;
+ (unsigned long long)currentScreenDPI;
+ (long long)displayFamily;
+ (void)lockDisplayFamily;
+ (void)unlockDisplayFamily;
+ (id)sharedInstance;
@property(nonatomic) _Bool displayFamilyIsLocked; // @synthesize displayFamilyIsLocked=_displayFamilyIsLocked;
@property(nonatomic) _Bool displayFamilyNeedsUpdate; // @synthesize displayFamilyNeedsUpdate=_displayFamilyNeedsUpdate;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) long long displayFamily; // @synthesize displayFamily=_displayFamily;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
- (void)updateDisplayFamilyIfNecessary;
- (id)initPrivate;

@end


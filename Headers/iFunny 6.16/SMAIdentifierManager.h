//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface SMAIdentifierManager : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (void)stopManager;
+ (id)sharedManager;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fcid;
@property(readonly, nonatomic) NSString *advertisingIdentifier;
@property(readonly, nonatomic, getter=isAdTrackingEnabled) _Bool adTrackingEnabled;

@end


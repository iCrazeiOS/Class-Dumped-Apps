//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAlertService-Protocol.h"

@class NSString;

@interface GBTAlertServiceImpl : NSObject <GBTAlertService>
{
}

- (_Bool)isShowingAlertInView:(id)arg1;
- (void)showAlertWithMessage:(id)arg1 imageName:(id)arg2 forDuration:(double)arg3;
- (void)showErrorAlertForDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTUBILogger, SPTViewLogger;

@interface SPTFreeTierFindLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIImpression5ForHUBComponentModel:(id)arg1;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDataDidFailToLoadWithPageIdentifier:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (void)logDidTapScannablesButton;
- (void)logDidTapCancelButtonWithRequestID:(id)arg1;
- (void)logDidTapSearchButton;
- (void)logMicrophoneImpression;
- (void)logDidTapMicrophoneButton;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 ubiLogger:(id)arg3;

@end


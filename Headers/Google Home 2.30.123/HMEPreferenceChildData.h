//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEPreferenceData-Protocol.h"

@class HMEModel, NSString;
@protocol HMEPreferenceDataDelegate;

@interface HMEPreferenceChildData : NSObject <HMEPreferenceData>
{
    HMEModel *_model;
    id <HMEPreferenceDataDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HMEPreferenceDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMEModel *model; // @synthesize model=_model;
- (void)fetchPreferences;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


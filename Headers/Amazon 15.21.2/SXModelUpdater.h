//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXModelUpdateDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SXModelUpdaterDelegate;

@interface SXModelUpdater : NSObject <SXModelUpdateDelegate>
{
    id <SXModelUpdaterDelegate> _delegate;
    NSMutableDictionary *_runningUpdates;
}

@property(retain, nonatomic) NSMutableDictionary *runningUpdates; // @synthesize runningUpdates=_runningUpdates;
@property(nonatomic) __weak id <SXModelUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)modelUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)modelUpdateDidSucceed:(id)arg1;
- (void)removeUpdate:(id)arg1 forTag:(id)arg2;
- (id)updateForTag:(id)arg1;
- (id)updatesForTag:(id)arg1;
- (void)startModelUpdate:(id)arg1 withTag:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


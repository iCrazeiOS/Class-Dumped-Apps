//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseFunction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_UpdateOrigin, ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdateHintCalculator, ComGoogleCommonBaseOptional, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdateHintCalculator_$Lambda$1 : NSObject <ComGoogleCommonBaseFunction>
{
    ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdateHintCalculator *this$0_;
    long long val$hintVersion_;
    long long val$minWriteSequenceId_;
    ComGoogleAppsBigtopDataItemsCommonItemsStorageUpdateHint_UpdateOrigin *val$updateOrigin_;
    ComGoogleCommonBaseOptional *val$viewHeldItemServPermIds_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)composeWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


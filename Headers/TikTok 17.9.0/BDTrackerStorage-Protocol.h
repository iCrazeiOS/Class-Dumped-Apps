//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDTrackBatchData, NSArray, NSString;

@protocol BDTrackerStorage <NSObject>
- (void)clearAllEventData;
- (void)trigerAutoVacuum;
- (void)removeTracksByID:(NSArray *)arg1;
- (void)onBatchEndWithResultSuccess:(_Bool)arg1;
- (void)appendEventToData:(BDTrackBatchData *)arg1;
- (void)deleteTrackCreatedBefore:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Int64Dictionary;

@interface HTSLiveTaskCurrentInfo : GPBMessage
{
}

+ (id)descriptor;
- (id)dictionary;

// Remaining properties
@property(retain, nonatomic) GPBInt64Int64Dictionary *customizedGiftCount; // @dynamic customizedGiftCount;
@property(readonly, nonatomic) unsigned long long customizedGiftCount_Count; // @dynamic customizedGiftCount_Count;
@property(nonatomic) long long pkWinCount; // @dynamic pkWinCount;
@property(nonatomic) long long roomLikeCount; // @dynamic roomLikeCount;

@end


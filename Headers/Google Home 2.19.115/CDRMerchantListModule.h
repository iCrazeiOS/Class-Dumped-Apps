//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CDRMerchantListModule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMoreButtonTitle; // @dynamic hasMoreButtonTitle;
@property(nonatomic) _Bool hasMoreButtonURL; // @dynamic hasMoreButtonURL;
@property(retain, nonatomic) NSMutableArray *merchantInfoCardArray; // @dynamic merchantInfoCardArray;
@property(readonly, nonatomic) unsigned long long merchantInfoCardArray_Count; // @dynamic merchantInfoCardArray_Count;
@property(copy, nonatomic) NSString *moreButtonTitle; // @dynamic moreButtonTitle;
@property(copy, nonatomic) NSString *moreButtonURL; // @dynamic moreButtonURL;

@end


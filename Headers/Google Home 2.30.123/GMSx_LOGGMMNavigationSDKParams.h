//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_LOGGMMNavigationSDKMetric, NSMutableArray;

@interface GMSx_LOGGMMNavigationSDKParams : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetric; // @dynamic hasMetric;
@property(retain, nonatomic) GMSx_LOGGMMNavigationSDKMetric *metric; // @dynamic metric;
@property(retain, nonatomic) NSMutableArray *transactionIdArray; // @dynamic transactionIdArray;
@property(readonly, nonatomic) unsigned long long transactionIdArray_Count; // @dynamic transactionIdArray_Count;

@end


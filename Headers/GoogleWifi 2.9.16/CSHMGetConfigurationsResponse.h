//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CSHMGetConfigurationsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *configurationArray; // @dynamic configurationArray;
@property(readonly, nonatomic) unsigned long long configurationArray_Count; // @dynamic configurationArray_Count;
@property(retain, nonatomic) NSMutableArray *experimentArray; // @dynamic experimentArray;
@property(readonly, nonatomic) unsigned long long experimentArray_Count; // @dynamic experimentArray_Count;
@property(copy, nonatomic) NSString *externalHelpcenterName; // @dynamic externalHelpcenterName;
@property(nonatomic) _Bool hasExternalHelpcenterName; // @dynamic hasExternalHelpcenterName;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) int productId; // @dynamic productId;

@end


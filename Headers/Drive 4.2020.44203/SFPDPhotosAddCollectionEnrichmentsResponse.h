//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCCollectionEnrichmentData;

@interface SFPDPhotosAddCollectionEnrichmentsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCCollectionEnrichmentData *enrichmentData; // @dynamic enrichmentData;
@property(nonatomic) _Bool hasEnrichmentData; // @dynamic hasEnrichmentData;
@property(retain, nonatomic) NSMutableArray *movedItemPositionArray; // @dynamic movedItemPositionArray;
@property(readonly, nonatomic) unsigned long long movedItemPositionArray_Count; // @dynamic movedItemPositionArray_Count;

@end


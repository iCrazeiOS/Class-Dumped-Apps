//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray;

@interface PhotosMCSharedCollectionsQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *collectionRecipientGroupArray; // @dynamic collectionRecipientGroupArray;
@property(readonly, nonatomic) unsigned long long collectionRecipientGroupArray_Count; // @dynamic collectionRecipientGroupArray_Count;
@property(nonatomic) _Bool hasShareType; // @dynamic hasShareType;
@property(nonatomic) int shareType; // @dynamic shareType;

@end


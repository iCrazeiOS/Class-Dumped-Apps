//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCActorRef, PhotosMCCollectionRef;

@interface PhotosMCSuggestionMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alertLevel; // @dynamic alertLevel;
@property(nonatomic) int algorithmType; // @dynamic algorithmType;
@property(nonatomic) long long creationTimeMs; // @dynamic creationTimeMs;
@property(nonatomic) long long endTimeMs; // @dynamic endTimeMs;
@property(retain, nonatomic) PhotosMCCollectionRef *existingCollection; // @dynamic existingCollection;
@property(nonatomic) _Bool hasAlertLevel; // @dynamic hasAlertLevel;
@property(nonatomic) _Bool hasAlgorithmType; // @dynamic hasAlgorithmType;
@property(nonatomic) _Bool hasCreationTimeMs; // @dynamic hasCreationTimeMs;
@property(nonatomic) _Bool hasEndTimeMs; // @dynamic hasEndTimeMs;
@property(nonatomic) _Bool hasExistingCollection; // @dynamic hasExistingCollection;
@property(nonatomic) _Bool hasLeastRecentItemTimestampMs; // @dynamic hasLeastRecentItemTimestampMs;
@property(nonatomic) _Bool hasMostRecentItemTimestampMs; // @dynamic hasMostRecentItemTimestampMs;
@property(nonatomic) _Bool hasOwner; // @dynamic hasOwner;
@property(nonatomic) _Bool hasShortcutState; // @dynamic hasShortcutState;
@property(nonatomic) _Bool hasStartTimeMs; // @dynamic hasStartTimeMs;
@property(nonatomic) _Bool hasSuggestionState; // @dynamic hasSuggestionState;
@property(nonatomic) long long leastRecentItemTimestampMs; // @dynamic leastRecentItemTimestampMs;
@property(nonatomic) long long mostRecentItemTimestampMs; // @dynamic mostRecentItemTimestampMs;
@property(retain, nonatomic) PhotosMCActorRef *owner; // @dynamic owner;
@property(nonatomic) int shortcutState; // @dynamic shortcutState;
@property(retain, nonatomic) NSMutableArray *sourceClusterArray; // @dynamic sourceClusterArray;
@property(readonly, nonatomic) unsigned long long sourceClusterArray_Count; // @dynamic sourceClusterArray_Count;
@property(nonatomic) long long startTimeMs; // @dynamic startTimeMs;
@property(nonatomic) int suggestionState; // @dynamic suggestionState;

@end


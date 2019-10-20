//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRPlusQuery.h"

@class GTLRDateTime, NSArray, NSString;

@interface GTLRPlusQuery_PeoplePeopleBlockedList : GTLRPlusQuery
{
}

+ (id)queryWithPersonId:(id)arg1;
+ (id)arrayPropertyToClassMap;
+ (id)parameterNameMap;

// Remaining properties
@property(copy, nonatomic) NSString *contextClientType; // @dynamic contextClientType;
@property(copy, nonatomic) NSString *contextConsistencyContextBase64EncodedZookie; // @dynamic contextConsistencyContextBase64EncodedZookie;
@property(retain, nonatomic) GTLRDateTime *contextConsistencyContextFbsRequireAllImportantWritesUpToTime; // @dynamic contextConsistencyContextFbsRequireAllImportantWritesUpToTime;
@property(copy, nonatomic) NSString *contextConsistencyContextFbsVersionInfo; // @dynamic contextConsistencyContextFbsVersionInfo;
@property(copy, nonatomic) NSString *contextRightOfPublicityContext; // @dynamic contextRightOfPublicityContext;
@property(copy, nonatomic) NSString *dedupeOption; // @dynamic dedupeOption;
@property(nonatomic) _Bool delayFullSync; // @dynamic delayFullSync;
@property(retain, nonatomic) NSArray *extensionSetExtensionNames; // @dynamic extensionSetExtensionNames;
@property(retain, nonatomic) NSArray *fieldFilterField; // @dynamic fieldFilterField;
@property(retain, nonatomic) NSArray *mergedPersonSourceOptionsConnectedSitesOptionsConnectedSiteType; // @dynamic mergedPersonSourceOptionsConnectedSitesOptionsConnectedSiteType;
@property(retain, nonatomic) NSArray *mergedPersonSourceOptionsDataJoinParamsProfileJoinType; // @dynamic mergedPersonSourceOptionsDataJoinParamsProfileJoinType;
@property(nonatomic) _Bool mergedPersonSourceOptionsIncludeAccountLocale; // @dynamic mergedPersonSourceOptionsIncludeAccountLocale;
@property(retain, nonatomic) NSArray *mergedPersonSourceOptionsIncludeAffinity; // @dynamic mergedPersonSourceOptionsIncludeAffinity;
@property(copy, nonatomic) NSString *mergedPersonSourceOptionsPlaceParamsRequestPlaces; // @dynamic mergedPersonSourceOptionsPlaceParamsRequestPlaces;
@property(copy, nonatomic) NSString *orderBy; // @dynamic orderBy;
@property(nonatomic) long long pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *personId; // @dynamic personId;
@property(copy, nonatomic) NSString *requestMaskCustomRequestMask; // @dynamic requestMaskCustomRequestMask;
@property(copy, nonatomic) NSString *requestMaskImageUrlType; // @dynamic requestMaskImageUrlType;
@property(retain, nonatomic) NSArray *requestMaskIncludeContainer; // @dynamic requestMaskIncludeContainer;
@property(copy, nonatomic) NSString *requestMaskIncludeField; // @dynamic requestMaskIncludeField;
@property(copy, nonatomic) NSString *requestMaskIncludePeopleInCommon; // @dynamic requestMaskIncludePeopleInCommon;
@property(copy, nonatomic) NSString *syncToken; // @dynamic syncToken;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString, POEMPersonFieldMetadata;

@interface POEMPhoto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool hasIsDefault; // @dynamic hasIsDefault;
@property(nonatomic) _Bool hasIsMonogram; // @dynamic hasIsMonogram;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasMonogramBackground; // @dynamic hasMonogramBackground;
@property(nonatomic) _Bool hasPhotoToken; // @dynamic hasPhotoToken;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasViewerURL; // @dynamic hasViewerURL;
@property(retain, nonatomic) NSMutableArray *htmlAttributionArray; // @dynamic htmlAttributionArray;
@property(readonly, nonatomic) unsigned long long htmlAttributionArray_Count; // @dynamic htmlAttributionArray_Count;
@property(nonatomic) _Bool isDefault; // @dynamic isDefault;
@property(nonatomic) _Bool isMonogram; // @dynamic isMonogram;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *monogramBackground; // @dynamic monogramBackground;
@property(copy, nonatomic) NSString *photoToken; // @dynamic photoToken;
@property(copy, nonatomic) NSString *viewerURL; // @dynamic viewerURL;

@end


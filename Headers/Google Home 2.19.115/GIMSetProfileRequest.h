//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMPartialProfile, GIMProfile, GIMRequestHeader;

@interface GIMSetProfileRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIMProfile *deprecatedProfile; // @dynamic deprecatedProfile;
@property(nonatomic) _Bool hasDeprecatedProfile; // @dynamic hasDeprecatedProfile;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasProfileChanges; // @dynamic hasProfileChanges;
@property(retain, nonatomic) GIMRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) GIMPartialProfile *profileChanges; // @dynamic profileChanges;

@end


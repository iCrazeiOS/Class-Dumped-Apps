//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCameraDetails, GHCSoundDetails, NSString;

@interface GHCGetFeedDetailsResponse_FeedDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCCameraDetails *cameraDetails; // @dynamic cameraDetails;
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(copy, nonatomic) NSString *feedCardId; // @dynamic feedCardId;
@property(retain, nonatomic) GHCSoundDetails *soundDetails; // @dynamic soundDetails;

@end


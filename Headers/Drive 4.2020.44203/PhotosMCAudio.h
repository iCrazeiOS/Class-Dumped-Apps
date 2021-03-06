//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCAudioProperties;

@interface PhotosMCAudio : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCAudioProperties *audioProperties; // @dynamic audioProperties;
@property(copy, nonatomic) NSString *downloadURL; // @dynamic downloadURL;
@property(nonatomic) int failureReason; // @dynamic failureReason;
@property(nonatomic) _Bool hasAudioProperties; // @dynamic hasAudioProperties;
@property(nonatomic) _Bool hasDownloadURL; // @dynamic hasDownloadURL;
@property(nonatomic) _Bool hasFailureReason; // @dynamic hasFailureReason;
@property(nonatomic) _Bool hasProcessingStatus; // @dynamic hasProcessingStatus;
@property(nonatomic) int processingStatus; // @dynamic processingStatus;

@end


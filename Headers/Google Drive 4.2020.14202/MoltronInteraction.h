//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class BootstrapId, GPBTimestamp, InteractionContext, NSString;

@interface MoltronInteraction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BootstrapId *bootstrapId; // @dynamic bootstrapId;
@property(nonatomic) _Bool hasInteractionContext; // @dynamic hasInteractionContext;
@property(nonatomic) _Bool hasInteractionType; // @dynamic hasInteractionType;
@property(nonatomic) _Bool hasPredictionId; // @dynamic hasPredictionId;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(retain, nonatomic) InteractionContext *interactionContext; // @dynamic interactionContext;
@property(nonatomic) int interactionType; // @dynamic interactionType;
@property(readonly, nonatomic) int labelOneOfCase; // @dynamic labelOneOfCase;
@property(copy, nonatomic) NSString *predictionId; // @dynamic predictionId;
@property(copy, nonatomic) NSString *reportingId; // @dynamic reportingId;
@property(retain, nonatomic) GPBTimestamp *timestamp; // @dynamic timestamp;

@end


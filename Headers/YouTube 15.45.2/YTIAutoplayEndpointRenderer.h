//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAutoplayEndpointSupportedRenderers, YTICommand;

@interface YTIAutoplayEndpointRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAutoplayEndpointSupportedRenderers *item; // @dynamic item;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


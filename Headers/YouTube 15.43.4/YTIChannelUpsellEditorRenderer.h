//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTICommand, YTIUpsellVideoPlayerSupportedRenderers;

@interface YTIChannelUpsellEditorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPickTrailerEndpoint; // @dynamic hasPickTrailerEndpoint;
@property(nonatomic) _Bool hasTrailerPlayer; // @dynamic hasTrailerPlayer;
@property(retain, nonatomic) YTICommand *pickTrailerEndpoint; // @dynamic pickTrailerEndpoint;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIUpsellVideoPlayerSupportedRenderers *trailerPlayer; // @dynamic trailerPlayer;

@end


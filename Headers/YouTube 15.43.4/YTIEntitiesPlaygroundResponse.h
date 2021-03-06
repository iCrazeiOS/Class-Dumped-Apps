//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFakeChannelEntity, YTIFrameworkUpdateTransport, YTIResponseContext;

@interface YTIEntitiesPlaygroundResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *entityKeysArray; // @dynamic entityKeysArray;
@property(readonly, nonatomic) unsigned long long entityKeysArray_Count; // @dynamic entityKeysArray_Count;
@property(retain, nonatomic) YTIFakeChannelEntity *fakeChannelEntity; // @dynamic fakeChannelEntity;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasFakeChannelEntity; // @dynamic hasFakeChannelEntity;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedMessageIntegrationPayload_PayloadCase, ComGoogleAppsDynamiteV1SharedMessageIntegrationPayload_PayloadType, ComGoogleAppsDynamiteV1SharedTasksMessageIntegrationPayload;

@protocol ComGoogleAppsDynamiteV1SharedMessageIntegrationPayloadOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsDynamiteV1SharedMessageIntegrationPayload_PayloadCase *)getPayloadCase;
- (ComGoogleAppsDynamiteV1SharedTasksMessageIntegrationPayload *)getTasksMessageIntegrationPayload;
- (_Bool)hasTasksMessageIntegrationPayload;
- (long long)getProjectNumber;
- (_Bool)hasProjectNumber;
- (ComGoogleAppsDynamiteV1SharedMessageIntegrationPayload_PayloadType *)getType;
- (_Bool)hasType;
@end


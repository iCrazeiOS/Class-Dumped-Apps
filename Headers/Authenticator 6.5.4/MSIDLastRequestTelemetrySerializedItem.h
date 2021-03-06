//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDCurrentRequestTelemetrySerializedItem.h>

@class NSArray, NSMutableArray;

@interface MSIDLastRequestTelemetrySerializedItem : MSIDCurrentRequestTelemetrySerializedItem
{
    NSArray *_errorsInfo;
    NSMutableArray *_unserializedErrors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unserializedErrors; // @synthesize unserializedErrors=_unserializedErrors;
@property(retain, nonatomic) NSArray *errorsInfo; // @synthesize errorsInfo=_errorsInfo;
- (void)addRemainingErrorsToUnserializedTelemetry:(int)arg1;
- (id)getUnserializedTelemetry;
- (id)serializeErrorsInfoWithCurrentStringSize:(unsigned long long)arg1;
- (id)serialize;
- (id)initWithSchemaVersion:(id)arg1 defaultFields:(id)arg2 errorInfo:(id)arg3 platformFields:(id)arg4;

@end


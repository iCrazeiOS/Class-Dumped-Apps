//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WJSerializer-Protocol.h"

@interface WJJSONSerializer : NSObject <WJSerializer>
{
}

+ (id)serializer;
- (long long)deserializeWIFIKeyManagement:(id)arg1;
- (id)serializeWIFIKeyManagement:(long long)arg1;
- (id)dictionaryFromData:(id)arg1 error:(id *)arg2;
- (id)deserializeKeyExchangeResponse:(id)arg1 error:(id *)arg2;
- (id)serializeKeyExchangeRequest:(id)arg1 error:(id *)arg2;
- (id)deserializeEncryptionCapabilities:(id)arg1 error:(id *)arg2;
- (id)deserializeDeviceRegistrationDetails:(id)arg1 error:(id *)arg2;
- (id)serializeDeviceRegistrationDetails:(id)arg1 error:(id *)arg2;
- (id)deserializePreauthorizedCode:(id)arg1 error:(id *)arg2;
- (id)serializePreauthorizedCode:(id)arg1 error:(id *)arg2;
- (id)deserializeToken:(id)arg1 error:(id *)arg2;
- (id)serializeToken:(id)arg1 error:(id *)arg2;
- (id)deserializeWIFIConnection:(id)arg1 error:(id *)arg2;
- (id)serializeWIFIConnection:(id)arg1 error:(id *)arg2;
- (id)serializeWIFIConfiguration:(id)arg1 error:(id *)arg2;
- (id)deserializeWIFIBaseConfiguration:(id)arg1 error:(id *)arg2;
- (id)deserializeWIFINetwork:(id)arg1 error:(id *)arg2;
- (id)serializeWIFINetwork:(id)arg1 error:(id *)arg2;
- (id)deserializeResponse:(id)arg1 error:(id *)arg2;
- (id)serializeResponse:(id)arg1 error:(id *)arg2;
- (id)deserializeListIndex:(id)arg1 error:(id *)arg2;
- (id)serializeListIndex:(id)arg1 error:(id *)arg2;
- (id)serializeEmpty;
- (id)getUnquotedString:(id)arg1;

@end


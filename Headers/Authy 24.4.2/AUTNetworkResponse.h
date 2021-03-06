//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUTOneTouchError, NSString;

@interface AUTNetworkResponse : NSObject
{
    int _status;
    NSString *_message;
    id _jsonObject;
    AUTOneTouchError *_error;
}

+ (id)httpHeaderSignedWithRequestMethod:(id)arg1 params:(id)arg2 oneTouchDevices:(id)arg3 url:(id)arg4;
+ (id)httpPUTHeaderWithParam:(id)arg1 oneTouchDevices:(id)arg2 url:(id)arg3;
+ (id)httpPOSTHeaderWithParam:(id)arg1 oneTouchDevices:(id)arg2 url:(id)arg3;
+ (id)httpGETHeaderWithParam:(id)arg1 oneTouchDevices:(id)arg2 url:(id)arg3;
+ (void)requestToUrl:(id)arg1 data:(id)arg2 requestMethod:(id)arg3 httpHeaders:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (void)postToUrl:(id)arg1 data:(id)arg2 httpHeaders:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)putToUrl:(id)arg1 data:(id)arg2 httpHeaders:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)getToUrl:(id)arg1 data:(id)arg2 httpHeaders:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) AUTOneTouchError *error; // @synthesize error=_error;
@property(retain, nonatomic) id jsonObject; // @synthesize jsonObject=_jsonObject;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property int status; // @synthesize status=_status;
- (id)description;
@property(readonly, nonatomic) _Bool isOk;
- (id)objectForKey:(id)arg1;
- (id)initWithError:(id)arg1 andOperation:(id)arg2;
- (id)getResponseDictionaryFromError:(id)arg1;
- (id)initWithAFResponse:(id)arg1 operation:(id)arg2;

@end


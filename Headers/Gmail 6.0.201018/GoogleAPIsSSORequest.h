//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GoogleAPIsObjcHttpRequest.h"

@class GoogleAPIsSSOTransport, GoogleAPIsSSOTransportFactory, NSObject;
@protocol OS_dispatch_queue;

@interface GoogleAPIsSSORequest : GoogleAPIsObjcHttpRequest
{
    GoogleAPIsSSOTransportFactory *_factory;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GoogleAPIsSSOTransport *_transport;
}

+ (id)urlFromApiaryUrl:(const char *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak GoogleAPIsSSOTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) GoogleAPIsSSOTransportFactory *factory; // @synthesize factory=_factory;
- (void)executeWithResponse:(struct HttpResponse *)arg1 withCompletionHandler:(function_6d4f7888)arg2;
- (struct Status)translateTransportError:(id)arg1;
- (void)executeWithResponse:(struct HttpResponse *)arg1;
- (id)fetcherService;
- (id)initWithTransport:(id)arg1 method:(const struct string_view *)arg2 callbackQueue:(id)arg3;

@end


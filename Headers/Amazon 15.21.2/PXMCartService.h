//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXMCartService-Protocol.h"

@class NSString;
@protocol PXMAddToCartResponseHandler, PXMCartConfig, PXMServerRequestHandler;

@interface PXMCartService : NSObject <PXMCartService>
{
    id <PXMServerRequestHandler> _requestHandler;
    id <PXMCartConfig> _config;
    id <PXMAddToCartResponseHandler> _responseHandler;
}

@property(readonly, nonatomic) id <PXMAddToCartResponseHandler> responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) id <PXMCartConfig> config; // @synthesize config=_config;
@property(readonly, nonatomic) id <PXMServerRequestHandler> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)addItemToCart:(id)arg1 quantity:(int)arg2 offer:(id)arg3 promo:(id)arg4 couponMsg:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithConfig:(id)arg1 requestHandler:(id)arg2 responseHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


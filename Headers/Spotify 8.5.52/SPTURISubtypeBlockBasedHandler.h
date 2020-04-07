//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeHandler-Protocol.h"
#import "SPTURISubtypeHandlerRegistrationToken-Protocol.h"

@class NSString, SPTURISubtypeRegistryImplementation;

@interface SPTURISubtypeBlockBasedHandler : NSObject <SPTURISubtypeHandler, SPTURISubtypeHandlerRegistrationToken>
{
    long long _type;
    CDUnknownBlockType _block;
    SPTURISubtypeRegistryImplementation *_registry;
}

@property(readonly, nonatomic) __weak SPTURISubtypeRegistryImplementation *registry; // @synthesize registry=_registry;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cancel;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithURIType:(long long)arg1 block:(CDUnknownBlockType)arg2 registry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


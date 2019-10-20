//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETBluetoothJetstreamDevice, JETBluetoothSetupAPI, NSData;

@interface JETBluetoothAuthFlow : NSObject
{
    JETBluetoothSetupAPI *_API;
    JETBluetoothJetstreamDevice *_device;
    NSData *_APHMACNonce;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSData *APHMACNonce; // @synthesize APHMACNonce=_APHMACNonce;
@property(retain, nonatomic) JETBluetoothJetstreamDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) JETBluetoothSetupAPI *API; // @synthesize API=_API;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)finishSuccessfully;
- (void)stop;
- (void)continueFlowWithLocalState:(long long)arg1;
- (void)executeProofExchange;
- (void)executeNonceExchange;
- (void)executeDHKeyExchange;
- (void)waitUntilAPReady;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 setupPSK:(id)arg2;

@end


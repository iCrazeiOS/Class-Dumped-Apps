//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMATAmazonBridge, AMATMraidBridge, AMATViewabilityBridge, NSString;

@interface AMATBridgeManager : NSObject
{
    AMATViewabilityBridge *_viewabilityBridge;
    AMATMraidBridge *_mraidBridge;
    AMATAmazonBridge *_amazonBridge;
}

+ (id)bridgeManager:(id)arg1 adController:(id)arg2;
@property(retain, nonatomic) AMATAmazonBridge *amazonBridge; // @synthesize amazonBridge=_amazonBridge;
@property(retain, nonatomic) AMATMraidBridge *mraidBridge; // @synthesize mraidBridge=_mraidBridge;
@property(retain, nonatomic) AMATViewabilityBridge *viewabilityBridge; // @synthesize viewabilityBridge=_viewabilityBridge;
- (void).cxx_destruct;
- (id)initWithBridgesEnabled:(id)arg1 andAdController:(id)arg2;
- (void)initializeOnWebviewLoad:(id)arg1;
@property(readonly, nonatomic) NSString *jsApi;
- (_Bool)processBridgeRequest:(id)arg1;
- (void)registerBridgesWithContainer:(id)arg1;

@end


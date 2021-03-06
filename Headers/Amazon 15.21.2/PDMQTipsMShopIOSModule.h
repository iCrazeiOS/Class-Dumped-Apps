//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIAppEventsListenerProtocol-Protocol.h"
#import "AMIModule-Protocol.h"

@class AMIModuleContext, NSString, PDMQTipsMShopManager;
@protocol AMIWeblabBridgeService, PDMQTipsMShopDelegate;

@interface PDMQTipsMShopIOSModule : NSObject <AMIModule, AMIAppEventsListenerProtocol>
{
    _Bool _appStarted;
    AMIModuleContext *_moduleContext;
    id <AMIWeblabBridgeService> _weblabBridge;
    PDMQTipsMShopManager<PDMQTipsMShopDelegate> *_manager;
}

+ (id)currentMarketplaceAndLanguage;
+ (_Bool)featureSupported;
+ (id)sharedModule;
@property(nonatomic) _Bool appStarted; // @synthesize appStarted=_appStarted;
@property(retain, nonatomic) PDMQTipsMShopManager<PDMQTipsMShopDelegate> *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) AMIModuleContext *moduleContext; // @synthesize moduleContext=_moduleContext;
- (void).cxx_destruct;
- (_Bool)hasAppStarted;
- (void)appDidFinishStartup;
- (void)registerWeblabs;
- (_Bool)elligibleWeblabTreatment;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


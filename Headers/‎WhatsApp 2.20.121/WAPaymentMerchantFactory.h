//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPaymentFactoryDependencyProvider-Protocol.h"

@class WAPaymentMerchantManager;

@interface WAPaymentMerchantFactory : NSObject <WAPaymentFactoryDependencyProvider>
{
    // Error parsing type: , name: paymentMerchantManager
}

- (void).cxx_destruct;
- (id)init;
- (id)newAccountDetailsHandlerForAccount:(id)arg1 rootViewController:(id)arg2 delegate:(id)arg3 rootHandlerDelegate:(id)arg4;
- (void)fullyResetPaymentsStateAndResetTOS:(_Bool)arg1 resetWAPIN:(_Bool)arg2;
- (_Bool)hasMerchantAccount;
- (id)newTransactionHandlerCustomizer;
- (id)newMerchantAccountSetupHandlerWithRootViewController:(id)arg1 delegate:(id)arg2 rootHandlerDelegate:(id)arg3;
- (id)newPayHubHandlerWithRootViewController:(id)arg1 delegate:(id)arg2 rootHandlerDelegate:(id)arg3 andFlowId:(id)arg4;
- (id)initWithPaymentMerchantManager:(id)arg1;
@property(nonatomic, readonly) WAPaymentMerchantManager *paymentMerchantManager; // @synthesize paymentMerchantManager;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentBaseHandler.h>

@protocol WAPaymentRegistrationHandlerDelegate;

@interface _TtC8Payments28PaymentEURegistrationHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: currentHandler
    // Error parsing type: , name: delegate
    // Error parsing type: , name: emailManager
    // Error parsing type: , name: verificationNeeded
    // Error parsing type: , name: transactionContext
    // Error parsing type: , name: completedKYC
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentManager:(id)arg2 transactionContext:(long long)arg3 verificationNeeded:(_Bool)arg4 rootHandlerDelegate:(id)arg5;
- (id)initWithNavigationHandler:(id)arg1 paymentManager:(id)arg2 errorHandlerRegistry:(id)arg3 flowId:(id)arg4 transactionContext:(long long)arg5 verificationNeeded:(_Bool)arg6 isUserInitiated:(_Bool)arg7;
@property(nonatomic) __weak id <WAPaymentRegistrationHandlerDelegate> delegate; // @synthesize delegate;

@end


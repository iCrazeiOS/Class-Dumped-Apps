//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBPayConnectViewControllerDelegate-Protocol.h>

@class FBPayConnectContext, FBPayConnectViewController, NSString;

@interface FBPayConnectManager : NSObject <FBPayConnectViewControllerDelegate>
{
    FBPayConnectContext *_connectContext;
    FBPayConnectViewController *_connectViewController;
    FBPayConnectViewController *_paypalConsentViewController;
    CDUnknownBlockType _connectCompletion;
    _Bool _isPayPalBillingAgreementConvertNeeded;
    NSString *_paypalBillingAgreementID;
    _Bool _showFallbackDialogDueToFailedPIN;
}

- (void).cxx_destruct;
- (void)_presentUnableToConnectDialog;
- (void)_presentPayPalConsentBottomSheetWithType:(long long)arg1 billingAgreementID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentConnectOrDisconnectBottomSheetWithCompletion:(CDUnknownBlockType)arg1 isConnect:(_Bool)arg2;
- (void)_presentPayPalVerificationScreenWithTargetAccountID:(id)arg1 connectURL:(id)arg2 credentialID:(id)arg3 email:(id)arg4 hiddenEmail:(id)arg5 billingAgreementType:(id)arg6;
- (void)_presentCVVVerificationScreenWithTargetAccountID:(id)arg1 credentialID:(id)arg2 title:(id)arg3;
- (void)_presentPINVerificationScreenWithTargetAccountID:(id)arg1;
- (void)didHitSSOTokenAuthErrorWithTargetAccountID:(id)arg1 fallbackAuthFactor:(id)arg2;
- (void)didHitPayPalAuthErrorWithTargetAccountID:(id)arg1 authFactor:(id)arg2;
- (void)didHitCVVAuthErrorWithTargetAccountID:(id)arg1 authFactor:(id)arg2;
- (void)didHitPINAuthErrorWithTargetAccountID:(id)arg1;
- (void)didHitAuthErrorWithTargetAccountID:(id)arg1 authFactors:(id)arg2;
- (void)didCancelBottomSheetByUser:(long long)arg1;
- (void)didCompletePayPalConsentWithSuccess:(_Bool)arg1;
- (void)didCompleteDisconnectWithSuccess:(_Bool)arg1;
- (void)didCompleteConnectWithSuccess:(_Bool)arg1;
- (void)fetchInitialPTTStringWithTargetAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didNeedToUpdateBottomSheetHeight:(double)arg1;
- (void)presentPayPalConsentBottomSheetFromCheckoutWithBillingAgreementID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDisconnectBottomSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentConnectBottomSheetWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConnectContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


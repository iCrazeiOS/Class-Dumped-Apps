//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBInAppPurchaseProductRequesterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/SKProductsRequestDelegate-Protocol.h>

@class FBInAppPurchaseFunnelLoggerHelper, FBInAppPurchaseMockPaymentHandler, FBInAppPurchasePaymentHandler, FBInAppPurchaseProductRequester, NSArray, NSDictionary, NSString, SKProductsRequest;
@protocol FBInAppPurchaseDelegate;

@interface FBInAppPurchaseStoreManager : NSObject <SKProductsRequestDelegate, FBInAppPurchaseProductRequesterDelegate>
{
    id <FBInAppPurchaseDelegate> _delegate;
    unsigned long long _productType;
    NSDictionary *_extraLoggingData;
    FBInAppPurchasePaymentHandler *_paymentHandler;
    NSArray *_productIdentifiers;
    NSDictionary *_storeProducts;
    SKProductsRequest *_skProductRequest;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    FBInAppPurchaseFunnelLoggerHelper *_loggerHelper;
    FBInAppPurchaseProductRequester *_productRequester;
    FBInAppPurchaseMockPaymentHandler *_mockPaymentHandler;
}

- (void).cxx_destruct;
- (void)configureLoggerMetadataWithContainerModule:(id)arg1 mediaID:(id)arg2 productType:(id)arg3;
- (void)_reset;
- (id)_skProductsForFBProducts:(id)arg1;
- (id)_getUncachedProducts:(id)arg1;
- (id)_getCachedProducts:(id)arg1;
- (void)_verifyProductInventory:(id)arg1;
- (void)_requestProductsFromFB:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2 failureCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_requestProductsFromApple:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2 failureCompletionHandler:(CDUnknownBlockType)arg3;
- (void)endPurchaseSession;
- (void)dealloc;
- (void)fetchInAppPurchaseProductsFailed:(id)arg1;
- (void)didFetchInAppPurchaseProducts:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)hasPurchasedProductInProducts:(id)arg1 itemId:(id)arg2;
- (_Bool)hasUnfinishedTransactionForProducts:(id)arg1 itemId:(id)arg2;
- (void)restorePurchasesWithRestoreHandler:(CDUnknownBlockType)arg1;
- (void)mockBuyProduct:(id)arg1 internalProductID:(id)arg2 payload:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)buyProduct:(id)arg1 internalProductID:(id)arg2 payload:(id)arg3 itemId:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)buyProduct:(id)arg1 internalProductID:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)buyProduct:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)requestProducts:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2 failureCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 inAppPurchaseCache:(id)arg2 withProductType:(unsigned long long)arg3 funnelLogger:(id)arg4 structuredLogger:(id)arg5 withExtraLoggingData:(id)arg6;
- (id)initWithDelegate:(id)arg1 inAppPurchaseCache:(id)arg2 withProductType:(unsigned long long)arg3 funnelLogger:(id)arg4 structuredLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreePaymentFlow/BTPaymentFlowResult.h>

@class BTThreeDSecureResult, NSString, NSURL;

@interface BTThreeDSecureLookup : BTPaymentFlowResult
{
    NSString *_PAReq;
    NSString *_MD;
    NSURL *_acsURL;
    NSURL *_termURL;
    BTThreeDSecureResult *_threeDSecureResult;
}

@property(retain, nonatomic) BTThreeDSecureResult *threeDSecureResult; // @synthesize threeDSecureResult=_threeDSecureResult;
@property(copy, nonatomic) NSURL *termURL; // @synthesize termURL=_termURL;
@property(copy, nonatomic) NSURL *acsURL; // @synthesize acsURL=_acsURL;
@property(copy, nonatomic) NSString *MD; // @synthesize MD=_MD;
@property(copy, nonatomic) NSString *PAReq; // @synthesize PAReq=_PAReq;
- (void).cxx_destruct;
- (_Bool)requiresUserAuthentication;

@end


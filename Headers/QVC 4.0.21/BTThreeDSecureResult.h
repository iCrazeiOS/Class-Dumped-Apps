//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreePaymentFlow/BTPaymentFlowResult.h>

@class BTCardNonce, NSString;

@interface BTThreeDSecureResult : BTPaymentFlowResult
{
    _Bool _success;
    _Bool _liabilityShifted;
    _Bool _liabilityShiftPossible;
    BTCardNonce *_tokenizedCard;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) BTCardNonce *tokenizedCard; // @synthesize tokenizedCard=_tokenizedCard;
@property(nonatomic) _Bool liabilityShiftPossible; // @synthesize liabilityShiftPossible=_liabilityShiftPossible;
@property(nonatomic) _Bool liabilityShifted; // @synthesize liabilityShifted=_liabilityShifted;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithJSON:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentRequest.h>

@class NSString;

@interface WAPaymentCheckAccountEligibilityNameRequest : WAPaymentRequest
{
    // Error parsing type: , name: fullName
    // Error parsing type: , name: actionType
}

+ (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 input:(id)arg2;
- (id)initWithDefaultInputAndIdentifier:(id)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullName:(id)arg1 actionType:(long long)arg2;
@property(nonatomic, readonly) NSString *fullName;

@end


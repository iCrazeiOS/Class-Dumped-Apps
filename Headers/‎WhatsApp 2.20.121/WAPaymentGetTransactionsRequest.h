//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentRequest.h>

@class NSString;

@interface WAPaymentGetTransactionsRequest : WAPaymentRequest
{
    NSString *_after;
    NSString *_before;
    long long _limit;
}

+ (id)identifierForBefore:(id)arg1 after:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *before; // @synthesize before=_before;
@property(readonly, copy, nonatomic) NSString *after; // @synthesize after=_after;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBefore:(id)arg1 after:(id)arg2 limit:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


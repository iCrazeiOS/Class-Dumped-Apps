//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDuoAccountStatus-Protocol.h"

@class NSString;

@interface HMEDuoAccountStatus : NSObject <HMEDuoAccountStatus>
{
    _Bool _callingEnabled;
    _Bool _knockKnockEnabled;
    NSString *_linkedPhoneNumber;
    NSString *_suggestedPhoneNumber;
}

@property(copy, nonatomic) NSString *suggestedPhoneNumber; // @synthesize suggestedPhoneNumber=_suggestedPhoneNumber;
@property(copy, nonatomic) NSString *linkedPhoneNumber; // @synthesize linkedPhoneNumber=_linkedPhoneNumber;
@property(nonatomic) _Bool knockKnockEnabled; // @synthesize knockKnockEnabled=_knockKnockEnabled;
@property(nonatomic) _Bool callingEnabled; // @synthesize callingEnabled=_callingEnabled;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


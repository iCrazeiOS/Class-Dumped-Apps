//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDate, NSDictionary, NSString, NSURL;
@protocol STDSAuthenticationResponse;

@interface STP3DS2AuthenticateResponse : NSObject <STPAPIResponseDecodable>
{
    _Bool _livemode;
    NSDictionary *_allResponseFields;
    id <STDSAuthenticationResponse> _authenticationResponse;
    NSDate *_created;
    NSString *_sourceID;
    NSURL *_fallbackURL;
    long long _state;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) _Bool livemode; // @synthesize livemode=_livemode;
@property(readonly, nonatomic) NSDate *created; // @synthesize created=_created;
@property(readonly, nonatomic) id <STDSAuthenticationResponse> authenticationResponse; // @synthesize authenticationResponse=_authenticationResponse;
@property(readonly, copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


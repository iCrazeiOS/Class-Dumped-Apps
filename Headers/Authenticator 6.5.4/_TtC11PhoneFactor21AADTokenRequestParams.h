//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface _TtC11PhoneFactor21AADTokenRequestParams : NSObject
{
    // Error parsing type: , name: extraQueryParams
    // Error parsing type: , name: correlationId
    // Error parsing type: , name: interactiveRequestBehavior
    // Error parsing type: , name: brokerAvailability
    // Error parsing type: , name: claims
    // Error parsing type: , name: forceInteractiveRequest
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool forceInteractiveRequest; // @synthesize forceInteractiveRequest;
@property(nonatomic, copy) NSString *claims;
@property(nonatomic) long long brokerAvailability; // @synthesize brokerAvailability;
@property(nonatomic) unsigned long long interactiveRequestBehavior; // @synthesize interactiveRequestBehavior;
@property(nonatomic, copy) NSUUID *correlationId;
@property(nonatomic, copy) NSDictionary *extraQueryParams;

@end


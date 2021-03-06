//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <mParticle_Apple_SDK/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MPAppboy : NSObject <NSSecureCoding>
{
    NSArray *_userInfoPerUser;
    NSData *_pushToken;
    NSString *_deviceIdentifier;
    id _sessionsPerUser;
    NSArray *_feedArrayUpdateTime;
    id _acksPerUser;
    NSString *_externalUserId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externalUserId; // @synthesize externalUserId=_externalUserId;
@property(retain, nonatomic) id acksPerUser; // @synthesize acksPerUser=_acksPerUser;
@property(retain, nonatomic) NSArray *feedArrayUpdateTime; // @synthesize feedArrayUpdateTime=_feedArrayUpdateTime;
@property(retain, nonatomic) id sessionsPerUser; // @synthesize sessionsPerUser=_sessionsPerUser;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSArray *userInfoPerUser; // @synthesize userInfoPerUser=_userInfoPerUser;
- (id)jsonString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


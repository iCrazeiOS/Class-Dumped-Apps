//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SPTAuthSerializableCredentials : NSObject
{
    struct SerializableCredentials _credentials;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *authBlob;
@property(readonly, nonatomic) NSString *username;
- (const struct SerializableCredentials *)cpp;
- (id)credentialsByTransferringToDeviceID:(id)arg1;
- (id)initWithSerializableCredentials:(struct SerializableCredentials)arg1;
- (id)initWithUsername:(id)arg1 authBlob:(id)arg2 deviceID:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSCredentialsProvider-Protocol.h>

@class NSDate, NSString;

@interface AWSAnonymousCredentialsProvider : NSObject <AWSCredentialsProvider>
{
}


// Remaining properties
@property(readonly, nonatomic) NSString *accessKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expiration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *secretKey;
@property(readonly, nonatomic) NSString *sessionKey;
@property(readonly) Class superclass;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GCVPhoneNumber, NSData;

@interface CPBHEligibleCallerIdToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCVPhoneNumber *callerIdPhoneNumber; // @dynamic callerIdPhoneNumber;
@property(nonatomic) _Bool hasCallerIdPhoneNumber; // @dynamic hasCallerIdPhoneNumber;
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(nonatomic) _Bool hasSignatureTtlUsec; // @dynamic hasSignatureTtlUsec;
@property(copy, nonatomic) NSData *signature; // @dynamic signature;
@property(nonatomic) unsigned long long signatureTtlUsec; // @dynamic signatureTtlUsec;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSIoTRegistrationConfig, NSNumber, NSString;

@interface AWSIoTUpdateCACertificateRequest : AWSRequest
{
    NSString *_certificateId;
    long long _latestAutoRegistrationStatus;
    long long _latestStatus;
    AWSIoTRegistrationConfig *_registrationConfig;
    NSNumber *_removeAutoRegistration;
}

+ (id)registrationConfigJSONTransformer;
+ (id)latestStatusJSONTransformer;
+ (id)latestAutoRegistrationStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *removeAutoRegistration; // @synthesize removeAutoRegistration=_removeAutoRegistration;
@property(retain, nonatomic) AWSIoTRegistrationConfig *registrationConfig; // @synthesize registrationConfig=_registrationConfig;
@property(nonatomic) long long latestStatus; // @synthesize latestStatus=_latestStatus;
@property(nonatomic) long long latestAutoRegistrationStatus; // @synthesize latestAutoRegistrationStatus=_latestAutoRegistrationStatus;
@property(retain, nonatomic) NSString *certificateId; // @synthesize certificateId=_certificateId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractPhoneAppRequest.h"

@class NSString;

@interface PhoneAppDeviceTokenChange : AbstractPhoneAppRequest
{
    int deviceTokenChangeResult;
    NSString *dosPreventer;
    NSString *oldDeviceToken;
    NSString *newDeviceToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int deviceTokenChangeResult; // @synthesize deviceTokenChangeResult;
@property(copy, nonatomic, getter=theNewDeviceToken) NSString *newDeviceToken; // @synthesize newDeviceToken;
@property(copy, nonatomic) NSString *oldDeviceToken; // @synthesize oldDeviceToken;
@property(copy, nonatomic) NSString *dosPreventer; // @synthesize dosPreventer;
- (_Bool)parseResponse:(id)arg1 data:(id)arg2;
- (id)constructRequest;

@end


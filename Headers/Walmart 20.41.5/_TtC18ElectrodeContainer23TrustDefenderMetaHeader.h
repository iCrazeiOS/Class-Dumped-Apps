//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/_TtC18ElectrodeContainer15ElectrodeObject.h>

@class NSString;

@interface _TtC18ElectrodeContainer23TrustDefenderMetaHeader : _TtC18ElectrodeContainer15ElectrodeObject
{
    // Error parsing type: , name: appId
    // Error parsing type: , name: appInstallDate
    // Error parsing type: , name: locationEnabled
    // Error parsing type: , name: longitude
    // Error parsing type: , name: latitude
    // Error parsing type: , name: deviceId
    // Error parsing type: , name: tmxSessionId
    // Error parsing type: , name: trustDefenderServiceName
}

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSString *trustDefenderServiceName;
@property(nonatomic, readonly) NSString *tmxSessionId;
@property(nonatomic, readonly) NSString *deviceId;
@property(nonatomic, readonly) NSString *latitude;
@property(nonatomic, readonly) NSString *longitude;
@property(nonatomic, readonly) NSString *appInstallDate;
@property(nonatomic, readonly) NSString *appId;

@end


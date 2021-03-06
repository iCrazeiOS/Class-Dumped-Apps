//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AWSClientContext : NSObject
{
    NSString *_installationId;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_appPackageName;
    NSString *_appName;
    NSString *_devicePlatformVersion;
    NSString *_devicePlatform;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    NSString *_deviceModelVersion;
    NSString *_deviceLocale;
    NSDictionary *_customAttributes;
    NSDictionary *_serviceDetails;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(retain, nonatomic) NSDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(retain, nonatomic) NSString *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
@property(retain, nonatomic) NSString *deviceModelVersion; // @synthesize deviceModelVersion=_deviceModelVersion;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceManufacturer; // @synthesize deviceManufacturer=_deviceManufacturer;
@property(retain, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(retain, nonatomic) NSString *devicePlatformVersion; // @synthesize devicePlatformVersion=_devicePlatformVersion;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appPackageName; // @synthesize appPackageName=_appPackageName;
@property(retain, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *installationId; // @synthesize installationId=_installationId;
- (id)deviceModelVersionCode;
- (id)description;
- (void)setDetails:(id)arg1 forService:(id)arg2;
- (id)base64EncodedJSONString;
- (id)JSONString;
- (id)dictionaryRepresentation;
- (id)init;

@end


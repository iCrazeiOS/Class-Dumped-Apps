//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABKServerRequest : NSObject
{
    NSString *_userId;
    NSString *_sdkVersion;
    NSString *_appVersion;
    NSString *_appVersionCode;
    NSString *_sdkFlavor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sdkFlavor; // @synthesize sdkFlavor=_sdkFlavor;
@property(retain) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy) NSString *userId; // @synthesize userId=_userId;
- (_Bool)isEmpty;
- (id)body;
- (id)additionalHeaders;
- (id)endpointURL;
- (id)initWithUserId:(id)arg1 sdkFlavor:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString;

@protocol ACTIExpHttpDataDelegate <NSObject>
- (void)intakeData:(NSData *)arg1 requestHeaders:(NSDictionary *)arg2 requestParams:(NSString *)arg3 httpResponse:(NSHTTPURLResponse *)arg4 eTag:(NSString *)arg5 userToken:(NSString *)arg6 error:(NSError *)arg7 offlineKey:(NSString *)arg8;
@end


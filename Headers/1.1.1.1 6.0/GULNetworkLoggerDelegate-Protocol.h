//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GoogleUtilities/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol GULNetworkLoggerDelegate <NSObject>
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 context:(id)arg4;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 contexts:(NSArray *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface SNAnalyticsData : FBValueObject <NSCopying, NSCoding>
{
    NSString *_clientName;
    NSDictionary *_loggingInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (id)initWithClientName:(id)arg1 loggingInfo:(id)arg2;

@end


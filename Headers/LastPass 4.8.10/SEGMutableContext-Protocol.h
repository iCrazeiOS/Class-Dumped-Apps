//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Analytics/NSObject-Protocol.h>

@class NSError, NSString, SEGPayload;

@protocol SEGMutableContext <NSObject>
@property(nonatomic) _Bool debug;
@property(retain, nonatomic) NSError *error;
@property(retain, nonatomic) SEGPayload *payload;
@property(retain, nonatomic) NSString *anonymousId;
@property(retain, nonatomic) NSString *userId;
@property(nonatomic) long long eventType;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCPTimeToLive, NSString;

@interface GCPSubscriptionOptionalParams : NSObject
{
    NSString *_messageNamespace;
    GCPTimeToLive *_timeToLive;
    CDUnknownBlockType _statusHandler;
}

@property(copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) GCPTimeToLive *timeToLive; // @synthesize timeToLive=_timeToLive;
@property(retain, nonatomic) NSString *messageNamespace; // @synthesize messageNamespace=_messageNamespace;
- (void).cxx_destruct;
- (id)init;

@end


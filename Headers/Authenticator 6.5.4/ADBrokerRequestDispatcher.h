//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSIDCache;
@protocol ADBrokerRequestControlling;

@interface ADBrokerRequestDispatcher : NSObject
{
    MSIDCache *_requestMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MSIDCache *requestMap; // @synthesize requestMap=_requestMap;
@property(readonly, nonatomic) id <ADBrokerRequestControlling> currentSerialController;
- (void)cancelCurrentSerialRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invokeRequestWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


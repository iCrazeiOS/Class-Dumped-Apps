//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack34SLKIndividualUserDNDInfoLazyLoader : NSObject
{
    // Error parsing type: , name: didFetchDNDInfoByUserId
    // Error parsing type: , name: throttlingFrequency
    // Error parsing type: , name: userIdsToLoad
    // Error parsing type: , name: loadedUserIds
    // Error parsing type: , name: isFetching
    // Error parsing type: , name: queue
    // Error parsing type: , name: throttler
    // Error parsing type: , name: httpManager
}

- (void).cxx_destruct;
- (id)init;
- (void)performLazyLoad;
- (void)lazyLoadUserWith:(id)arg1;
- (void)didResetCache;
- (id)initWithHttpManager:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType didFetchDNDInfoByUserId;

@end


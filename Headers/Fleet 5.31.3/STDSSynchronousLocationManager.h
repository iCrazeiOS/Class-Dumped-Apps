//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface STDSSynchronousLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationFetchQueue;
    NSMutableArray *_pendingLocationUpdateCompletions;
}

+ (_Bool)hasPermissions;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_stopUpdatingLocationAndReportResult:(id)arg1;
- (void)_fetchDeviceLocation:(CDUnknownBlockType)arg1;
- (id)deviceLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapSnapshotter.h>

@class WAMapSnapshotterRequest;

@interface WAMapSnapshotter : MKMapSnapshotter
{
    WAMapSnapshotterRequest *_deferredRequest;
    WAMapSnapshotter *_retainedSelf;
}

- (void).cxx_destruct;
- (void)wa_applicationDidBecomeActive:(id)arg1;
- (void)wa_startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(id)arg1;

@end


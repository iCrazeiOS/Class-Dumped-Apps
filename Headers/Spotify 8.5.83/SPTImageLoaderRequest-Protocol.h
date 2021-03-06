//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL, SPTTimeMeasurementBuilder;
@protocol SPTImageLoaderRemoteCallback, SPTImageLoaderRequestDelegate;

@protocol SPTImageLoaderRequest <NSObject>
- (_Bool)cancelled;
- (void)cancel;
- (void)load;
@property(nonatomic, retain) SPTTimeMeasurementBuilder *timeMeasurement;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate;
@property(nonatomic, readonly) _Bool preventPersistentCaching;
@property(nonatomic, readonly) _Bool preventInMemoryCaching;
@property(nonatomic, readonly) _Bool allowUpscaling;
@property(nonatomic, copy) NSString *persistenceKey;
@property(nonatomic, readonly) id <SPTImageLoaderRemoteCallback> callback;
@property(nonatomic, readonly) id context;
@property(nonatomic, readonly) NSDate *creationDate;
@property(nonatomic, readonly) struct CGSize requestedSize;
@property(nonatomic, readonly) NSURL *URL;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSSet, NSString, NSUUID;

@interface SPTTimeMeasurement : NSObject
{
    // Error parsing type: , name: timeMeasurement
    // Error parsing type: , name: $__lazy_storage_$_points
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSNumber *parentEpochOffset;
@property(nonatomic, readonly) NSUUID *parentMeasurementId;
@property(nonatomic, readonly) NSString *featureId;
@property(nonatomic, copy) NSSet *points;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) NSDictionary *dimensions;
@property(nonatomic, readonly) NSString *category;
@property(nonatomic, readonly) NSUUID *measurementId;

@end


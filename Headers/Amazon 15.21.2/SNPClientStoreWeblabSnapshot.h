//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SNPWeblabSnapshot-Protocol.h"

@class NSString;
@protocol ASKWeblabTreatmentSnapshot;

@interface SNPClientStoreWeblabSnapshot : NSObject <SNPWeblabSnapshot>
{
    NSString *_weblabName;
    NSString *_treatment;
    id <ASKWeblabTreatmentSnapshot> _snapshot;
}

@property(retain, nonatomic) id <ASKWeblabTreatmentSnapshot> snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) NSString *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) NSString *weblabName; // @synthesize weblabName=_weblabName;
- (void).cxx_destruct;
- (void)recordTrigger;
- (id)getTreatmentAndTrigger;
- (id)initWithWeblabTreatmentSnapshot:(id)arg1;

@end


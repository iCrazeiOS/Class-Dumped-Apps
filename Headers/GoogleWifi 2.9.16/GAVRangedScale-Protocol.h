//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVScale-Protocol.h"
#import "NSCopying-Protocol.h"

@protocol GAVExtent, GAVNumericExtent;

@protocol GAVRangedScale <GAVScale, NSCopying>
@property(readonly, nonatomic) _Bool isRangeDescending;
@property(readonly, nonatomic) double rangeBandWidth;
@property(retain, nonatomic) id <GAVNumericExtent> range;
@property(readonly, nonatomic) id <GAVExtent> valuesExtent;
@property(readonly, nonatomic) int rangeWidth;
- (void)addValue:(id)arg1;
@end


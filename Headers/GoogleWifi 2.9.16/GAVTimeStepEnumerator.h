//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class GAVNumericExtent, GAVTimeStepController, NSArray;

@interface GAVTimeStepEnumerator : NSEnumerator
{
    GAVTimeStepController *_timeStepController;
    GAVNumericExtent *_extent;
    long long _tickIncrement;
    double _nextStep;
}

- (void).cxx_destruct;
- (id)nextObject;
@property(readonly, copy) NSArray *allObjects;
- (id)initWithTimeStepper:(id)arg1 extent:(id)arg2 tickIncrement:(long long)arg3;

@end


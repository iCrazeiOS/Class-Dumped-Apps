//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface ASTPinCirclesView : UIView
{
    unsigned long long _maxNumberOfPinDigits;
    NSMutableArray *_pinCircles;
    unsigned long long _numOfEnabledCircles;
}

+ (id)circleView;
@property(nonatomic) unsigned long long numOfEnabledCircles; // @synthesize numOfEnabledCircles=_numOfEnabledCircles;
- (void).cxx_destruct;
- (id)initWithNumberOfPinDigits:(unsigned long long)arg1;

@end


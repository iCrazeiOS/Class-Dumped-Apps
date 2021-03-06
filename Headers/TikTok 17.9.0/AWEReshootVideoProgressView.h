//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEVideoProgressViewProtocol-Protocol.h"

@class HTSVideoProgressView, NSString;

@interface AWEReshootVideoProgressView : UIView <AWEVideoProgressViewProtocol>
{
    HTSVideoProgressView *_progressView;
    UIView *_backgroundView;
    UIView *_container;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) HTSVideoProgressView *progressView; // @synthesize progressView=_progressView;
- (void)removeFromSuperview;
- (void)blinkReshootProgressBarOnce;
- (void)blinkMarkAtCurrentProgress:(_Bool)arg1;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(_Bool)arg1 standardDuration:(double)arg2 maxDuration:(double)arg3;
- (void)updateViewWithTimeSegments:(id)arg1 totalTime:(double)arg2;
- (void)setProgress:(float)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)setReshootTimeFrom:(double)arg1 to:(double)arg2 totalDuration:(double)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


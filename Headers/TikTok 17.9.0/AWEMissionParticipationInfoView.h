//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWETaskModel, NSTimer, UILabel;

@interface AWEMissionParticipationInfoView : UIView
{
    UILabel *_label;
    AWETaskModel *_mission;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AWETaskModel *mission; // @synthesize mission=_mission;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (struct CGSize)intrinsicContentSize;
- (void)timerDidFired:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_updateWithMission:(id)arg1;
- (void)updateWithMission:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


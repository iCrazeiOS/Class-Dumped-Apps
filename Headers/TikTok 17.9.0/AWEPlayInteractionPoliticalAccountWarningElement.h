//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayInteractionBottomElement.h"

@class AWEPoliticalAccountMaskView, AWEPoliticalWarningView;

@interface AWEPlayInteractionPoliticalAccountWarningElement : AWEPlayInteractionBottomElement
{
    AWEPoliticalWarningView *_politicalAccountWarningView;
    AWEPoliticalAccountMaskView *_politicalAccountMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEPoliticalAccountMaskView *politicalAccountMaskView; // @synthesize politicalAccountMaskView=_politicalAccountMaskView;
@property(retain, nonatomic) AWEPoliticalWarningView *politicalAccountWarningView; // @synthesize politicalAccountWarningView=_politicalAccountWarningView;
- (void)viewDidDisposed;
- (void)tapGesture:(id)arg1;
- (void)removePoliticalAccountMaskView;
- (void)showPoliticalAccountMaskView;
- (void)updatePoliticalAccountMaskView;
- (void)hidePoliticalMaskViewNotification;
- (void)updatePoliticalAccountButton;
- (void)setData:(id)arg1;
- (void)viewDidLoad;
- (void)initializeElement;

@end


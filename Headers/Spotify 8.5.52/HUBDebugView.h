//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUBDebugInfoView, HUBDebugViewModel, UISegmentedControl, UITextView;

@interface HUBDebugView : UIView
{
    UISegmentedControl *_segmentedControl;
    UITextView *_textView;
    HUBDebugViewModel *_viewModel;
    HUBDebugInfoView *_infoView;
}

@property(readonly, nonatomic) HUBDebugInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) HUBDebugViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didChangeSelectedSegment:(id)arg1;
- (void)layoutTextView;
- (void)layoutSegmentedControl;
- (void)layoutInfoView;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end


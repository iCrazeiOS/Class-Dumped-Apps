//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLivePopUpView.h"

@class UIButton, UILabel;
@protocol HTSLiveViewHierarchyProvider, IESLiveMTInteractionEntranceProvider, IESLiveMTInteractiveAnchorActions, IESLiveTracker;

@interface IESLiveMTMultiAuidoStartPanel : HTSLivePopUpView
{
    _Bool _didClickStart;
    CDUnknownBlockType _closeCompletion;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_startButton;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveMTInteractionEntranceProvider> _entranceProvider;
    id <IESLiveTracker> _tracker;
    id <IESLiveMTInteractiveAnchorActions> _dispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTInteractiveAnchorActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMTInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) _Bool didClickStart; // @synthesize didClickStart=_didClickStart;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType closeCompletion; // @synthesize closeCompletion=_closeCompletion;
- (void)hideWithDestroy:(_Bool)arg1;
- (void)startMultiAudio;
- (void)layoutUI;
- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect)arg1;

@end


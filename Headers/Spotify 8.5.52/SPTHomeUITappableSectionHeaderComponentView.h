//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTHomeUITappableSectionHeaderView, UITapGestureRecognizer;
@protocol GLUETheme, HUBComponentEventHandler;

@interface SPTHomeUITappableSectionHeaderComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <GLUETheme> _theme;
    SPTHomeUITappableSectionHeaderView *_tappableSectionHeaderView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) SPTHomeUITappableSectionHeaderView *tappableSectionHeaderView; // @synthesize tappableSectionHeaderView=_tappableSectionHeaderView;
- (id)theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)sendSelectionEvent;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end


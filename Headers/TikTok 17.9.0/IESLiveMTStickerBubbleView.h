//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveMTStickerTipBubbleView;
@protocol HTSLiveViewHierarchyProvider;

@interface IESLiveMTStickerBubbleView : UIView
{
    IESLiveMTStickerTipBubbleView *_bubbleView;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) IESLiveMTStickerTipBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didSetAttachingDIContext;
- (id)initWithIconFrame:(struct CGRect)arg1;

@end


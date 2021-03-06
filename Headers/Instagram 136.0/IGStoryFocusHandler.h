//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, IGListAdapter, NSIndexPath, UIView;

@interface IGStoryFocusHandler : NSObject
{
    NSIndexPath *_currentIndexPath;
    IGFeedItem *_focusedStoryItem;
    IGListAdapter *_listAdapter;
    UIView *_focusedStoryView;
}

@property(readonly, nonatomic) UIView *focusedStoryView; // @synthesize focusedStoryView=_focusedStoryView;
- (void).cxx_destruct;
- (void)storyItemDidLoseFocus:(id)arg1;
- (void)storyItemDidGainFocus:(id)arg1;
- (void)storyItemWillGainFocus:(id)arg1;
- (id)initWithListAdapter:(id)arg1;

@end


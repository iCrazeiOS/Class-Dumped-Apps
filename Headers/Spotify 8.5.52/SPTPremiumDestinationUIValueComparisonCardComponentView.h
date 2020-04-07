//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentViewWithChildren-Protocol.h"

@class NSArray, SPTPremiumDestinationUIGLUETheme, UIView;
@protocol HUBComponentViewChildDelegate;

@interface SPTPremiumDestinationUIValueComparisonCardComponentView : HUBComponentView <HUBComponentViewWithChildren, HUBComponentViewObserver>
{
    id <HUBComponentViewChildDelegate> _childDelegate;
    SPTPremiumDestinationUIGLUETheme *_theme;
    NSArray *_childComponentViews;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSArray *childComponentViews; // @synthesize childComponentViews=_childComponentViews;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (id)constraintsForChildComponentView:(id)arg1 previousComponentView:(id)arg2 size:(struct CGSize)arg3;
- (void)removeChildComponentViews:(id)arg1;
- (void)setupChildComponentsForModel:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end


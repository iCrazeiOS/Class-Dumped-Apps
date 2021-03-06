//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTReusableView-Protocol.h"

@class NSString, YTFormattedStringLabel, YTIMusicCardShelfHeaderBasicRenderer;

@interface YTMLightweightMusicCardShelfHeaderView : UIView <YTReusableView>
{
    UIView *_contentView;
    YTFormattedStringLabel *_titleLabel;
    struct UIEdgeInsets _headerInsets;
    YTIMusicCardShelfHeaderBasicRenderer *_basicHeaderRenderer;
}

@property(retain, nonatomic) YTIMusicCardShelfHeaderBasicRenderer *basicHeaderRenderer; // @synthesize basicHeaderRenderer=_basicHeaderRenderer;
- (void).cxx_destruct;
- (void)setHeaderInsets:(struct UIEdgeInsets)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


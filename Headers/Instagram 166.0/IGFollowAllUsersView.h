//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTextButton, UILabel;

@interface IGFollowAllUsersView : UIView
{
    UILabel *_countLabel;
    double _horizontalPadding;
    IGTextButton *_followAllButton;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGTextButton *followAllButton; // @synthesize followAllButton=_followAllButton;
- (void)configureCellWithUserCount:(unsigned long long)arg1 followAllType:(long long)arg2 horizontalPadding:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


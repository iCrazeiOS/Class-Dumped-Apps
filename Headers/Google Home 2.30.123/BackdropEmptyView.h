//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UITextView;

@interface BackdropEmptyView : UIView
{
    UIImageView *_emptyStateImageView;
    long long _state;
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImageView *emptyStateImageView; // @synthesize emptyStateImageView=_emptyStateImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithState:(long long)arg1;

@end


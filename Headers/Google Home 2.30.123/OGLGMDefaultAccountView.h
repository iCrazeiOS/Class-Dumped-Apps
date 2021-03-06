//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCButton;
@protocol OGLAccount, OGLGMDefaultAccountDelegate;

@interface OGLGMDefaultAccountView : UIView
{
    id <OGLAccount> _defaultAccount;
    id <OGLGMDefaultAccountDelegate> _delegate;
    MDCButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <OGLGMDefaultAccountDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <OGLAccount> defaultAccount; // @synthesize defaultAccount=_defaultAccount;
- (void)didTapButton:(id)arg1;
- (double)extraHorizontalPadding;
- (void)maybeSetUpDelegate;
- (void)applyTheme;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


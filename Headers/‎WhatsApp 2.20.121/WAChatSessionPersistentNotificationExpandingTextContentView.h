//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionPersistentNotificationContentView.h"

#import "WAExpandingTextViewControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, WAExpandingTextViewController;

@interface WAChatSessionPersistentNotificationExpandingTextContentView : WAChatSessionPersistentNotificationContentView <WAExpandingTextViewControllerDelegate>
{
    WAExpandingTextViewController *_descriptionController;
    NSLayoutConstraint *_descriptionHeightConstraint;
}

- (void).cxx_destruct;
- (void)expandingTextViewControllerHeightDidChange:(id)arg1;
- (void)expandingTextViewControllerExpandedStateDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)viewWasTapped:(id)arg1;
- (void)parentViewControllerWillBeginInteraction;
- (void)parentViewControllerDidDisappear;
- (void)minimizeDescription;
- (double)preferredDismissButtonHeight;
- (void)fontSizeDidChange:(id)arg1;
@property(copy, nonatomic) NSString *expandPrompt;
- (void)setText:(id)arg1;
- (id)text;
- (void)setEnableLinksInText:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)fontColor;

@end


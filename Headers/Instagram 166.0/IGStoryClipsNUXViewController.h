//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGStoryClipsNUXCreatePageViewControllerDelegate-Protocol.h>

@class IGStoryClipsNUXCreatePageViewController, IGTapButton, IGUserSession, NSString, UIPageControl, UIView;
@protocol IGStoryClipsNUXViewControllerDelegate;

@interface IGStoryClipsNUXViewController : UIViewController <IGStoryClipsNUXCreatePageViewControllerDelegate>
{
    IGTapButton *_dismissButton;
    IGStoryClipsNUXCreatePageViewController *_createPageViewController;
    IGUserSession *_userSession;
    UIView *_backdropView;
    id <IGStoryClipsNUXViewControllerDelegate> _delegate;
    UIPageControl *_pageControl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <IGStoryClipsNUXViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyClipsNUXCreatePageViewControllerDidTapGetStartedButton:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol GAZWebViewPromptRootViewControllerDelegate;

@interface GAZWebViewPromptRootViewController : UIViewController
{
    _Bool _wasPresentingViewController;
    id <GAZWebViewPromptRootViewControllerDelegate> _delegate;
}

+ (id)webViewPromptRootViewControllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <GAZWebViewPromptRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end


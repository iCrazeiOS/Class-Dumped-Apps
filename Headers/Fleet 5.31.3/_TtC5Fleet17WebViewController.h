//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@interface _TtC5Fleet17WebViewController : UIViewController <UIWebViewDelegate>
{
    // Error parsing type: , name: customErrorMessageHandler
    // Error parsing type: , name: content
    // Error parsing type: , name: preferredWebViewClass
    // Error parsing type: , name: loadingStyle
    // Error parsing type: , name: openLinksInSafari
    // Error parsing type: , name: overlayContainerView
    // Error parsing type: , name: loadingState
    // Error parsing type: , name: webView
    // Error parsing type: , name: navigationControlView
    // Error parsing type: , name: loadingViewController
    // Error parsing type: , name: errorViewController
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleForward:(id)arg1;
- (void)handleBack:(id)arg1;
- (void)handleClose:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end


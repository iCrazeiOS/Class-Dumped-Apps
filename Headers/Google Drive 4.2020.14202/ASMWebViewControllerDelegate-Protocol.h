//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ASMWebview, NSString, NSURL;

@protocol ASMWebViewControllerDelegate
- (void)setAccountDisplay:(long long)arg1;
- (void)close;
- (void)setHelpURL:(NSURL *)arg1;
- (void)setTitleText:(NSString *)arg1 withType:(long long)arg2;
- (void)hideAppBarWithDuration:(double)arg1;
- (void)showAppBarWithDuration:(double)arg1;
- (void)openNewWebViewControllerWithURL:(NSURL *)arg1;
- (void)didSwitchToWebView:(ASMWebview *)arg1;
@end


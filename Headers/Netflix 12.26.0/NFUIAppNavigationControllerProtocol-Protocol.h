//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DeepLinkAction, DisplayPageRequest, NFUILolomoRequest, NSString, UIViewController;

@protocol NFUIAppNavigationControllerProtocol <NSObject>
- (void)pushNotificationPage:(UIViewController *)arg1 deepLink:(_Bool)arg2;
- (void)pushViewControllerUsingProfileTabIfDeepLink:(UIViewController *)arg1 deepLink:(_Bool)arg2;
- (void)showExtrasWithDeepLink:(DeepLinkAction *)arg1 autoRemindMe:(_Bool)arg2;
- (void)showMyDownloads;
- (void)showDisplayPage:(DisplayPageRequest *)arg1 completion:(void (^)(void))arg2;
- (void)showAccountView;
- (void)showMoreTab;
- (UIViewController *)showHomeTab;
- (void)showLolomo:(UIViewController *)arg1 deepLink:(_Bool)arg2;
- (void)showSearchWithTerm:(NSString *)arg1 deepLink:(_Bool)arg2;
- (void)showLolomoWithRequest:(NFUILolomoRequest *)arg1 deepLink:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)configureForOffline;
@end


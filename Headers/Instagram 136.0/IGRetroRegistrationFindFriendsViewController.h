//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowButtonAnalyticsDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationFriendsListViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStandardizedNUXInterstitialViewDelegate-Protocol.h>

@class IGRegistrationFriendsListViewController, IGRegistrationNavigationBar, IGStandardizedNUXInterstitialView, IGStandardizedNUXLayoutSpec, IGUserSession, NSString;
@protocol IGFollowButtonAnalyticsDelegate, IGRetroRegistrationFindFriendsViewControllerDelegate;

@interface IGRetroRegistrationFindFriendsViewController : UIViewController <IGCoreTextLinkHandler, IGFollowButtonAnalyticsDelegate, IGAnalyticsModule, IGRegistrationFriendsListViewControllerDelegate, IGStandardizedNUXInterstitialViewDelegate>
{
    IGStandardizedNUXLayoutSpec *_standardizedLayoutSpec;
    _Bool _contactsPermissionEnabled;
    long long _previousFollowCount;
    _Bool _isInFollowingMode;
    id <IGRetroRegistrationFindFriendsViewControllerDelegate> _delegate;
    long long _findFriendsMode;
    IGUserSession *_userSession;
    IGRegistrationFriendsListViewController *_friendsListViewController;
    IGStandardizedNUXInterstitialView *_standardizedFindFriendsView;
    IGRegistrationNavigationBar *_friendsListViewNavBar;
    id <IGFollowButtonAnalyticsDelegate> _analyticsDelegate;
    long long _followCount;
}

@property(nonatomic) _Bool isInFollowingMode; // @synthesize isInFollowingMode=_isInFollowingMode;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) __weak id <IGFollowButtonAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) IGRegistrationNavigationBar *friendsListViewNavBar; // @synthesize friendsListViewNavBar=_friendsListViewNavBar;
@property(retain, nonatomic) IGStandardizedNUXInterstitialView *standardizedFindFriendsView; // @synthesize standardizedFindFriendsView=_standardizedFindFriendsView;
@property(retain, nonatomic) IGRegistrationFriendsListViewController *friendsListViewController; // @synthesize friendsListViewController=_friendsListViewController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long findFriendsMode; // @synthesize findFriendsMode=_findFriendsMode;
@property(nonatomic) __weak id <IGRetroRegistrationFindFriendsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)standardizedNUXInterstitialViewDidTapSkip:(id)arg1;
- (void)standardizedNUXInterstitialViewDidTapNext:(id)arg1;
- (id)_subtitleTextForAddressbookWithIsCopyChangesEnabled:(_Bool)arg1;
- (id)_titleTextForAddressbookWithIsCopyChangesEnabled:(_Bool)arg1;
- (void)_showSkipDialog;
- (id)_eventWithName:(id)arg1 userPk:(id)arg2;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)logFollowButtonTapWithAction:(long long)arg1 targetID:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_setSourceCount:(long long)arg1;
- (void)_removeFriendsListViewController;
- (void)_addFriendsListViewController;
- (void)_displayUserList;
- (void)_nextButtonTapped;
- (void)_connectButtonTapped;
- (void)findFriendsListVC:(id)arg1 didFailToLoadUsersWithError:(id)arg2;
- (void)findFriendsListVC:(id)arg1 didLoadUsers:(id)arg2;
- (void)findFriendsListVC:(id)arg1 didFollowTopAccountsWithCount:(long long)arg2;
- (void)findFriendsListVCDidUnfollow:(id)arg1;
- (void)findFriendsListVCDidFollow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cancelUserFetch;
- (void)showUserListWithRequest:(id)arg1;
- (id)initWithFindFriendsMode:(long long)arg1 userSession:(id)arg2 standardizedLayoutSpec:(id)arg3 contactsPermissionEnabled:(_Bool)arg4 previousFollowCount:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


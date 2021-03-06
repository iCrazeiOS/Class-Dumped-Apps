//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SGIUserDataModel-Protocol.h"

@class NSString, XBXUser;
@protocol SGIUserDataModelDelegate;

@interface SGStubUserDataModel : NSObject <SGIUserDataModel>
{
    _Bool gamepassSubscriptionIsActive;
    _Bool subscriptionFetchFailed;
    _Bool subscriptionIsExpiringSoon;
    _Bool _isLoggedIn;
    NSString *gamepassSubscriptionStatus;
    NSString *goldSubscriptionStatus;
    id <SGIUserDataModelDelegate> _delegateInternal;
    XBXUser *_user;
}

@property(retain, nonatomic) XBXUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) __weak id <SGIUserDataModelDelegate> delegateInternal; // @synthesize delegateInternal=_delegateInternal;
@property(nonatomic) _Bool subscriptionIsExpiringSoon; // @synthesize subscriptionIsExpiringSoon;
@property(readonly, nonatomic) _Bool subscriptionFetchFailed; // @synthesize subscriptionFetchFailed;
@property(copy, nonatomic) NSString *goldSubscriptionStatus; // @synthesize goldSubscriptionStatus;
@property(copy, nonatomic) NSString *gamepassSubscriptionStatus; // @synthesize gamepassSubscriptionStatus;
@property(nonatomic) _Bool gamepassSubscriptionIsActive; // @synthesize gamepassSubscriptionIsActive;
- (void).cxx_destruct;
- (void)updateSubscriptionStatus:(id)arg1;
- (void)fetchSubscriptionStatus;
- (void)updateUserRealName:(id)arg1;
- (void)updateUserPrivacySettings:(id)arg1;
- (void)onAppEnteredForeground;
- (void)onAppEnteredBackground;
- (void)onUserLogout;
- (void)setTokenProvider:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (long long)state;
- (void)updateGamertag:(id)arg1;
- (void)updateUserPreferredColorsURL:(id)arg1;
- (void)refresh;
- (void)updateUserPreferredColors:(id)arg1;
- (void)updateUserProfile:(id)arg1;
- (_Bool)isCurrentUserXuid:(id)arg1;
- (_Bool)isCurrentUser:(id)arg1;
@property(readonly, nonatomic) XBXUser *currentUser;
- (void)setDelegate:(id)arg1;
- (void)initialize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


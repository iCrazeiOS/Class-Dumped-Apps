//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SlackCoreData/NSObject-Protocol.h>

@class NSString, SLKUserNamePair, _TtC13SlackCoreData13SLKUserStatus;
@protocol SLKWorkspaceGenerics, _TtP15SlackFoundation23SLKPrefManagerInterface_;

@protocol SLKUserExtendedModel <NSObject>
- (NSString *)displayNameOrYouWithPreferencesManager:(id <_TtP15SlackFoundation23SLKPrefManagerInterface_>)arg1;
@property(nonatomic, readonly) id <SLKWorkspaceGenerics> externalOrgWorkspace;
@property(nonatomic, readonly) long long userType;
@property(nonatomic, readonly) _Bool isHuman;
@property(nonatomic, readonly) _Bool isGuest;
@property(nonatomic, readonly) _Bool isStatusSet;
@property(nonatomic, readonly) _TtC13SlackCoreData13SLKUserStatus *status;
@property(nonatomic, readonly) NSString *preferredDisplayName;
@property(nonatomic, readonly) NSString *displayNameForMessageMention;
- (NSString *)displayNameWithPreferencesManager:(id <_TtP15SlackFoundation23SLKPrefManagerInterface_>)arg1;
- (NSString *)nameWithAtSignWithPreferencesManager:(id <_TtP15SlackFoundation23SLKPrefManagerInterface_>)arg1;
@property(nonatomic, readonly) _Bool isUserWithPartialModel;
@property(nonatomic, readonly) NSString *appId;
- (SLKUserNamePair *)displayNamePairWithPreferencesManager:(id <_TtP15SlackFoundation23SLKPrefManagerInterface_>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileInAppMessage_InAppMessageCtaEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileInAppMessage_InAppMessageCtaEventFactoryImplementation : NSObject <SPTUBIMobileInAppMessage_InAppMessageCtaEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitEnableNotificationCategoryInChannelWithNotificationChannelToBeEnabled:(unsigned long long)arg1 notificationCategoryToBeEnabled:(unsigned long long)arg2;
- (id)hitRequestOsPermissionWithPermissionToBeRequested:(unsigned long long)arg1;
- (id)hitSendEmailVerification;
- (id)hitNavigateToWebviewUriWithDestination:(id)arg1;
- (id)hitNavigateToExternalUriWithDestination:(id)arg1;
- (id)hitOpenOsSettings;
- (id)hitUiHide;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)hitUnfollowWithItemToBeUnfollowed:(id)arg1;
- (id)hitFollowWithItemToBeFollowed:(id)arg1;
- (id)hitLikeWithItemToBeLiked:(id)arg1;
- (id)hitDislikeWithItemToBeDisliked:(id)arg1;
- (id)hitCreatePlaylist;
- (id)stringFromNotificationCategoryToBeEnabled:(unsigned long long)arg1;
- (id)stringFromNotificationChannelToBeEnabled:(unsigned long long)arg1;
- (id)stringFromPermissionToBeRequested:(unsigned long long)arg1;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFeedItemInvalidation : NSObject
{
}

+ (void)markSponsoredFeedItemAsNotVisibleIfInvalid:(id)arg1;
+ (id)_reasonForUserHidingSponsoredFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (_Bool)hasSelectedReasonForInvalidSponsoredFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (_Bool)_isAlreadyInstalledAppAds:(id)arg1;
+ (id)reasonForInvalidSponsoredFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (_Bool)isSponsoredFeedItemWaitingForHideReason:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (id)_dictionaryForDismissFeedItems;
+ (void)markAllDismissedFeedItemsAsNotVisible;
+ (_Bool)isReportedFeedItemForPk:(id)arg1;
+ (_Bool)isHackedAccountFromFeedReportedWithFeedItemForPK:(id)arg1;
+ (void)hideHackedAccountFromFeedItemWithPK:(id)arg1;
+ (void)undoFeedItemWithPK:(id)arg1;
+ (void)markFeedItemPKAsNotVisibleIfReported:(id)arg1;
+ (void)markFeedItemPKAsNotVisibleIfInvalid:(id)arg1;
+ (_Bool)isFalseInformationReportedFeedItemForPK:(id)arg1;
+ (_Bool)isInappropriateReportedFeedItemForPK:(id)arg1;
+ (_Bool)isSpamReportedFeedItemForPK:(id)arg1;
+ (_Bool)isDismissFeedItemForPK:(id)arg1;
+ (void)dismissFeedItemWithPK:(id)arg1;
+ (void)hideFalseInformationFeedItemWithPK:(id)arg1;
+ (void)hideInappropriateFeedItemWithPK:(id)arg1;
+ (void)hideSpamFeedItemWithPK:(id)arg1;
+ (_Bool)shouldFeedItemDisplay:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (_Bool)isFeedItemInvalid:(id)arg1 sponsoredInfoProvider:(id)arg2;
+ (_Bool)shouldSponsoredFeedItemDisplay:(id)arg1;

@end


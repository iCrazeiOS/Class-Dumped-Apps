//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEIMI18NSharePanelUserFetcher : NSObject
{
}

+ (void)preventEmptyShareList:(id)arg1;
+ (void)p_tryAddUser:(id)arg1 toArrM:(id)arg2 filterSetM:(id)arg3;
+ (void)p_fetchSharePanelUserListSortedBySocial:(CDUnknownBlockType)arg1 needAppendFollowedUser:(_Bool)arg2 recentContactArray:(id)arg3;
+ (void)p_fetchSharePanelUserList:(CDUnknownBlockType)arg1 needAppendFollowedUser:(_Bool)arg2 recentContactArray:(id)arg3;
+ (id)p_recentChatUserList;
+ (void)fetchOldCrossSharePanelUserList:(CDUnknownBlockType)arg1;
+ (void)fetchRecommendUserList:(CDUnknownBlockType)arg1;

@end


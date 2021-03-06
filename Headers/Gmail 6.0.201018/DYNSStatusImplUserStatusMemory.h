//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, DYNSCommonDynamiteClock, JavaUtilMap;

@interface DYNSStatusImplUserStatusMemory : NSObject
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    id lock_;
    id <JavaUtilMap> userIdToPresenceSnapshot_;
}

- (void)dealloc;
- (void)clearExpiredUserStatus;
- (_Bool)insertOrUpdateUserStatusForUserWithDYNSCommonUserId:(id)arg1 withDYNSDataModelsUserStatus:(id)arg2;
- (void)insertOrUpdateCustomStatusForUsersWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (void)insertOrUpdateCustomStatusForUserWithDYNSCommonUserId:(id)arg1 withDYNSDataModelsCustomStatus:(id)arg2;
- (void)insertOrUpdateDndExpiryForUsersWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (void)insertOrUpdateDndExpiryForUserWithDYNSCommonUserId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (void)insertOrUpdateDndStateForUsersWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (void)insertOrUpdateDndStateForUserWithDYNSCommonUserId:(id)arg1 withDYNSDataModelsDndStatus_State:(id)arg2;
- (void)insertOrUpdatePresenceForUsersWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (void)insertOrUpdatePresenceForUserWithDYNSCommonUserId:(id)arg1 withDYNSModelsCommonPresenceState:(id)arg2;
- (id)getUserStatusMapWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)getUserCustomStatusWithDYNSCommonUserId:(id)arg1;
- (id)getUserDndExpiryMicrosWithDYNSCommonUserId:(id)arg1;
- (id)getUserDndStateWithDYNSCommonUserId:(id)arg1;
- (id)getUserPresenceWithDYNSCommonUserId:(id)arg1;

@end


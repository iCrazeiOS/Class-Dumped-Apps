//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromise, DYNSCommonGroupId, DYNSCommonGroupType, DYNSCommonMembershipState, NSString;
@protocol JavaUtilList;

@protocol DYNSStorageSchemaGroupMembershipDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getMembershipStatesWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countInvitedMembersWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countJoinedMembersWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)upsertGroupMembershipsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupMemberships;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)filterNonExistentUserIdsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupMembershipsWithJavaUtilList:(id <JavaUtilList>)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupMembershipsByGroupIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupIdsWithJavaUtilList:(id <JavaUtilList>)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupIdsWithJavaUtilList:(id <JavaUtilList>)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2 withDYNSCommonGroupType:(DYNSCommonGroupType *)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupMembershipsWithNSString:(NSString *)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getGroupMembershipWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withNSString:(NSString *)arg2 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMembershipsByGroupIdAndMemberIdWithJavaUtilList:(id <JavaUtilList>)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMembershipWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withNSString:(NSString *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMembershipsByGroupIdWithJavaUtilList:(id <JavaUtilList>)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMembershipsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMembershipsWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteGroupMemberships;
@end


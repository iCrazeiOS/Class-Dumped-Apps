//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromise, DYNSCommonGroupId, DYNSCommonMembershipState, DYNSStorageSchemaUserContextIdRow, NSString;
@protocol JavaUtilList;

@protocol DYNSStorageSchemaUserDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)upsertWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)markAsNeedingSyncWithDYNSStorageSchemaUserContextIdRow:(DYNSStorageSchemaUserContextIdRow *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteAll;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)delete__WithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)filterUserContextIdsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersByUserContextIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getHumanPartnerIdToEmailAddressIds;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getHumanDmPartnerIdToEmailAddressAndDmIds;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getOutdatedNonMembersWithNSString:(NSString *)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserIdsWithMembershipsButOnlyPartialProfileWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserMembershipsWithPartialProfile;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserIdsWithMembershipsButNoProfileWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserMembershipsWithoutUser;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getAllUsers;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getAllUsersNeedingSyncWithLong:(long long)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersNeedingSyncWithJavaUtilList:(id <JavaUtilList>)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersNeedingSync;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withDYNSCommonMembershipState:(DYNSCommonMembershipState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserWithDYNSStorageSchemaUserContextIdRow:(DYNSStorageSchemaUserContextIdRow *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUsersWithJavaUtilList:(id <JavaUtilList>)arg1;
@end


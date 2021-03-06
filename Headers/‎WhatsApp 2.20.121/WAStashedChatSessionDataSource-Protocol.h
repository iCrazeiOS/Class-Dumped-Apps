//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSSet, NSString, WAChatJID, WAChatSession, WAGroupJID, WAStashedGroupInfo, WAUserJID;
@protocol WAServerDate;

@protocol WAStashedChatSessionDataSource
- (void)cacheValuesWithWAChatSession:(WAChatSession *)arg1;
- (void)performWithChatStorageContextUsingBlockAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (_Bool)isArchivedForChatSessionWithJID:(WAChatJID *)arg1;
- (int)unreadCountForChatSessionWithJID:(WAChatJID *)arg1;
- (NSString *)lastMessageUniqueKeyForChatSessionWithJID:(WAChatJID *)arg1;
- (NSDate<WAServerDate> *)lastMessageDateForChatSessionWithJID:(WAChatJID *)arg1;
- (int)ephemeralChatExpirationForChatSessionWithJID:(WAChatJID *)arg1;
- (long long)contactEphemeralSettingTimestampForChatSessionWithJID:(WAChatJID *)arg1;
- (_Bool)isHiddenForChatSessionWithJID:(WAChatJID *)arg1;
- (NSString *)contactIdentifierForUserJID:(WAUserJID *)arg1;
- (NSString *)contactIdentifierForChatSessionWithJID:(WAChatJID *)arg1;
- (int)flagsForChatSessionWithJID:(WAChatJID *)arg1;
- (int)saveToCameraRollSettingForChatSessionWithJID:(WAChatJID *)arg1;
- (NSString *)subjectTextForChatSessionWithJID:(WAChatJID *)arg1;
- (NSString *)displayNameForChatSessionWithJID:(WAChatJID *)arg1;
- (WAStashedGroupInfo *)groupInfoForChatSessionWithJID:(WAGroupJID *)arg1;
- (NSSet *)activeGroupMembersForChatSessionWithJID:(WAChatJID *)arg1;
- (_Bool)existsForChatSessionWithJID:(WAChatJID *)arg1;
@end


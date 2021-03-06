//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GUNSNotificationsList, NSString, NSTimer, PHSBlockChannel;
@protocol GDKContactAvatarFetching, GDKContactManagerAPIClient, GDKFileFetcher, GUNSNotificationsService;

@interface GDAGUNSNotificationsService : NSObject
{
    _Bool _handleResourceKeys;
    _Bool _initialFetchCompleted;
    NSString *_userID;
    id <GUNSNotificationsService> _gunsNotificationsService;
    id <GDKContactManagerAPIClient> _contactManager;
    id <GDKContactAvatarFetching> _avatarFetcher;
    id <GDKFileFetcher> _fileFetcher;
    NSTimer *_pollTimer;
    PHSBlockChannel *_notificationsChannel;
    GUNSNotificationsList *_notificationsList;
}

+ (id)localizedStringForRequestAccessType:(int)arg1;
- (void).cxx_destruct;
@property(retain) GUNSNotificationsList *notificationsList; // @synthesize notificationsList=_notificationsList;
@property(retain, nonatomic) PHSBlockChannel *notificationsChannel; // @synthesize notificationsChannel=_notificationsChannel;
@property(nonatomic) _Bool initialFetchCompleted; // @synthesize initialFetchCompleted=_initialFetchCompleted;
@property(retain, nonatomic) NSTimer *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(readonly, nonatomic) _Bool handleResourceKeys; // @synthesize handleResourceKeys=_handleResourceKeys;
@property(retain, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(retain, nonatomic) id <GDKContactAvatarFetching> avatarFetcher; // @synthesize avatarFetcher=_avatarFetcher;
@property(retain, nonatomic) id <GDKContactManagerAPIClient> contactManager; // @synthesize contactManager=_contactManager;
@property(retain, nonatomic) id <GUNSNotificationsService> gunsNotificationsService; // @synthesize gunsNotificationsService=_gunsNotificationsService;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)timestampForNotification:(id)arg1;
- (void)notificationCVOForCommentPayload:(id)arg1 heading:(id)arg2 timestamp:(id)arg3 notificationKey:(id)arg4 displayString:(id)arg5 commentContext:(id)arg6 message:(id)arg7 messages:(id)arg8 commenters:(id)arg9 avatarURLStrings:(id)arg10 read:(_Bool)arg11 showReplyContext:(_Bool)arg12 fetchedContacts:(id)arg13 completion:(CDUnknownBlockType)arg14;
- (void)notificationCVOForCommentPayloads:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 read:(_Bool)arg5 fetchedContacts:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)notificationCVOForCommentPayloads:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 read:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationCVOForCommentPayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 read:(_Bool)arg5 starterEmail:(id)arg6 fetchedContacts:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)notificationCVOForCommentPayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 read:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationCVOForSharePayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 isRead:(_Bool)arg4 hasMultiple:(_Bool)arg5 actorAvatarURL:(id)arg6 actorEmail:(id)arg7 fetchedContacts:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)notificationCVOForSharePayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 isRead:(_Bool)arg5 hasMultiple:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)notificationCVOForReqAccessPayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 read:(_Bool)arg4 actorAvatarURL:(id)arg5 actorEmail:(id)arg6 proxyEmail:(id)arg7 fetchedContacts:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)notificationCVOForReqAccessPayload:(id)arg1 timestamp:(id)arg2 notificationKey:(id)arg3 avatarURLStrings:(id)arg4 read:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)profileImageURLStringsFromNotification:(id)arg1;
- (void)cvosForNotifications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchActorAvatarWithCVO:(id)arg1 fetcher:(id)arg2;
- (void)refreshNotificationsWithTrigger:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshNotificationsFromUserActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshNotificationsFromPoll;
- (id)notifications;
- (void)refreshNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markNotificationsAsRead;
- (void)notificationCVOsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchNotificationWithKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long unreadNotificationCount;
- (void)dealloc;
- (id)initWithUserID:(id)arg1 contactManager:(id)arg2 avatarFetcher:(id)arg3 fileFetcher:(id)arg4 handleResourceKeys:(_Bool)arg5;

@end


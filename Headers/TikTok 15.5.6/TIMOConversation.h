//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMOModel.h"

#import "TIMMessageStoreChangesObserver-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSOrderedSet, NSString;
@protocol TIMConversationModelProtocol, TIMOConversationParticipant;

@interface TIMOConversation : TIMOModel <TIMMessageStoreChangesObserver>
{
    _Bool _isCurrentUserAParticipant;
    _Bool _hasUnreadMention;
    _Bool _mute;
    _Bool _stickOnTop;
    _Bool _favorited;
    int _belongingInbox;
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _status;
    NSNumber *_shortID;
    NSOrderedSet *_someParticipants;
    unsigned long long _participantsCount;
    long long _ownerID;
    id <TIMOConversationParticipant> _userInfo;
    NSDate *_updatedAt;
    NSString *_lastMessageIdentifier;
    NSString *_name;
    NSString *_desc;
    NSString *_icon;
    NSString *_notice;
    unsigned long long _unreadCount;
    NSString *_oldestUnreadMentionMessageIdentifier;
    NSDate *_draftAt;
    NSString *_draftText;
    NSDictionary *_syncedExt;
    NSDictionary *_sharedSyncedExt;
    NSDictionary *_localExt;
    NSDictionary *_sharedSyncedExtInternal;
    NSDictionary *_syncedExtInternal;
    id <TIMConversationModelProtocol> _internalModel;
    NSString *_observerID;
}

+ (void)markAllConversationsAsReadWithMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)enterConversation:(id)arg1 conversationType:(unsigned long long)arg2 shortID:(long long)arg3 inbox:(int)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)createConversationWithOtherParticipants:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)createConversationWithOtherParticipants:(id)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)instanceWithIdentifier:(id)arg1;
@property(retain) NSString *observerID; // @synthesize observerID=_observerID;
@property(retain) id <TIMConversationModelProtocol> internalModel; // @synthesize internalModel=_internalModel;
@property(retain) NSDictionary *syncedExtInternal; // @synthesize syncedExtInternal=_syncedExtInternal;
@property(retain) NSDictionary *sharedSyncedExtInternal; // @synthesize sharedSyncedExtInternal=_sharedSyncedExtInternal;
@property(getter=isFavorited) _Bool favorited; // @synthesize favorited=_favorited;
@property _Bool stickOnTop; // @synthesize stickOnTop=_stickOnTop;
@property _Bool mute; // @synthesize mute=_mute;
@property(retain) NSDictionary *localExt; // @synthesize localExt=_localExt;
@property(retain) NSDictionary *sharedSyncedExt; // @synthesize sharedSyncedExt=_sharedSyncedExt;
@property(retain) NSDictionary *syncedExt; // @synthesize syncedExt=_syncedExt;
@property(retain) NSString *draftText; // @synthesize draftText=_draftText;
@property(retain) NSDate *draftAt; // @synthesize draftAt=_draftAt;
@property(copy) NSString *oldestUnreadMentionMessageIdentifier; // @synthesize oldestUnreadMentionMessageIdentifier=_oldestUnreadMentionMessageIdentifier;
@property _Bool hasUnreadMention; // @synthesize hasUnreadMention=_hasUnreadMention;
@property unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain) NSString *notice; // @synthesize notice=_notice;
@property(retain) NSString *icon; // @synthesize icon=_icon;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *lastMessageIdentifier; // @synthesize lastMessageIdentifier=_lastMessageIdentifier;
@property(retain) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain) id <TIMOConversationParticipant> userInfo; // @synthesize userInfo=_userInfo;
@property long long ownerID; // @synthesize ownerID=_ownerID;
@property unsigned long long participantsCount; // @synthesize participantsCount=_participantsCount;
@property _Bool isCurrentUserAParticipant; // @synthesize isCurrentUserAParticipant=_isCurrentUserAParticipant;
@property(retain) NSOrderedSet *someParticipants; // @synthesize someParticipants=_someParticipants;
@property(retain) NSNumber *shortID; // @synthesize shortID=_shortID;
@property int belongingInbox; // @synthesize belongingInbox=_belongingInbox;
@property unsigned long long status; // @synthesize status=_status;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)onConversationCleared:(id)arg1;
- (void)onConversationsDeleted:(id)arg1;
- (void)onConversationsUpdated:(id)arg1;
- (void)onConversationsCreated:(id)arg1;
- (void)onMessagesDeleted:(id)arg1 belongingConversationMap:(id)arg2;
- (void)onMessagesUpdated:(id)arg1 belongingConversationMap:(id)arg2;
- (void)onMessagesCreated:(id)arg1 belongingConversationMap:(id)arg2 reason:(id)arg3;
@property(readonly) id <TIMOConversationParticipant> owner;
- (void)forceRefreshFromDB;
- (void)setDesc:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNotice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFavorite:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStickOnTop:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMute:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceSetUpdatedAt:(id)arg1;
- (void)updateCurrentIfNeeded:(CDUnknownBlockType)arg1;
- (void)updateIfNeeded;
- (void)setSharedSyncedExtWithEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSyncedExtWithEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLocalExtWithKeys:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLocalExtEntry:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)participantModelFromPBParticipant:(id)arg1;
- (void)applyAttributesFromModel:(id)arg1;
- (void)markAsUnreadWithMode:(unsigned long long)arg1 unreadCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAllMessagesBeforeMessage:(id)arg1 asReadWithMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllMessagesWithMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteWithMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDraft:(id)arg1;
- (void)setAliasForParticipant:(long long)arg1 alias:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRoleForParticipant:(long long)arg1 role:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)leaveWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeParticipants:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addParticipants:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendUserAction:(long long)arg1 extra:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resendMessage:(id)arg1;
- (id)sendMessage:(id)arg1 isSaveDB:(_Bool)arg2 error:(id *)arg3;
- (id)sendMessage:(id)arg1 error:(id *)arg2;
- (long long)__nextOldClientMsgId;
- (void)setUpWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;
- (long long)awe_convertToChatModelType;
- (id)awe_convertToChatModel;
- (_Bool)aweim_shouldDisplay;
- (id)aweim_lastDisplayStrongTipsId;
- (void)aweim_setLastDisplayStrongTipsId:(id)arg1;
- (long long)aweim_lastDisplayStrongTipsTime;
- (void)aweim_setLastDisplayStrongTipsTime:(long long)arg1;
- (long long)aweim_lastReadGroupNoticeTime;
- (void)aweim_setLastReadGroupNoticeTime:(long long)arg1;
- (id)aweim_noticeSettingDict;
- (void)aweim_setNoticeSettingDict:(id)arg1;
- (_Bool)aweim_isAuthorService;
- (void)aweim_setIsAuthorService:(_Bool)arg1;
- (_Bool)aweim_inAppPushStateOpened;
- (void)aweim_setInAppPushState:(_Bool)arg1;
- (double)aweim_sameGroupLastShowTimestamp;
- (void)aweim_setSameGroupLastShowTimestamp:(double)arg1;
- (long long)aweim_sameGroupShowCount;
- (void)aweim_setSameGroupShowCount:(long long)arg1;
- (_Bool)aweim_isAlreadyShowGreetMsg;
- (void)aweim_syncAlreadyShowGreetMsgIfNeed;
- (void)aweim_setSyncedAlreadyShowGreetMsg;
- (void)aweim_setLocalAlreadyShowGreetMsg;
- (void)aweim_setAlreadyShowGreetMsg;
- (_Bool)aweim_showedCloseInnerPushTips;
- (void)aweim_setShowedCloseInnerPushTips;
- (_Bool)aweim_visibleEvenNoMessagesFlag;
- (void)aweim_setVisibleEvenNoMessagesFlag:(_Bool)arg1;
- (_Bool)aweim_isCurrentGroupIsBanned;
@property(nonatomic) _Bool im_businessChat;
- (_Bool)isNameChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


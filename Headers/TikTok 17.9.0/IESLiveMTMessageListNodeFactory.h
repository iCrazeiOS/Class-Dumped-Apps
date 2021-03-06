//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, HTSLiveMessageListThread, IESLiveMTBadgeDownloader, IESLiveMTBadgeFactory, IESLiveMTEmojiTextParser, LiveRoomModel, NSParagraphStyle;
@protocol HTSLiveDetailRouter, IESLiveMTCommentRouter, IESLiveMTGiftManagerService, IESLiveMTInternalRouter, IESLiveMTTemplateProvider, IESLiveMTUserPreviewRouter, IESLiveRoomService, IESLiveSettings, IESLiveUserService, IESLiveWebImageService, OS_dispatch_queue;

@interface IESLiveMTMessageListNodeFactory : NSObject
{
    _Bool _enableUseThread;
    _Bool _enableMutiLines;
    _Bool _messageStyleSwitch;
    CDUnknownBlockType _onNodeCreated;
    CDUnknownBlockType _onNodesCreated;
    NSObject<OS_dispatch_queue> *_messageProcessQueue;
    HTSLiveMessageListThread *_messageProcessThread;
    LiveRoomModel *_roomModel;
    HTSEventContext *_eventContext;
    double _messageLayoutWidth;
    long long _followStatus;
    NSParagraphStyle *_paragraphStyle;
    IESLiveMTBadgeDownloader *_badgeDownloader;
    IESLiveMTBadgeFactory *_badgeFactory;
    IESLiveMTEmojiTextParser *_emoticonParser;
    id <IESLiveSettings> _settings;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveWebImageService> _webImageService;
    id <IESLiveMTInternalRouter> _internalRouter;
    id <IESLiveUserService> _userService;
    id <IESLiveMTTemplateProvider> _templateProvider;
    id <IESLiveRoomService> _roomService;
    id <IESLiveMTCommentRouter> _commentRouter;
    id <IESLiveMTUserPreviewRouter> _userPreviewRouter;
    id <IESLiveMTGiftManagerService> _giftManagerService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTGiftManagerService> giftManagerService; // @synthesize giftManagerService=_giftManagerService;
@property(retain, nonatomic) id <IESLiveMTUserPreviewRouter> userPreviewRouter; // @synthesize userPreviewRouter=_userPreviewRouter;
@property(retain, nonatomic) id <IESLiveMTCommentRouter> commentRouter; // @synthesize commentRouter=_commentRouter;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveMTTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveMTInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IESLiveMTEmojiTextParser *emoticonParser; // @synthesize emoticonParser=_emoticonParser;
@property(retain, nonatomic) IESLiveMTBadgeFactory *badgeFactory; // @synthesize badgeFactory=_badgeFactory;
@property(retain, nonatomic) IESLiveMTBadgeDownloader *badgeDownloader; // @synthesize badgeDownloader=_badgeDownloader;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(nonatomic) _Bool messageStyleSwitch; // @synthesize messageStyleSwitch=_messageStyleSwitch;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) double messageLayoutWidth; // @synthesize messageLayoutWidth=_messageLayoutWidth;
@property(nonatomic) _Bool enableMutiLines; // @synthesize enableMutiLines=_enableMutiLines;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) HTSLiveMessageListThread *messageProcessThread; // @synthesize messageProcessThread=_messageProcessThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue; // @synthesize messageProcessQueue=_messageProcessQueue;
@property(nonatomic) _Bool enableUseThread; // @synthesize enableUseThread=_enableUseThread;
@property(copy, nonatomic) CDUnknownBlockType onNodesCreated; // @synthesize onNodesCreated=_onNodesCreated;
@property(copy, nonatomic) CDUnknownBlockType onNodeCreated; // @synthesize onNodeCreated=_onNodeCreated;
- (double)fontSizeOfMessageList;
- (_Bool)isAnchor;
- (id)commentsIconList:(id)arg1;
- (id)giftIconWithMessageGiftId:(long long)arg1;
- (id)getDiggImageWithColorString:(long long)arg1;
- (void)downloadIconsWith:(id)arg1 message:(id)arg2;
- (_Bool)isGiftImageExistWithGiftId:(long long)arg1 message:(id)arg2;
- (_Bool)needLoadOtherImagesInBackWith:(id)arg1;
- (_Bool)needLoadBadgeImagesInBackWith:(id)arg1;
- (void)resetMessageNode:(id)arg1 useDisplayText:(_Bool)arg2;
- (void)reCalculateHeight:(id)arg1;
- (void)__reloadMessageNodes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadMessageNodes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createNodeWith:(id)arg1 needImage:(_Bool)arg2;
- (id)createNodeWith:(id)arg1;
- (id)messageNodeStrategyWithMessage:(id)arg1;
- (id)strategyWithMessage:(id)arg1;
- (void)__createNodeAsynchronously:(id)arg1;
- (void)createNodeAsynchronously:(id)arg1;
- (void)p_createNodesAsync:(id)arg1;
- (void)createNodes:(id)arg1;
- (id)initWithDIContext:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTChannelEditServiceObserver-Protocol.h"
#import "YTColorObserver-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTPhotoUploadObserverDelegate-Protocol.h"
#import "YTReelResumeDataStoreObserver-Protocol.h"
#import "YTReelWatchEndpointsResponderProvider-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTScrollToModelProtocol-Protocol.h"
#import "YTSetSettingServiceObserver-Protocol.h"
#import "YTSponsorButtonDelegate-Protocol.h"
#import "YTSubscriptionServiceObserver-Protocol.h"
#import "YTUploadProgressObserver-Protocol.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader-Protocol.h"

@class GIMMe, NSDate, NSMutableArray, NSString, YTIC4TabbedHeaderRenderer, YTIChannelReelAvatarRenderer, YTPhotoUploadController, YTSubscribeSwitchController, YTThumbnailController, YTUploadTaskController;
@protocol YTInnerTubeUIService, YTResponder;

@interface YTC4TabbedHeaderViewController : UIViewController <YTChannelEditServiceObserver, YTFormattedStringLabelDelegate, YTPhotoUploadObserverDelegate, YTReelResumeDataStoreObserver, YTSetSettingServiceObserver, YTSponsorButtonDelegate, YTSubscriptionServiceObserver, YTVariableHeightHeaderViewControllerAttachedHeader, YTUploadProgressObserver, YTReelWatchEndpointsResponderProvider, YTResponseViewController, YTScrollToModelProtocol, YTColorObserver>
{
    id <YTInnerTubeUIService> _service;
    YTPhotoUploadController *_photoUploadController;
    YTIC4TabbedHeaderRenderer *_renderer;
    YTIChannelReelAvatarRenderer *_reelAvatarRenderer;
    YTUploadTaskController *_uploadTaskController;
    YTThumbnailController *_avatarController;
    YTThumbnailController *_bannerController;
    YTSubscribeSwitchController *_subscribeSwitchController;
    NSDate *_createdDate;
    NSMutableArray *_pendingReelUploads;
    _Bool _needsRefresh;
    _Bool _viewAppeared;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)uploadStatusDidChangeWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)userDidFinishReel;
- (id)viewForEndpoint;
- (id)createdDate;
- (id)reelWatchEndpoints;
- (void)didTapSponsorButton:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didEndBannerPhotoUploadWithStatus:(long long)arg1 image:(id)arg2;
- (void)didEndAvatarPhotoUploadWithStatus:(long long)arg1 image:(id)arg2;
- (void)refreshPageIfNeeded;
- (void)setNeedsRefresh;
- (id)bannerThumbnail;
- (void)didTapAvatar:(id)arg1;
- (void)didTapNavigationButton:(id)arg1;
- (void)didTapChannelSettings:(id)arg1;
- (void)didTapBanner:(id)arg1;
- (void)didTapDescription;
- (id)tabbedHeaderView;
- (void)showStoriesHint;
- (void)showSponsorButtonHint;
- (void)setUpReelAvatar:(id)arg1;
- (id)reelAvatarShowPendingUploadsCommand;
- (void)didSetSetting;
- (void)didEditChannelName:(id)arg1 givenName:(id)arg2 familyName:(id)arg3;
- (void)didEditChannelDescription:(id)arg1;
- (void)themeColorDidChange:(id)arg1 titleColor:(id)arg2 iconColor:(id)arg3 animated:(_Bool)arg4;
- (void)willMakeRequest:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (_Bool)isAttachedToPage;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESStaticContainer.h"

#import "ACCBaseServiceContainerCommon-Protocol.h"
#import "ACCBaseServiceContainerExtension-Protocol.h"
#import "ACCEditServiceContainerProtocol-Protocol.h"
#import "ACCRecordServiceContainerProtocol-Protocol.h"

@class NSString;

@interface AWEBaseServiceContainer : IESStaticContainer <ACCEditServiceContainerProtocol, ACCRecordServiceContainerProtocol, ACCBaseServiceContainerCommon, ACCBaseServiceContainerExtension>
{
}

+ (id)sharedContainer;
- (id)provideSingletonACCResourceBundleProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCSettingsProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCENVProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCABTestProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCVideoConfigProtocolWithArguments:(id)arg1;
- (id)provideACCSelectAlbumAssetsProtocolWithArguments:(id)arg1;
- (id)provideACCWebViewProtocolWithArguments:(id)arg1;
- (id)provideACCVideoPreloadProtocolWithArguments:(id)arg1;
- (id)provideACCNetServiceProtocolWithArguments:(id)arg1;
- (id)provideACCSelectMusicProtocolWithArguments:(id)arg1;
- (id)provideACCClipVideoProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCLanguageProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCI18NConfigProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCViewControllerProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCToastProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCLoadingProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCFontProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCBubbleProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCAlertProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCPhotosProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCVideoMusicProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCFeedbackProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCEncryptProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCDraftProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCCustomFontProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCAPPSettingsProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCWebImageProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCTrackProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCMonitorToolProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCMonitorProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCMemoryTrackProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCLogProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCCacheProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCAPMProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCRTLProtocolWithArguments:(id)arg1;
- (id)provideSingletonACCRouterProtocolWithArguments:(id)arg1;
- (id)provideTikTokStudioMediaDownloaderProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioFeedbackServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioUserCenterServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioMainServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioExternalRouterServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioCommerceServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioUserRecommendServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioRNKitServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioSearchServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioShareServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioDetailCollectionServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioIMServiceProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioLiveServiceProtocolWithArguments:(id)arg1;
- (id)provideACCRecordLiveConfigProtocolWithArguments:(id)arg1;
- (id)provideACCMusicModuleConfigWithArguments:(id)arg1;
- (id)provideTikTokStudioPublishServiceConfigProtocolWithArguments:(id)arg1;
- (id)provideTikTokStudioGalleryConfigProtocolWithArguments:(id)arg1;
- (id)provideACCVideoEditMusicConfigWithArguments:(id)arg1;
- (id)provideACCInfoStickerComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCVideoEditTipsComponentConfigWithArguments:(id)arg1;
- (id)provideACCEditServicesAssemblerProtocolWithArguments:(id)arg1;
- (id)provideACCEditComponentFactoryProtocolWithArguments:(id)arg1;
- (id)provideACCVideoEditTemplateWithArguments:(id)arg1;
- (id)provideACCRecordUploadButtonComponentConfigWithArguments:(id)arg1;
- (id)provideTikTokStudioRecorderServiceProtocolWithArguments:(id)arg1;
- (id)provideACCServiceAssemblerWithArguments:(id)arg1;
- (id)provideACCRecorderComponentFactoryProtocolWithArguments:(id)arg1;
- (id)provideACCFilterComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCCaptureComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCRecordSwitchModeTabConfigWithArguments:(id)arg1;
- (id)provideACCBeautyComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCStickerComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCVideoRecorderTemplateWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


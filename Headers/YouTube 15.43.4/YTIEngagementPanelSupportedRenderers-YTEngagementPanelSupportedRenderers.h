//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTIEngagementPanelSupportedRenderers.h>

#import "YTEngagementPanelViewModel-Protocol.h"

@class NSString;

@interface YTIEngagementPanelSupportedRenderers (YTEngagementPanelSupportedRenderers) <YTEngagementPanelViewModel>
+ (id)engagementPanelRendererWithPanelIdentifier:(id)arg1 title:(id)arg2 contextualInfo:(id)arg3 openStyle:(id)arg4;
- (int)autoplay;
- (int)resizability;
- (id)adsTitleHeaderRenderer;
- (id)titleHeaderRenderer;
- (id)playlistPanelRenderer;
- (id)donationShelfRenderer;
- (id)liveChatRenderer;
@property(nonatomic, getter=isPersistent) _Bool persistent;
- (_Bool)disablePullRefresh;
- (id)headerRenderer;
- (id)sectionListRenderer;
- (id)contentModel;
- (id)visualElement;
- (id)openStyle;
- (void)updateSortFilterSubMenuRenderer:(id)arg1;
- (_Bool)isAdsHeaderRenderer;
- (_Bool)shouldShowCountBadge;
- (_Bool)shouldHideBottomShadow;
- (_Bool)shouldRetainVideoHeight;
- (id)subheader;
- (id)actionButton;
- (id)informationButton;
- (id)headerIconTapCommand;
- (int)headerIconStyle;
- (id)thumbnail;
- (id)overflowMenu;
- (id)subtitle;
- (id)sortFilterSubMenuRenderer;
- (id)headerContexualInfo;
- (id)headerTitle;
- (id)panelIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


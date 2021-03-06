//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, UIView;
@protocol HTSLiveLayoutSceneProtocol, HTSLivePluginLayoutView, IESLiveLayoutScene;

@protocol HTSLivePluginLayoutMachineProvider <NSObject>
- (void)removeSubScene:(unsigned long long)arg1;
- (void)addSubScene:(id <IESLiveLayoutScene>)arg1;
- (struct CGRect)frameOfViewType:(unsigned long long)arg1 layoutType:(unsigned long long)arg2;
- (_Bool)getGiftPanelShow;
- (void)setGiftPanelShow:(_Bool)arg1;
- (void)layoutMessageListToWidth:(NSNumber *)arg1;
- (void)layoutMessageListToTop:(double)arg1;
- (void)layoutBannerToOriginalPostion;
- (void)layoutBannerToBottom:(double)arg1;
- (void)layoutPluginIfNeed;
- (unsigned long long)getScene;
- (id <HTSLiveLayoutSceneProtocol>)layoutScene;
- (void)setScene:(id <HTSLiveLayoutSceneProtocol>)arg1;
- (UIView<HTSLivePluginLayoutView> *)viewOfType:(unsigned long long)arg1;
- (void)removeView:(id <HTSLivePluginLayoutView>)arg1;
- (void)addView:(UIView *)arg1 withLayoutType:(unsigned long long)arg2;
- (void)addView:(id <HTSLivePluginLayoutView>)arg1;
@end


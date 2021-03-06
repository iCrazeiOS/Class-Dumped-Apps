//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IESLiveBeautySyncService <NSObject>
- (long long)currentUserTheme;
- (_Bool)isInSyncStatus;
- (_Bool)enableUnifiedBeauty;
- (void)cleanUpUnifiedBeautyResource;
- (_Bool)userHasModifiedBeautyConfigInCameraPage;
- (NSArray *)resourceIDsForAppliedEffects;
- (void)applySecondaryComposerItemWithResourceID:(NSString *)arg1 updateAllTheme:(_Bool)arg2;
- (void)applySecondaryComposerItemWithResourceID:(NSString *)arg1;
- (long long)currentBeautyABGroup;
- (void)setRatio:(double)arg1 forBeautyResourceID:(NSString *)arg2 tag:(NSString *)arg3 updateAllTheme:(_Bool)arg4;
- (void)setRatio:(double)arg1 forBeautyResourceID:(NSString *)arg2 tag:(NSString *)arg3;
- (double)ratioForBeautyResourceID:(NSString *)arg1 tag:(NSString *)arg2;
@end


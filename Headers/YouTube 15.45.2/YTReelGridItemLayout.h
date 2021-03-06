//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReelCollectionItemLayout-Protocol.h"

@class NSString;

@interface YTReelGridItemLayout : NSObject <YTReelCollectionItemLayout>
{
}

+ (id)defaultGridItemLayout;
@property(readonly, nonatomic) double yt_thumbnailAspectRatio;
@property(readonly, nonatomic) double yt_thumbnailCornerRadius;
@property(readonly, nonatomic) _Bool yt_hasTopPaddingOverride;
@property(readonly, nonatomic) double yt_topPaddingOverride;
@property(readonly, nonatomic) _Bool yt_hasBottomPaddingOverride;
@property(readonly, nonatomic) double yt_bottomPaddingOverride;
@property(readonly, nonatomic) _Bool yt_hasAvatarDiameter;
@property(readonly, nonatomic) double yt_avatarDiameter;
@property(readonly, nonatomic) _Bool yt_hasWidthScreenPercentage;
@property(readonly, nonatomic) double yt_widthScreenPercentage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


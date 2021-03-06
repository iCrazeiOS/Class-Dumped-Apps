//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MuxCore/MUXSDKQueryData.h>

@class MUXSDKViewDeviceOrientationData, NSNumber, NSString;

@interface MUXSDKViewData : MUXSDKQueryData
{
    NSString *_vviewPrerollAdAssetHostname;
}

- (void).cxx_destruct;
@property(retain) NSString *vviewPrerollAdAssetHostname; // @synthesize vviewPrerollAdAssetHostname=_vviewPrerollAdAssetHostname;
@property(retain, nonatomic) MUXSDKViewDeviceOrientationData *viewDeviceOrientationData;
@property(retain) NSString *viewPrerollAdAssetDomain;
- (id)viewPrerollAdAssetHostname;
- (void)setViewPrerollAdAssetHostname:(id)arg1;
@property(retain) NSString *viewPrerollAdTagDomain;
@property(retain) NSString *viewPrerollAdTagHostname;
@property(retain) NSNumber *viewStartupPrerollLoadTime;
@property(retain) NSNumber *viewPrerollLoadTime;
@property(retain) NSNumber *viewStartupPrerollRequestTime;
@property(retain) NSNumber *viewPrerollRequestTime;
@property(retain) NSNumber *viewPrerollPlayed;
@property(retain) NSNumber *viewPrerollRequested;
@property(retain) NSString *viewPrerollCreativeId;
@property(retain) NSString *viewPrerollAdId;
@property(retain) NSNumber *viewAverageRequestLatency;
@property(retain) NSNumber *viewMaxRequestLatency;
@property(retain) NSNumber *viewAverageRequestThroughput;
@property(retain) NSNumber *viewMinRequestThroughput;
@property(retain) NSNumber *viewerTime;
@property(retain) NSNumber *viewWatchTime;
@property(retain) NSNumber *viewWaitingRebufferDuration;
@property(retain) NSNumber *viewWaitingRebufferCount;
@property(retain) NSNumber *viewTotalUpscaling;
@property(retain) NSNumber *viewTotalDownscaling;
@property(retain) NSNumber *viewTotalContentPlaybackTime;
@property(retain) NSNumber *viewTimeToPreroll;
@property(retain) NSNumber *viewTimeToFirstFrame;
@property(retain) NSNumber *viewStart;
@property(retain) NSNumber *viewSequenceNumber;
@property(retain) NSNumber *viewSeekDuration;
@property(retain) NSNumber *viewSeekCount;
@property(retain) NSNumber *viewRebufferPercentage;
@property(retain) NSNumber *viewRebufferFrequency;
@property(retain) NSNumber *viewRebufferDuration;
@property(retain) NSNumber *viewRebufferCount;
@property(retain) NSNumber *viewPercentageViewed;
@property(retain) NSNumber *viewMidrollTimeToFirstAd;
@property(retain) NSNumber *viewMaxUpscalePercentage;
@property(retain) NSNumber *viewMaxSeekTime;
@property(retain) NSNumber *viewMaxDownscalePercentage;
@property(retain) NSString *viewId;
@property(retain) NSNumber *viewEnd;
@property(retain) NSNumber *viewAdWatchTime;
@property(retain) NSNumber *viewAdViewCount;
@property(retain) NSNumber *viewAdErrorCount;
@property(retain) NSNumber *viewAdCompleteCount;
@property(retain) NSNumber *viewAdBreakCount;

@end


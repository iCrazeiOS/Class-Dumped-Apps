//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, YTShortsAudioScrubberTimelineModel, YTShortsAudioScrubberWaveformModel;

@interface YTShortsAudioScrubberViewModel : NSObject
{
    YTShortsAudioScrubberTimelineModel *_timelineModel;
    YTShortsAudioScrubberWaveformModel *_waveformModel;
    UIImage *_albumArtImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *albumArtImage; // @synthesize albumArtImage=_albumArtImage;
@property(retain, nonatomic) YTShortsAudioScrubberWaveformModel *waveformModel; // @synthesize waveformModel=_waveformModel;
@property(retain, nonatomic) YTShortsAudioScrubberTimelineModel *timelineModel; // @synthesize timelineModel=_timelineModel;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/FBVideoTranscoding-Protocol.h>

@class AVAsset, FBVideoEdits, FBVideoSegmentedEncoder, FBVideoTranscoderConfig, NSDate, NSDictionary, NSString, NSURL;
@protocol FBVideoProcessing, FBVideoTranscoderOutputAdapter, OS_dispatch_queue;

@interface FBVideoSegmentedTranscoder : NSObject <FBVideoTranscoding>
{
    AVAsset *_asset;
    NSURL *_assetURL;
    id <FBVideoTranscoderOutputAdapter> _outputAdapter;
    FBVideoTranscoderConfig *_config;
    NSDictionary *_optionalConfig;
    NSObject<OS_dispatch_queue> *_audioExportQueue;
    NSObject<OS_dispatch_queue> *_videoExportQueue;
    unsigned long long _currentSegment;
    struct FBMediaTranscodingKitVideoAssetExportParams _segmentParams;
    struct FBMediaTranscodingKitVideoAssetExportParams _currentVideoSegmentParams;
    struct FBMediaTranscodingKitVideoAssetExportParams _currentAudioSegmentParams;
    CDStruct_1b6d18a9 _nextSegmentPresentationTime;
    _Bool _cancelled;
    CDUnknownBlockType _segmentReadyBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _imageSampleBlock;
    NSObject<OS_dispatch_queue> *_progressQueue;
    double _totalProgress;
    unsigned long long _progressUpdateIntervalMilliseconds;
    NSDate *_lastProgressUpdateTime;
    id <FBVideoProcessing> _videoProcessor;
    FBVideoEdits *_videoEdits;
    FBVideoSegmentedEncoder *_audioEncoder;
    FBVideoSegmentedEncoder *_videoEncoder;
    CDUnknownBlockType _videoEncoderFactory;
    _Bool _useMultiPass;
    _Bool _shouldSegmentOutput;
    _Bool _shouldOptimizeForNetworkUse;
    _Bool _shouldSkipEncodeAudio;
    _Bool _enforceMaxSegmentDuration;
    long long _numberOfSegments;
    long long _estimatedOutputFileSize;
    struct CGSize _outputSize;
}

@property(readonly, nonatomic) long long estimatedOutputFileSize; // @synthesize estimatedOutputFileSize=_estimatedOutputFileSize;
@property(readonly, nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_onVideoSegmentCompleted:(id)arg1 error:(id)arg2 atPresentationTime:(CDStruct_1b6d18a9)arg3 didEncodeFinalSampleOrFailed:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)_startVideoEncodingWithCompletionCallback:(CDUnknownBlockType)arg1;
- (_Bool)_startAudioEncodingWithCompletionCallback:(CDUnknownBlockType)arg1;
- (void)_encodeAudioThenVideo;
- (void)_encodeConcurrently;
- (void)_onComplete:(id)arg1;
- (void)_onSegmentReadyWithURL:(id)arg1 type:(unsigned long long)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (void)_didUpdateEncodeProgress:(double)arg1 withSegmentDuration:(CDStruct_1b6d18a9)arg2;
- (void)cancelExportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_cancelWriters;
- (CDStruct_1b6d18a9)_nextVideoSegmentDuration;
- (_Bool)_prepareNextVideoSegment:(id *)arg1;
- (void)transcodeWithStartPresentationTime:(CDStruct_1b6d18a9)arg1 segmentIdx:(unsigned long long)arg2 shouldSkipEncodeAudio:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 onSegmentReady:(CDUnknownBlockType)arg5 onImageSample:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 progressQueue:(id)arg8;
- (void)transcodeWithProgress:(CDUnknownBlockType)arg1 onSegmentReady:(CDUnknownBlockType)arg2 onImageSample:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateCropRect:(id)arg1 forAsset:(id)arg2;
- (id)config;
- (id)videoEdits;
- (id)asset;
- (id)initWithAsset:(id)arg1 outputAdapter:(id)arg2 videoEdits:(id)arg3 config:(id)arg4 videoProcessor:(id)arg5 videoEncoderFactory:(CDUnknownBlockType)arg6 optionalConfig:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


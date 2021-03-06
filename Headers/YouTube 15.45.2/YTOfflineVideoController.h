//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTOfflineImageControllerObserver-Protocol.h>
#import <Module_Framework/YTOfflineVideoAdPlaylistProvider-Protocol.h>
#import <Module_Framework/YTOfflineVideoProvider-Protocol.h>

@class GIMMe, NSArray, NSHashTable, NSString, YTIOfflineRetryConfig, YTOfflineDataService, YTOfflineImageController, YTOfflineRetryInterval;
@protocol YTOfflineConfig, YTOfflineCoordinatorProtocol;

@interface YTOfflineVideoController : NSObject <YTHotConfigObserver, YTOfflineImageControllerObserver, YTOfflineVideoProvider, YTOfflineVideoAdPlaylistProvider>
{
    YTOfflineDataService *_offlineDataService;
    id <YTOfflineConfig> _offlineConfig;
    YTOfflineImageController *_offlineImageController;
    _Bool _hasSentDidAddFirstOfflineVideo;
    _Bool _disableHamplayerDownload;
    _Bool _enableRefreshV2AdsRefreshFix;
    _Bool _enableExponentialBackoffRetry;
    YTIOfflineRetryConfig *_offlineRetryConfig;
    NSHashTable *_observers;
    NSHashTable *_adPlaylistObservers;
    YTOfflineRetryInterval *_retryInterval;
    NSArray *_retryPattern;
    id <YTOfflineCoordinatorProtocol> _offlineCoordinator;
    GIMMe *_gimme;
}

+ (id)videoForPlayerResponse:(id)arg1 transferNonce:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTOfflineCoordinatorProtocol> offlineCoordinator; // @synthesize offlineCoordinator=_offlineCoordinator;
- (void)maybePerformHamPlayerHardSwitch;
- (CDUnknownBlockType)getSaveErrorAndNotifyBlockForVideoID:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (_Bool)isRecoverableFailureReason:(int)arg1;
- (id)offlineGELEventController;
- (id)currentDate;
- (void)resetRetryableVideosWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)getAllUserIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)markVideoForRetryWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)reportNotPlayableOfflineWithPlayerResponse:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)saveErrorAndNotifyWithID:(id)arg1 playerResponse:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)markMetadataOnlyVideoForPendingDownloadWithID:(id)arg1 pinTypes:(int)arg2 maximumDownloadQuality:(int)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)maybeCancelCurrentDownloadWithVideoID:(id)arg1 status:(int)arg2;
- (void)clearLastPlaybackPositionsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)setLastPlaybackPositionSecondsForVideoID:(id)arg1 lastPlaybackPositionSeconds:(long long)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)setVideoStatusForVideoID:(id)arg1 videoStatus:(int)arg2 triggeredByRefresh:(_Bool)arg3 failedDownloadError:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)setVideoStatusForVideoID:(id)arg1 videoStatus:(int)arg2 failedDownloadError:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)setVideoStatusForVideoID:(id)arg1 videoStatus:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)videoStatusChangeResponseBlockForVideoID:(id)arg1 failedDownloadError:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (long long)estimatedTotalBytesForPlayerResponse:(id)arg1 withMaximumResolution:(int)arg2;
- (void)purgeStreamsWithVideoIDs:(id)arg1;
- (void)maybeDeleteStreamsWithVideoIDs:(id)arg1;
- (void)deleteAssociatedStreamsForVideo:(id)arg1;
- (void)deleteAssociatedStreamsForVideoWithID:(id)arg1;
- (CDUnknownBlockType)getSaveVideoBlockWithPinTypes:(int)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)enqueueVideo:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)getAndSaveOfflineVideoDataForVideoID:(id)arg1 pinTypes:(int)arg2 maximumDownloadQuality:(int)arg3 clickTrackingParams:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)updateVideoMetadataForVideoID:(id)arg1 offlineState:(id)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)removeNextRefreshActionFromOfflineState:(id)arg1 andSetOfflineStateForVideoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)notifyDidSavePlayerResponseWithVideoID:(id)arg1;
- (void)notifyDidAddFirstOfflineVideo;
- (void)notifyDidUpdateAdPlaylistWithVideoID:(id)arg1;
- (void)notifyDidUpdateOfflineStateActionsForVideoIDs:(id)arg1;
- (void)notifyDidUpdateMetadataForVideoID:(id)arg1;
- (void)notifyDidSaveThumbnailWithVideoID:(id)arg1;
- (void)notifyDidRestoreBackgroundDownloadWithVideoID:(id)arg1;
- (void)notifyDidFailToSaveOfflineVideoWithID:(id)arg1;
- (void)notifyDidUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (void)notifyDidSaveOfflineVideo:(id)arg1;
- (void)notifyDownloadDidProgressWithVideoID:(id)arg1 bytesDownloaded:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)notifyDownloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)notifyDownloadDidPauseWithVideoID:(id)arg1;
- (void)notifyDownloadDidCompleteWithVideoID:(id)arg1;
- (void)notifyDownloadDidStartWithVideoID:(id)arg1;
- (void)notifyDownloadDidCancelWithVideoID:(id)arg1;
- (void)notifyDidDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)notifyDidDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (void)notifyDidSetLastPlaybackPositionSecondsForVideoID:(id)arg1;
- (void)notifyVideoDidDeleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)hotConfigDidChange:(id)arg1;
- (void)debugDisableHamplayerDownloads;
- (void)expireAllVideos;
- (double)nextRetryIntervalForRetryCount:(unsigned long long)arg1;
- (unsigned long long)maxRetries;
- (void)didDeleteOfflineImageWithFilename:(id)arg1;
- (void)didSaveOfflineImageWithFilename:(id)arg1 videoIDs:(id)arg2 playlistIDs:(id)arg3 videoListIDs:(id)arg4;
- (void)removeOfflineVideoAdPlaylistObserver:(id)arg1;
- (void)addOfflineVideoAdPlaylistObserver:(id)arg1;
@property(readonly, nonatomic) double downloadingProgress;
- (id)downloadingStateStatuses;
- (void)disableDidAddFirstOfflineVideoEvent;
- (void)enableDidAddFirstOfflineVideoEvent;
- (void)determineVideosToDownloadWithQualities:(id)arg1 availableBytes:(unsigned long long)arg2 maximumDownloadQuality:(int)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (void)calculateEstimatedTotalBytesForDownloadingVideos:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *downloadingVideoID;
- (void)cancelDownloadWithVideoID:(id)arg1;
- (void)resumeDownloadWithVideoID:(id)arg1;
- (void)pauseDownloadWithVideoID:(id)arg1;
- (void)resetOfflineRefreshAttemptedWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)setRefreshAttemptedDate:(id)arg1 forVideoIDs:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)processOfflineState:(id)arg1 offlineStateDate:(id)arg2 forVideoIDs:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)setLastPlaybackDateForID:(id)arg1 playbackDate:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)searchVideosWithString:(id)arg1 searchTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getLatestOfflineActivityDateWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)migrateOfflineVideoEntityForVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchCurrentUserHasOfflineVideoWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchHasOfflineVideoOnDeviceWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoNeedingInnerTubeMigrationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchOfflineRefreshRequestBatchedVideoCount:(unsigned long long)arg1 requestDate:(id)arg2 offlineRefreshInterval:(double)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchOfflineRefreshRequestWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoIDNeedingAdPlaylistSwapWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideoNeedingAdPlaylistWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchDeletableVideoIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideosWithVideoListIDs:(id)arg1 offset:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 statuses:(id)arg4 pinTypes:(int)arg5 onlyRetryable:(_Bool)arg6 ascendingDateOrder:(_Bool)arg7 responseBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;
- (void)fetchVideosWithVideoListIDs:(id)arg1 offset:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 statuses:(id)arg4 pinTypes:(int)arg5 onlyRetryable:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (void)fetchVideosWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 statuses:(id)arg3 pinTypes:(int)arg4 onlyRetryable:(_Bool)arg5 ascendingDateOrder:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (void)fetchVideoNeedingOfflineRefreshWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideosWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 onlyPlayable:(_Bool)arg3 pinTypes:(int)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)fetchVideoListIDsWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistIDsWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)offlinePlayerResponseForPlayableVideoWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)offlinePlayerResponseByVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchVideoWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deleteVideosForUserID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deleteExplicitPinnedVideosWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)deleteVideoWithID:(id)arg1 pinTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)swapAdPlaylistWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)refreshPlayerResponseWithVideoID:(id)arg1 playbackContext:(id)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)saveVideoWithID:(id)arg1 pinTypes:(int)arg2 maximumDownloadQuality:(int)arg3 playerResponse:(id)arg4 clickTrackingParams:(id)arg5 responseBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)fetchOfflinePlayerResponseForVideoID:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)runOfflineRefreshActionForVideo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)removeOfflineVideoControllerObserver:(id)arg1;
- (void)addOfflineVideoControllerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


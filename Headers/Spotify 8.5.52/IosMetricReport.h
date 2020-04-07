//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, GPBInt32Array, NSMutableArray, NSString;

@interface IosMetricReport : GPBMessage
{
}

+ (id)descriptor;
- (void)decomposeHistogram:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithPayload:(id)arg1;

// Remaining properties
@property(nonatomic) double backgroundAudioTime; // @dynamic backgroundAudioTime;
@property(copy, nonatomic) NSString *backgroundAudioTimeUnit; // @dynamic backgroundAudioTimeUnit;
@property(nonatomic) double backgroundLocationTime; // @dynamic backgroundLocationTime;
@property(copy, nonatomic) NSString *backgroundLocationTimeUnit; // @dynamic backgroundLocationTimeUnit;
@property(nonatomic) double backgroundTime; // @dynamic backgroundTime;
@property(copy, nonatomic) NSString *backgroundTimeUnit; // @dynamic backgroundTimeUnit;
@property(retain, nonatomic) GPBInt32Array *cellularConditionBucketCountArray; // @dynamic cellularConditionBucketCountArray;
@property(readonly, nonatomic) unsigned long long cellularConditionBucketCountArray_Count; // @dynamic cellularConditionBucketCountArray_Count;
@property(retain, nonatomic) NSMutableArray *cellularConditionBucketEndUnitsArray; // @dynamic cellularConditionBucketEndUnitsArray;
@property(readonly, nonatomic) unsigned long long cellularConditionBucketEndUnitsArray_Count; // @dynamic cellularConditionBucketEndUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *cellularConditionBucketEndsArray; // @dynamic cellularConditionBucketEndsArray;
@property(readonly, nonatomic) unsigned long long cellularConditionBucketEndsArray_Count; // @dynamic cellularConditionBucketEndsArray_Count;
@property(retain, nonatomic) NSMutableArray *cellularConditionBucketStartUnitsArray; // @dynamic cellularConditionBucketStartUnitsArray;
@property(readonly, nonatomic) unsigned long long cellularConditionBucketStartUnitsArray_Count; // @dynamic cellularConditionBucketStartUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *cellularConditionBucketStartsArray; // @dynamic cellularConditionBucketStartsArray;
@property(readonly, nonatomic) unsigned long long cellularConditionBucketStartsArray_Count; // @dynamic cellularConditionBucketStartsArray_Count;
@property(nonatomic) int cellularConditionTotalBuckets; // @dynamic cellularConditionTotalBuckets;
@property(nonatomic) double cellularDownload; // @dynamic cellularDownload;
@property(copy, nonatomic) NSString *cellularDownloadUnit; // @dynamic cellularDownloadUnit;
@property(nonatomic) double cellularUpload; // @dynamic cellularUpload;
@property(copy, nonatomic) NSString *cellularUploadUnit; // @dynamic cellularUploadUnit;
@property(nonatomic) double cumulativeCpuTime; // @dynamic cumulativeCpuTime;
@property(copy, nonatomic) NSString *cumulativeCpuTimeUnit; // @dynamic cumulativeCpuTimeUnit;
@property(nonatomic) double diskLogicalWrites; // @dynamic diskLogicalWrites;
@property(copy, nonatomic) NSString *diskLogicalWritesUnit; // @dynamic diskLogicalWritesUnit;
@property(retain, nonatomic) GPBInt32Array *firstDrawBucketCountArray; // @dynamic firstDrawBucketCountArray;
@property(readonly, nonatomic) unsigned long long firstDrawBucketCountArray_Count; // @dynamic firstDrawBucketCountArray_Count;
@property(retain, nonatomic) NSMutableArray *firstDrawBucketEndUnitsArray; // @dynamic firstDrawBucketEndUnitsArray;
@property(readonly, nonatomic) unsigned long long firstDrawBucketEndUnitsArray_Count; // @dynamic firstDrawBucketEndUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *firstDrawBucketEndsArray; // @dynamic firstDrawBucketEndsArray;
@property(readonly, nonatomic) unsigned long long firstDrawBucketEndsArray_Count; // @dynamic firstDrawBucketEndsArray_Count;
@property(retain, nonatomic) NSMutableArray *firstDrawBucketStartUnitsArray; // @dynamic firstDrawBucketStartUnitsArray;
@property(readonly, nonatomic) unsigned long long firstDrawBucketStartUnitsArray_Count; // @dynamic firstDrawBucketStartUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *firstDrawBucketStartsArray; // @dynamic firstDrawBucketStartsArray;
@property(readonly, nonatomic) unsigned long long firstDrawBucketStartsArray_Count; // @dynamic firstDrawBucketStartsArray_Count;
@property(nonatomic) int firstDrawTotalBuckets; // @dynamic firstDrawTotalBuckets;
@property(nonatomic) double foregroundTime; // @dynamic foregroundTime;
@property(copy, nonatomic) NSString *foregroundTimeUnit; // @dynamic foregroundTimeUnit;
@property(retain, nonatomic) GPBInt32Array *hangTimeBucketCountArray; // @dynamic hangTimeBucketCountArray;
@property(readonly, nonatomic) unsigned long long hangTimeBucketCountArray_Count; // @dynamic hangTimeBucketCountArray_Count;
@property(retain, nonatomic) GPBDoubleArray *hangTimeBucketEndsArray; // @dynamic hangTimeBucketEndsArray;
@property(readonly, nonatomic) unsigned long long hangTimeBucketEndsArray_Count; // @dynamic hangTimeBucketEndsArray_Count;
@property(retain, nonatomic) NSMutableArray *hangTimeBucketStartUnitsArray; // @dynamic hangTimeBucketStartUnitsArray;
@property(readonly, nonatomic) unsigned long long hangTimeBucketStartUnitsArray_Count; // @dynamic hangTimeBucketStartUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *hangTimeBucketStartsArray; // @dynamic hangTimeBucketStartsArray;
@property(readonly, nonatomic) unsigned long long hangTimeBucketStartsArray_Count; // @dynamic hangTimeBucketStartsArray_Count;
@property(retain, nonatomic) NSMutableArray *hangTimeEndUnitsArray; // @dynamic hangTimeEndUnitsArray;
@property(readonly, nonatomic) unsigned long long hangTimeEndUnitsArray_Count; // @dynamic hangTimeEndUnitsArray_Count;
@property(nonatomic) int hangTimeTotalBuckets; // @dynamic hangTimeTotalBuckets;
@property(nonatomic) _Bool hasBackgroundAudioTime; // @dynamic hasBackgroundAudioTime;
@property(nonatomic) _Bool hasBackgroundAudioTimeUnit; // @dynamic hasBackgroundAudioTimeUnit;
@property(nonatomic) _Bool hasBackgroundLocationTime; // @dynamic hasBackgroundLocationTime;
@property(nonatomic) _Bool hasBackgroundLocationTimeUnit; // @dynamic hasBackgroundLocationTimeUnit;
@property(nonatomic) _Bool hasBackgroundTime; // @dynamic hasBackgroundTime;
@property(nonatomic) _Bool hasBackgroundTimeUnit; // @dynamic hasBackgroundTimeUnit;
@property(nonatomic) _Bool hasCellularConditionTotalBuckets; // @dynamic hasCellularConditionTotalBuckets;
@property(nonatomic) _Bool hasCellularDownload; // @dynamic hasCellularDownload;
@property(nonatomic) _Bool hasCellularDownloadUnit; // @dynamic hasCellularDownloadUnit;
@property(nonatomic) _Bool hasCellularUpload; // @dynamic hasCellularUpload;
@property(nonatomic) _Bool hasCellularUploadUnit; // @dynamic hasCellularUploadUnit;
@property(nonatomic) _Bool hasCumulativeCpuTime; // @dynamic hasCumulativeCpuTime;
@property(nonatomic) _Bool hasCumulativeCpuTimeUnit; // @dynamic hasCumulativeCpuTimeUnit;
@property(nonatomic) _Bool hasDiskLogicalWrites; // @dynamic hasDiskLogicalWrites;
@property(nonatomic) _Bool hasDiskLogicalWritesUnit; // @dynamic hasDiskLogicalWritesUnit;
@property(nonatomic) _Bool hasFirstDrawTotalBuckets; // @dynamic hasFirstDrawTotalBuckets;
@property(nonatomic) _Bool hasForegroundTime; // @dynamic hasForegroundTime;
@property(nonatomic) _Bool hasForegroundTimeUnit; // @dynamic hasForegroundTimeUnit;
@property(nonatomic) _Bool hasHangTimeTotalBuckets; // @dynamic hasHangTimeTotalBuckets;
@property(nonatomic) _Bool hasPeakMemoryUsage; // @dynamic hasPeakMemoryUsage;
@property(nonatomic) _Bool hasPeakMemoryUsageUnit; // @dynamic hasPeakMemoryUsageUnit;
@property(nonatomic) _Bool hasPixelLuminanceAvg; // @dynamic hasPixelLuminanceAvg;
@property(nonatomic) _Bool hasPixelLuminanceAvgUnit; // @dynamic hasPixelLuminanceAvgUnit;
@property(nonatomic) _Bool hasPixelLuminanceSampleCount; // @dynamic hasPixelLuminanceSampleCount;
@property(nonatomic) _Bool hasPixelLuminanceStdev; // @dynamic hasPixelLuminanceStdev;
@property(nonatomic) _Bool hasRegionFormat; // @dynamic hasRegionFormat;
@property(nonatomic) _Bool hasResumeTimeTotalBuckets; // @dynamic hasResumeTimeTotalBuckets;
@property(nonatomic) _Bool hasSuspendedMemoryAvg; // @dynamic hasSuspendedMemoryAvg;
@property(nonatomic) _Bool hasSuspendedMemoryAvgUnit; // @dynamic hasSuspendedMemoryAvgUnit;
@property(nonatomic) _Bool hasSuspendedMemorySampleCount; // @dynamic hasSuspendedMemorySampleCount;
@property(nonatomic) _Bool hasSuspendedMemorySampleStdev; // @dynamic hasSuspendedMemorySampleStdev;
@property(nonatomic) _Bool hasTimestampBegin; // @dynamic hasTimestampBegin;
@property(nonatomic) _Bool hasTimestampEnd; // @dynamic hasTimestampEnd;
@property(nonatomic) _Bool hasWifiDownload; // @dynamic hasWifiDownload;
@property(nonatomic) _Bool hasWifiDownloadUnit; // @dynamic hasWifiDownloadUnit;
@property(nonatomic) _Bool hasWifiUpload; // @dynamic hasWifiUpload;
@property(nonatomic) _Bool hasWifiUploadUnit; // @dynamic hasWifiUploadUnit;
@property(nonatomic) double peakMemoryUsage; // @dynamic peakMemoryUsage;
@property(copy, nonatomic) NSString *peakMemoryUsageUnit; // @dynamic peakMemoryUsageUnit;
@property(nonatomic) double pixelLuminanceAvg; // @dynamic pixelLuminanceAvg;
@property(copy, nonatomic) NSString *pixelLuminanceAvgUnit; // @dynamic pixelLuminanceAvgUnit;
@property(nonatomic) int pixelLuminanceSampleCount; // @dynamic pixelLuminanceSampleCount;
@property(nonatomic) double pixelLuminanceStdev; // @dynamic pixelLuminanceStdev;
@property(copy, nonatomic) NSString *regionFormat; // @dynamic regionFormat;
@property(retain, nonatomic) GPBInt32Array *resumeTimeBucketCountArray; // @dynamic resumeTimeBucketCountArray;
@property(readonly, nonatomic) unsigned long long resumeTimeBucketCountArray_Count; // @dynamic resumeTimeBucketCountArray_Count;
@property(retain, nonatomic) NSMutableArray *resumeTimeBucketEndUnitsArray; // @dynamic resumeTimeBucketEndUnitsArray;
@property(readonly, nonatomic) unsigned long long resumeTimeBucketEndUnitsArray_Count; // @dynamic resumeTimeBucketEndUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *resumeTimeBucketEndsArray; // @dynamic resumeTimeBucketEndsArray;
@property(readonly, nonatomic) unsigned long long resumeTimeBucketEndsArray_Count; // @dynamic resumeTimeBucketEndsArray_Count;
@property(retain, nonatomic) NSMutableArray *resumeTimeBucketStartUnitsArray; // @dynamic resumeTimeBucketStartUnitsArray;
@property(readonly, nonatomic) unsigned long long resumeTimeBucketStartUnitsArray_Count; // @dynamic resumeTimeBucketStartUnitsArray_Count;
@property(retain, nonatomic) GPBDoubleArray *resumeTimeBucketStartsArray; // @dynamic resumeTimeBucketStartsArray;
@property(readonly, nonatomic) unsigned long long resumeTimeBucketStartsArray_Count; // @dynamic resumeTimeBucketStartsArray_Count;
@property(nonatomic) int resumeTimeTotalBuckets; // @dynamic resumeTimeTotalBuckets;
@property(nonatomic) double suspendedMemoryAvg; // @dynamic suspendedMemoryAvg;
@property(copy, nonatomic) NSString *suspendedMemoryAvgUnit; // @dynamic suspendedMemoryAvgUnit;
@property(nonatomic) int suspendedMemorySampleCount; // @dynamic suspendedMemorySampleCount;
@property(nonatomic) double suspendedMemorySampleStdev; // @dynamic suspendedMemorySampleStdev;
@property(nonatomic) double timestampBegin; // @dynamic timestampBegin;
@property(nonatomic) double timestampEnd; // @dynamic timestampEnd;
@property(nonatomic) double wifiDownload; // @dynamic wifiDownload;
@property(copy, nonatomic) NSString *wifiDownloadUnit; // @dynamic wifiDownloadUnit;
@property(nonatomic) double wifiUpload; // @dynamic wifiUpload;
@property(copy, nonatomic) NSString *wifiUploadUnit; // @dynamic wifiUploadUnit;

@end


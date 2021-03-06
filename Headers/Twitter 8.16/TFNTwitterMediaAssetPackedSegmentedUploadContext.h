//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, TFNTwitterAccount, TFNTwitterMediaAsset, TFNTwitterMediaUploadConfiguration, TNUTransactionMetrics;
@protocol TNUNetworkQualityProvider;

@interface TFNTwitterMediaAssetPackedSegmentedUploadContext : NSObject
{
    TFNTwitterAccount *_account;
    NSUUID *_identifier;
    TFNTwitterMediaUploadConfiguration *_configuration;
    TFNTwitterMediaAsset *_asset;
    long long _uploadSource;
    TNUTransactionMetrics *_networkTransactionMetrics;
    id <TNUNetworkQualityProvider> _networkQualityProvider;
}

@property(readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider; // @synthesize networkQualityProvider=_networkQualityProvider;
@property(readonly, nonatomic) TNUTransactionMetrics *networkTransactionMetrics; // @synthesize networkTransactionMetrics=_networkTransactionMetrics;
@property(readonly, nonatomic) long long uploadSource; // @synthesize uploadSource=_uploadSource;
@property(readonly, nonatomic) TFNTwitterMediaAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) TFNTwitterMediaUploadConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *TTLParameter;
@property(readonly, nonatomic) _Bool allowAsyncParameter;
@property(readonly, copy, nonatomic) NSString *mediaCategoryParameter;
@property(readonly, copy, nonatomic) NSString *mimeTypeParameter;
@property(readonly, nonatomic) double requestRetryDelay;
@property(readonly, nonatomic) unsigned long long permittedRequestRetryCount;
@property(readonly, nonatomic, getter=isSourceURLAsyncUploadEnabled) _Bool sourceURLAsyncUploadEnabled;
@property(readonly, nonatomic, getter=isSegmentSizeBackoffEnabled) _Bool segmentSizeBackoffEnabled;
@property(readonly, nonatomic) unsigned long long minimumSegmentSize;
@property(readonly, nonatomic) unsigned long long segmentSize;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 asset:(id)arg4 networkTransactionMetrics:(id)arg5 uploadSource:(long long)arg6 networkQualityProvider:(id)arg7;
- (id)init;

@end


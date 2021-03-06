//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTClusters-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplClustersClusterConfigListFactory, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplClustersApiInternalClusterConfigRanker, ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigElementProducerFactory, ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigFactory, ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigToBuilderHelper, ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterFetcher, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, DaggerLazy, JBTTranslationHelper, JavaUtilComparator;

@interface ComGoogleAppsBigtopSyncClientImplClustersClustersImpl : NSObject <JBTClusters>
{
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    id <ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigFactory> clusterConfigFactory_;
    id <ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigElementProducerFactory> clusterConfigElementProducerFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <JavaUtilComparator> defaultClusterConfigComparator_;
    id <DaggerLazy> clusterFilters_;
    id <JBTTranslationHelper> translationHelper_;
    id <ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterFetcher> clusterFetcher_;
    id <ComGoogleAppsBigtopSyncClientImplClustersApiInternalClusterConfigRanker> clusterConfigRanker_;
    id <DaggerLazy> objectMonitorFactory_;
    id <DaggerLazy> userActionRecorder_;
    ComGoogleAppsBigtopSyncClientImplClustersClusterConfigListFactory *clusterConfigListFactory_;
    id <ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigToBuilderHelper> clusterConfigToBuilderHelper_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    _Bool vaultClustersEnabled_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getClusterConfigEditorWithJBTClusterConfig:(id)arg1;
- (id)getClusterFilters;
- (id)deleteCustomClustersWithJavaUtilList:(id)arg1;
- (void)deleteCustomClusterWithJBTCustomClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)addUpdateClusterToTransactionWithJBTClusterConfig:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction:(id)arg3;
- (id)updateClustersWithJavaUtilList:(id)arg1;
- (void)updateClusterWithJBTClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)addCustomClusterWithJBTCustomClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)newClusterBuilder;
- (id)getClusterNameValidator;
- (id)getAllCustomClusterStableIdsByDeprecatedCanonicalLabelNameForAndroid;
- (id)getClusterByStableIdWithNSString:(id)arg1;
- (id)getClustersWithJBTClusters_ClusterTypeSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopServicesClustersBigTopCluster;
@protocol JBTClusterConfig, JBTCustomClusterConfig_Builder, JBTId;

@protocol ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterConfigFactory <JavaObject>
- (id <JBTClusterConfig>)createClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createClusterConfigFromProtoWithComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg1;
- (id <JBTClusterConfig>)createAssistiveClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createInboxSectionClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createVaultClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createSystemClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createCustomClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTClusterConfig>)createSmartClusterConfigFromProtoWithJBTId:(id <JBTId>)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(ComGoogleAppsBigtopServicesClustersBigTopCluster *)arg2;
- (id <JBTCustomClusterConfig_Builder>)newCustomClusterConfigBuilderWithNewClusterLabelId;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataEventEventComponent, ComGoogleAppsBigtopDataItemsChangesCommonRemoteChangeAppliedComponent, ComGoogleAppsBigtopDataItemsClustersApiClientMissingClusterIdsComponent, ComGoogleAppsBigtopDataItemsConfigItemsConfigComponent, ComGoogleAppsBigtopDataItemsDocattachmentsApiDocAttachmentUpdateComponent, ComGoogleAppsBigtopDataItemsFiltersApiFiltersInitialSyncCompleteComponent, ComGoogleAppsBigtopDataItemsSyncApiBackfillFailureComponent, ComGoogleAppsBigtopDataItemsSyncStatusPermanentChangeFailureComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataActiveexperimentsApiActiveExperimentsComponent, ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataItemsChangesStorageItemsChangesStorageInternalComponent, ComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent, ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent, ComGoogleAppsBigtopDataItemsStorageItemsStorageComponent, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent, ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopDataStorageControllersStorageControllersComponent, ComGoogleAppsBigtopDataStorageStorageComponent, ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncDaggerItemsSyncComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopDataActiveexperimentsApiActiveExperimentsComponent> activeExperimentsComponent_;
    ComGoogleAppsBigtopDataItemsSyncApiBackfillFailureComponent *backfillFailureComponent_;
    ComGoogleAppsBigtopDataItemsClustersApiClientMissingClusterIdsComponent *clientMissingClusterIdsComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    ComGoogleAppsBigtopDataItemsDocattachmentsApiDocAttachmentUpdateComponent *docAttachmentUpdateComponent_;
    ComGoogleAppsBigtopDataEventEventComponent *eventComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    ComGoogleAppsBigtopDataItemsFiltersApiFiltersInitialSyncCompleteComponent *filtersInitialSyncCompleteComponent_;
    id <ComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent> itemMessagesSyncComponent_;
    id <ComGoogleAppsBigtopDataItemsChangesStorageItemsChangesStorageInternalComponent> itemsChangesStorageInternalComponent_;
    ComGoogleAppsBigtopDataItemsConfigItemsConfigComponent *itemsConfigComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageItemsStorageComponent> itemsStorageComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent> itemsStorageControllersComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent> itemsStorageSyncStatusComponent_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent> itemsSyncServiceComponent_;
    ComGoogleAppsBigtopDataItemsSyncStatusPermanentChangeFailureComponent *permanentChangeFailureComponent_;
    ComGoogleAppsBigtopDataItemsChangesCommonRemoteChangeAppliedComponent *remoteChangeAppliedComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
    id <ComGoogleAppsBigtopDataStorageStorageComponent> storageComponent_;
    id <ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesComponent> systemPropertiesComponent_;
    id <ComGoogleAppsBigtopDataStorageControllersStorageControllersComponent> storageControllersComponent_;
}

- (void)dealloc;
- (id)build;
- (id)storageControllersComponentWithComGoogleAppsBigtopDataStorageControllersStorageControllersComponent:(id)arg1;
- (id)systemPropertiesComponentWithComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesComponent:(id)arg1;
- (id)storageComponentWithComGoogleAppsBigtopDataStorageStorageComponent:(id)arg1;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)remoteChangeAppliedComponentWithComGoogleAppsBigtopDataItemsChangesCommonRemoteChangeAppliedComponent:(id)arg1;
- (id)permanentChangeFailureComponentWithComGoogleAppsBigtopDataItemsSyncStatusPermanentChangeFailureComponent:(id)arg1;
- (id)itemsSyncServiceComponentWithComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent:(id)arg1;
- (id)itemsStorageSyncStatusComponentWithComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent:(id)arg1;
- (id)itemsStorageControllersComponentWithComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent:(id)arg1;
- (id)itemsStorageComponentWithComGoogleAppsBigtopDataItemsStorageItemsStorageComponent:(id)arg1;
- (id)itemsConfigComponentWithComGoogleAppsBigtopDataItemsConfigItemsConfigComponent:(id)arg1;
- (id)itemsChangesStorageInternalComponentWithComGoogleAppsBigtopDataItemsChangesStorageItemsChangesStorageInternalComponent:(id)arg1;
- (id)itemMessagesSyncComponentWithComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent:(id)arg1;
- (id)filtersInitialSyncCompleteComponentWithComGoogleAppsBigtopDataItemsFiltersApiFiltersInitialSyncCompleteComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)eventComponentWithComGoogleAppsBigtopDataEventEventComponent:(id)arg1;
- (id)docAttachmentUpdateComponentWithComGoogleAppsBigtopDataItemsDocattachmentsApiDocAttachmentUpdateComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)clientMissingClusterIdsComponentWithComGoogleAppsBigtopDataItemsClustersApiClientMissingClusterIdsComponent:(id)arg1;
- (id)backfillFailureComponentWithComGoogleAppsBigtopDataItemsSyncApiBackfillFailureComponent:(id)arg1;
- (id)activeExperimentsComponentWithComGoogleAppsBigtopDataActiveexperimentsApiActiveExperimentsComponent:(id)arg1;

@end


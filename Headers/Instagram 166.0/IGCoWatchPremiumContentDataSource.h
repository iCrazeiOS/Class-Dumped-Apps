//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCoWatchPremiumContentGridItemSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchPremiumContentNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoWatchPremiumContentVideoDetailsSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@class IGCoWatchPremiumContentNetworkSource, NSArray, NSString;
@protocol IGCoWatchPremiumContentDataSourceDelegate;

@interface IGCoWatchPremiumContentDataSource : NSObject <IGCoWatchPremiumContentNetworkSourceDelegate, IGCoWatchPremiumContentVideoDetailsSectionControllerSelectionDelegate, IGCoWatchPremiumContentGridItemSectionControllerSelectionDelegate, IGListAdapterDataSource>
{
    _Bool _isLoading;
    NSArray *_items;
    IGCoWatchPremiumContentNetworkSource *_networkSource;
    id <IGCoWatchPremiumContentDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)gridItemSectionController:(id)arg1 didSelectCatalogItem:(id)arg2;
- (void)videoDetailsSectionController:(id)arg1 didSelectCatalogItem:(id)arg2;
- (void)premiumContentNetworkSourceDidFailToLoad:(id)arg1;
- (void)premiumContentNetworkSource:(id)arg1 didFinishLoadingContent:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)needsAge;
- (long long)itemCount;
- (_Bool)isLoading;
- (void)fetchMore;
- (void)fetch;
- (id)initWithNetworkSource:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSDictionary, NSNumber, NSString, SPTDataLoader;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTLocalSettings, SPTProductState, SPTYourLibraryMusicContentFilterDataLoaderDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicContentFilterDataLoader : NSObject <SPTDataLoaderDelegate>
{
    _Bool _loaded;
    id <SPTYourLibraryMusicContentFilterDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    unsigned long long _type;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    NSDictionary *_currentResponseData;
    NSNumber *_downloadFiltersAvailable;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionSubscriptionToken;
}

+ (id)filterRuleWithName:(id)arg1 query:(id)arg2;
+ (id)serviceURL;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionSubscriptionToken; // @synthesize collectionSubscriptionToken=_collectionSubscriptionToken;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSNumber *downloadFiltersAvailable; // @synthesize downloadFiltersAvailable=_downloadFiltersAvailable;
@property(copy, nonatomic) NSDictionary *currentResponseData; // @synthesize currentResponseData=_currentResponseData;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicContentFilterDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)storeCurrenResponseData;
- (void)storeDownloadFiltersAvailability;
- (void)loadLocallyStoredState;
- (void)notifyDelegate;
- (id)filtersFromResponseData:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)requestContentFilters;
- (void)setupDownloadFilterManagement;
- (void)loadContentFilters;
- (id)initWithDataLoader:(id)arg1 collectionPlatform:(id)arg2 type:(unsigned long long)arg3 testManager:(id)arg4 productState:(id)arg5 localSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


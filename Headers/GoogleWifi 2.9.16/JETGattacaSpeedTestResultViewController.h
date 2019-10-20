//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "JETCustomContextMenuProvider-Protocol.h"

@class JETAccessibilityAnnouncer, JETButtonFooter, JETGattacaSpeedTestHeaderContentViewObject, JETInsightsDataCache, NSDictionary, NSTimer;

@interface JETGattacaSpeedTestResultViewController : JETGroupAwareCollectionViewController <JETCustomContextMenuProvider>
{
    _Bool _revealFinished;
    JETAccessibilityAnnouncer *_accessibilityAnnouncer;
    struct NSDictionary *_speedTestResult;
    JETInsightsDataCache *_insightsDataCache;
    long long _revealedItemCount;
    NSTimer *_itemRevealTimer;
    JETButtonFooter *_buttonFooter;
    JETGattacaSpeedTestHeaderContentViewObject *_headerObject;
}

@property(nonatomic) __weak JETGattacaSpeedTestHeaderContentViewObject *headerObject; // @synthesize headerObject=_headerObject;
@property(nonatomic) __weak JETButtonFooter *buttonFooter; // @synthesize buttonFooter=_buttonFooter;
@property(nonatomic) _Bool revealFinished; // @synthesize revealFinished=_revealFinished;
@property(retain, nonatomic) NSTimer *itemRevealTimer; // @synthesize itemRevealTimer=_itemRevealTimer;
@property(nonatomic) long long revealedItemCount; // @synthesize revealedItemCount=_revealedItemCount;
@property(retain, nonatomic) JETInsightsDataCache *insightsDataCache; // @synthesize insightsDataCache=_insightsDataCache;
@property(retain, nonatomic) NSDictionary *speedTestResult; // @synthesize speedTestResult=_speedTestResult;
@property(retain, nonatomic) JETAccessibilityAnnouncer *accessibilityAnnouncer; // @synthesize accessibilityAnnouncer=_accessibilityAnnouncer;
- (void).cxx_destruct;
- (void)addCustomContextMenuActionsToActionSheet:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)redoTest;
- (void)closeButtonTapped;
- (void)revealItem;
- (long long)totalItemCount;
- (void)constructModel;
- (void)addItemsForEmptyAPs;
- (void)addItemsForAPWithID:(id)arg1 results:(id)arg2 isAnimatingAP:(_Bool)arg3;
- (id)headerItemForAccessPoint:(id)arg1;
- (void)updateHeaderToResult:(id)arg1;
- (id)resultItemForStation:(id)arg1 testResult:(id)arg2;
- (id)noDevicesWereFoundItem;
- (void)updateHeaderToNoResultsForAccessPointName:(id)arg1;
- (id)speedColorForMBPS:(long long)arg1;
- (id)accessibilityLabelForMBPS:(long long)arg1 deviceName:(id)arg2 deviceType:(id)arg3;
- (id)speedStringForMBPS:(long long)arg1;
- (void)showInfoDialogForSpeedTestResult:(id)arg1 name:(id)arg2;
- (id)bandwidthToDisplay:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 speedTestResult:(struct NSDictionary *)arg3;

@end


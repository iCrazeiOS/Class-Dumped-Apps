//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCollectionViewItemProtocol-Protocol.h"

@class IESLiveGiftPanelDataSharing, NSArray, NSString, RACCommand;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftTabListItem : NSObject <IESLiveCollectionViewItemProtocol>
{
    _Bool _enable;
    Class _cellClass;
    id <IESLiveGiftPanelReaction> _reaction;
    NSArray *_collectionVMs;
    unsigned long long _currentPageType;
    RACCommand *_changeSelectionCmd;
    CDUnknownBlockType _updateGiftListTabs;
    CDUnknownBlockType _changeSelectTabFromGiftList;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing; // @synthesize giftPanelDataSharing=_giftPanelDataSharing;
@property(copy, nonatomic) CDUnknownBlockType changeSelectTabFromGiftList; // @synthesize changeSelectTabFromGiftList=_changeSelectTabFromGiftList;
@property(copy, nonatomic) CDUnknownBlockType updateGiftListTabs; // @synthesize updateGiftListTabs=_updateGiftListTabs;
@property(readonly, nonatomic) RACCommand *changeSelectionCmd; // @synthesize changeSelectionCmd=_changeSelectionCmd;
@property(readonly, nonatomic) unsigned long long currentPageType; // @synthesize currentPageType=_currentPageType;
@property(readonly, nonatomic) NSArray *collectionVMs; // @synthesize collectionVMs=_collectionVMs;
@property(nonatomic) __weak id <IESLiveGiftPanelReaction> reaction; // @synthesize reaction=_reaction;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void).cxx_destruct;
- (void)didGiftPanelCollectionVMsUpdate;
- (void)changeTabWithIndex:(unsigned long long)arg1;
- (id)initWithGiftPanelDataSharing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RACCommand *didSelectItemCommand;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDelegateSCATMenuLayout-Protocol.h"

@class NSString, SCATModernMenuSheet, UIImage;

@interface SCATModernMenuSheetCollectionViewController : UICollectionViewController <UICollectionViewDelegateSCATMenuLayout>
{
    SCATModernMenuSheet *_menuSheet;
    unsigned long long _visibleItemOffset;
    Class _collectionViewCellClass;
    UIImage *_defaultBackgroundImage;
    UIImage *_pressedBackgroundImage;
    UIImage *_dimmedBackgroundImage;
}

@property(retain, nonatomic) UIImage *dimmedBackgroundImage; // @synthesize dimmedBackgroundImage=_dimmedBackgroundImage;
@property(retain, nonatomic) UIImage *pressedBackgroundImage; // @synthesize pressedBackgroundImage=_pressedBackgroundImage;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(nonatomic) Class collectionViewCellClass; // @synthesize collectionViewCellClass=_collectionViewCellClass;
@property(nonatomic) unsigned long long visibleItemOffset; // @synthesize visibleItemOffset=_visibleItemOffset;
@property(nonatomic) SCATModernMenuSheet *menuSheet; // @synthesize menuSheet=_menuSheet;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemTitleTextAtIndexPath:(id)arg1 withMaxSize:(struct CGSize)arg2;
- (id)titleTextForItemAtIndexPath:(id)arg1;
- (id)menuSheetForCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadCollectionView;
- (void)adjustVisibleItemOffsetForPageBoundary;
- (void)showMoreItemsButtonWasActivated;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


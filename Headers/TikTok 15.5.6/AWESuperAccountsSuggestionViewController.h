//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWESuperAccountsSuggestionContainerView, AWESuperAccountsSuggestionResponseModel, NSString, UICollectionView;

@interface AWESuperAccountsSuggestionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEUserMessage>
{
    _Bool _isVisible;
    _Bool _needReload;
    _Bool _followActionExecuting;
    _Bool _isRequestOnAir;
    AWESuperAccountsSuggestionResponseModel *_response;
    UICollectionView *_collectionView;
    AWESuperAccountsSuggestionContainerView *_containerView;
    id _resignActiveObserver;
    id _becomeActiveObserver;
}

@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(retain, nonatomic) id becomeActiveObserver; // @synthesize becomeActiveObserver=_becomeActiveObserver;
@property(retain, nonatomic) id resignActiveObserver; // @synthesize resignActiveObserver=_resignActiveObserver;
@property(retain, nonatomic) AWESuperAccountsSuggestionContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool followActionExecuting; // @synthesize followActionExecuting=_followActionExecuting;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) AWESuperAccountsSuggestionResponseModel *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)p_trackFollowCardEvent:(id)arg1 user:(id)arg2 index:(long long)arg3;
- (void)p_gotoUserProfile:(id)arg1 index:(long long)arg2;
- (void)p_reloadCollectionViewForFollowStatusIfNeeded;
- (void)p_updateFollowStatusForUser:(id)arg1 status:(long long)arg2;
- (void)p_unfollowWithCell:(id)arg1;
- (void)p_followWithCell:(id)arg1;
- (void)p_play;
- (void)p_pause;
- (void)p_deleteCell:(id)arg1;
- (void)p_removeObserver;
- (void)p_addObserver;
- (id)p_setupUI;
- (void)handleConnectionChanged:(id)arg1;
- (void)pauseIfNeeded;
- (void)refreshSuggestionCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


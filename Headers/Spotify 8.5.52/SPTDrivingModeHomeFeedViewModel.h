//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeHomeFeedListObserver-Protocol.h"

@class NSArray, NSString, SPTDrivingModeCarModePlayer, SPTDrivingModeHomeFeedList;
@protocol SPTDrivingModeHomeFeedViewModelDelegate;

@interface SPTDrivingModeHomeFeedViewModel : NSObject <SPTDrivingModeHomeFeedListObserver>
{
    NSArray *_shelves;
    id <SPTDrivingModeHomeFeedViewModelDelegate> _delegate;
    SPTDrivingModeCarModePlayer *_carModePlayer;
    SPTDrivingModeHomeFeedList *_homeFeedList;
}

@property(readonly, nonatomic) SPTDrivingModeHomeFeedList *homeFeedList; // @synthesize homeFeedList=_homeFeedList;
@property(readonly, nonatomic) SPTDrivingModeCarModePlayer *carModePlayer; // @synthesize carModePlayer=_carModePlayer;
@property(nonatomic) __weak id <SPTDrivingModeHomeFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *shelves; // @synthesize shelves=_shelves;
- (void).cxx_destruct;
- (void)updateStateForItem:(id)arg1;
- (void)playContextURI:(id)arg1;
- (void)homeFeedListDidUpdate:(id)arg1;
- (id)shelfAtIndex:(int)arg1;
- (void)viewWillBeDismissed;
- (void)viewWillBePresented;
- (id)initWithHomeFeedList:(id)arg1 carModePlayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


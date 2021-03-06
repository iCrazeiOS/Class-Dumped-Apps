//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETiktokDiscoverV4ImageCollectionViewCell.h"

#import "AWEDemaciaPlayerViewDelegate-Protocol.h"
#import "AWETiktokDiscoverV4ModelRenderable-Protocol.h"
#import "AWETiktokDiscoverV4VisiableObserver-Protocol.h"

@class AWETiktokDiscoverV4CellModel, AWETiktokDiscoverV4PlayerView, NSString;

@interface AWETiktokDiscoverV4VideoCollectionViewCell : AWETiktokDiscoverV4ImageCollectionViewCell <AWEDemaciaPlayerViewDelegate, AWETiktokDiscoverV4ModelRenderable, AWETiktokDiscoverV4VisiableObserver>
{
    AWETiktokDiscoverV4PlayerView *_playerView;
    AWETiktokDiscoverV4CellModel *_model;
}

@property(retain, nonatomic) AWETiktokDiscoverV4CellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWETiktokDiscoverV4PlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (id)convertAwemeModel:(id)arg1;
- (id)generateBasicTrackParams;
- (void)renderWithDiscoverModel:(id)arg1;
- (void)cellWillDisplay;
- (void)cellDidEndDisplay;
- (void)viewControllerDidDisappear;
- (void)viewControllerDidAppear;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


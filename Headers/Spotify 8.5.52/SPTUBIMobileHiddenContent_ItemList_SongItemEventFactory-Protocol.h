//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileHiddenContent_ItemList_SongItem_AlbumCoverEventFactory, SPTUBIMobileHiddenContent_ItemList_SongItem_BanButtonEventFactory;

@protocol SPTUBIMobileHiddenContent_ItemList_SongItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitPauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobileHiddenContent_ItemList_SongItem_BanButtonEventFactory>)banButtonFactory;
- (id <SPTUBIMobileHiddenContent_ItemList_SongItem_AlbumCoverEventFactory>)albumCoverFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end


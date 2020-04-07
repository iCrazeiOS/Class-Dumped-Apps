//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchOfflinePlaylistDataLoader-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTSearchOfflinePlaylistDataLoaderImplementation : NSObject <SPTSearchOfflinePlaylistDataLoader>
{
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
- (void).cxx_destruct;
- (CDUnknownBlockType)itemToPlaylistBlock;
- (void)fetchPlaylistsForQuery:(id)arg1 limit:(unsigned long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)initWithPlaylistPlatformPlaylistDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


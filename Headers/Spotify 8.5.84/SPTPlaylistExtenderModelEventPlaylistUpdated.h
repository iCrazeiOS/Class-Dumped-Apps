//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSString;

@interface SPTPlaylistExtenderModelEventPlaylistUpdated : NSObject <SPTPlaylistExtenderModelEvent>
{
    NSString *_playlistName;
    unsigned long long _playlistTrackCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long playlistTrackCount; // @synthesize playlistTrackCount=_playlistTrackCount;
@property(readonly, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithPlaylistName:(id)arg1 playlistTrackCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


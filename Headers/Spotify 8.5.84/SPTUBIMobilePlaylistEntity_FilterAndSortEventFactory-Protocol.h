//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobilePlaylistEntity_FilterAndSort_CancelTextFilterButtonEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_DismissEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_FilterOptionEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_FilterOrSortOptionButtonEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_SortOptionEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_TextFilterClearButtonEventFactory, SPTUBIMobilePlaylistEntity_FilterAndSort_TextFilterEventFactory;

@protocol SPTUBIMobilePlaylistEntity_FilterAndSortEventFactory <NSObject>
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_CancelTextFilterButtonEventFactory>)cancelTextFilterButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_TextFilterClearButtonEventFactory>)textFilterClearButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_TextFilterEventFactory>)textFilterFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_DismissEventFactory>)dismissFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_FilterOrSortOptionButtonEventFactory>)filterOrSortOptionButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_FilterOptionEventFactory>)filterOptionFactory;
- (id <SPTUBIMobilePlaylistEntity_FilterAndSort_SortOptionEventFactory>)sortOptionFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end


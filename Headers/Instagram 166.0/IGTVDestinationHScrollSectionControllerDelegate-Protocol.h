//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGMedia, IGStoryTrayViewModel, IGTVDestinationHScrollSectionController, IGTVDestinationVideoPosition, NSArray, NSString;
@protocol IGTVChannelDataSourceType;

@protocol IGTVDestinationHScrollSectionControllerDelegate <NSObject>
- (void)destinationHScrollSectionController:(IGTVDestinationHScrollSectionController *)arg1 didTapChannelDataSource:(id <IGTVChannelDataSourceType>)arg2 fromComponent:(long long)arg3;
- (void)destinationHScrollSectionController:(IGTVDestinationHScrollSectionController *)arg1 didTapTrayItem:(IGStoryTrayViewModel *)arg2 availableTrayItems:(NSArray *)arg3 fromComponent:(long long)arg4 withChannelDataSource:(id <IGTVChannelDataSourceType>)arg5 videoPosition:(IGTVDestinationVideoPosition *)arg6;
- (void)destinationHScrollSectionController:(IGTVDestinationHScrollSectionController *)arg1 didLongPressFeedItem:(IGMedia *)arg2 fromComponent:(long long)arg3 withSourceChannelType:(NSString *)arg4 videoPosition:(IGTVDestinationVideoPosition *)arg5;
- (void)destinationHScrollSectionController:(IGTVDestinationHScrollSectionController *)arg1 didTapFeedItem:(IGMedia *)arg2 fromComponent:(long long)arg3 withChannelDataSource:(id <IGTVChannelDataSourceType>)arg4 videoPosition:(IGTVDestinationVideoPosition *)arg5;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, YTIFormattedString, YTIThumbnailDetails, YTOfflinePlaylist;

@protocol YTLinkViewModel <NSObject>
- (_Bool)useButtonStyle;
- (YTOfflinePlaylist *)offlinePlaylist;
- (YTIFormattedString *)yt_secondaryNotificationText;
- (YTIFormattedString *)subTitleText;
- (YTIFormattedString *)titleText;
- (UIImage *)iconWithStyleContext:(NSString *)arg1;
- (YTIThumbnailDetails *)thumbnailDetails;

@optional
- (UIImage *)secondaryIconImage;
@end


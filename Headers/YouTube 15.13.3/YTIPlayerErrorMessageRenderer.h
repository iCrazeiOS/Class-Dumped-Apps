//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIButtonSupportedRenderers, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIPlayerErrorMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLearnMore; // @dynamic hasLearnMore;
@property(nonatomic) _Bool hasProceedButton; // @dynamic hasProceedButton;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasSubreason; // @dynamic hasSubreason;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIFormattedString *learnMore; // @dynamic learnMore;
@property(retain, nonatomic) YTIButtonSupportedRenderers *proceedButton; // @dynamic proceedButton;
@property(retain, nonatomic) YTIFormattedString *reason; // @dynamic reason;
@property(retain, nonatomic) YTIFormattedString *subreason; // @dynamic subreason;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end


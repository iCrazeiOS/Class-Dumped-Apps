//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTIRenderer;

@interface YTICreatePlaylistDialogRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *cancelButton; // @dynamic cancelButton;
@property(retain, nonatomic) YTIRenderer *createButton; // @dynamic createButton;
@property(retain, nonatomic) YTIFormattedString *dialogTitle; // @dynamic dialogTitle;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasCreateButton; // @dynamic hasCreateButton;
@property(nonatomic) _Bool hasDialogTitle; // @dynamic hasDialogTitle;
@property(nonatomic) _Bool hasPrivacyOption; // @dynamic hasPrivacyOption;
@property(nonatomic) _Bool hasPrivacyStatus; // @dynamic hasPrivacyStatus;
@property(nonatomic) _Bool hasTitlePlaceholder; // @dynamic hasTitlePlaceholder;
@property(retain, nonatomic) YTIRenderer *privacyOption; // @dynamic privacyOption;
@property(nonatomic) int privacyStatus; // @dynamic privacyStatus;
@property(copy, nonatomic) NSString *titlePlaceholder; // @dynamic titlePlaceholder;

@end


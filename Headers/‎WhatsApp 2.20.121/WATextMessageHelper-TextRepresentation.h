//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATextMessageHelper.h>

@interface WATextMessageHelper (TextRepresentation)
+ (id)formattedStringWithVoiceOverContentOnlyForMessageProtocol:(id)arg1;
+ (id)attributedTextForMessageProtocol:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1 groupParticipantOnly:(_Bool)arg2;
+ (id)stringRepresentationForReplyForMessage:(id)arg1;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2;
+ (void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
@end


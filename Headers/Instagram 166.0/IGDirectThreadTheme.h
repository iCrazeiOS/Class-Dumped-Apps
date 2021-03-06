//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectThreadTheme : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)_themeByResolvingInterfaceStyle:(unsigned long long)arg1 composerTheme:(id)arg2 navigationBarTheme:(id)arg3 emphasisColor:(id)arg4 emphasisColorInstructions:(id)arg5 solidSeparatorColor:(id)arg6 incomingMessageBorderColor:(id)arg7 outgoingMessageBorderColor:(id)arg8 primaryTextColor:(id)arg9 secondaryTextColor:(id)arg10 threadBackgroundColor:(id)arg11 navigationBarTintColor:(id)arg12 reactionPillColor:(id)arg13 shhModeInterleavedBackgroundColor:(id)arg14 incomingMessageBubbleTheme:(id)arg15 outgoingMessageBubbleTheme:(id)arg16 coveredIncomingMessageBubbleTheme:(id)arg17 outgoingMessageColoredBubbleTheme:(id)arg18 quotedIncomingMessageBubbleTheme:(id)arg19 quotedOutgoingMessageBubbleTheme:(id)arg20 unseenMessageBubbleTheme:(id)arg21 nonMessageCellTheme:(id)arg22 applyEmphasisColorInstructionsTintToUnseenVMIcon:(_Bool)arg23 applyEmphasisColorBorderToUnseenKeepInChatMessage:(_Bool)arg24 canDisplayBorderOnVisualMessageTombstones:(_Bool)arg25 bubbleCornerRadius:(double)arg26 groupedBubbleCornerRadius:(double)arg27 threadBackgroundImageSpecifier:(id)arg28;
+ (id)themeForShhModeWithFeatureGating:(id)arg1 overrides:(id)arg2;
+ (id)themeForFeatureGating:(id)arg1 overrides:(id)arg2;

@end


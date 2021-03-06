//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YCHLiveChatFadingCell.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>

@class NSString, UILabel, YCHLiveChatLabel, YTIAddChatItemAction, YTILiveChatModerationMessageRenderer;
@protocol YTResponder;

@interface YCHLiveChatOverlayModerationCell : YCHLiveChatFadingCell <YTCollectionViewCellProtocol>
{
    UILabel *_timeLabel;
    YCHLiveChatLabel *_messageLabel;
    YTIAddChatItemAction *_addChatItemAction;
    YTILiveChatModerationMessageRenderer *_moderationMessageRenderer;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) YTILiveChatModerationMessageRenderer *moderationMessageRenderer; // @synthesize moderationMessageRenderer=_moderationMessageRenderer;
@property(readonly, nonatomic) YTIAddChatItemAction *addChatItemAction; // @synthesize addChatItemAction=_addChatItemAction;
@property(readonly, nonatomic) YCHLiveChatLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)containerBackgroundColor;
- (double)containerRightCornerRadius;
- (double)containerLeftCornerRadius;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end


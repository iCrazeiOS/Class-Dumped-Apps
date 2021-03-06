//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer;

@protocol IESLiveMTMessageListRouter <NSObject>
- (struct CGPoint)currentTransformOffset;
- (void)transformWithOffset:(struct CGPoint)arg1;
- (void)reloadMessageListView:(_Bool)arg1;
- (void)notifyGiftMaskView;
- (_Bool)getGiftMaskViewStatus;
- (CALayer *)messageListLayer;
- (void)scrollToMessageListBottom;
- (void)hideMessageListView;
- (void)showMessageListView;
@end


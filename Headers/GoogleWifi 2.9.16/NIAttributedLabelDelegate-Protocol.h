//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIAttributedLabel, NSTextCheckingResult, UIActionSheet;

@protocol NIAttributedLabelDelegate <NSObject>

@optional
- (_Bool)attributedLabel:(NIAttributedLabel *)arg1 shouldPresentActionSheet:(UIActionSheet *)arg2 withTextCheckingResult:(NSTextCheckingResult *)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabel:(NIAttributedLabel *)arg1 didSelectTextCheckingResult:(NSTextCheckingResult *)arg2 atPoint:(struct CGPoint)arg3;
@end


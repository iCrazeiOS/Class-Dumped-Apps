//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TFNMenuSupport <NSObject>
@property(readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithActionItems:(NSArray *)arg1;
- (void)populateMenuWithTitle:(NSString *)arg1 actionItems:(NSArray *)arg2;
- (void)prepareToDisplayMenuOnPrimaryAction;

@optional
@property(readonly, copy, nonatomic) CDUnknownBlockType willDisplayMenuOnPrimaryActionBlock;
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(_Bool (^)(void))arg1;
@end


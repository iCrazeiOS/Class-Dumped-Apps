//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWESimplifiedStickerContainerViewDelegate-Protocol.h"

@class AWEEditorStickerGestureViewController, AWEPinStickerViewControllerInputData, AWESimplifiedStickerContainerView, AWEStickerEditBaseView, NSDictionary, NSNumber, NSString, UIImageView, UIView;

@interface ACCPinStickerPlayer : NSObject <AWESimplifiedStickerContainerViewDelegate>
{
    AWEPinStickerViewControllerInputData *_inputData;
    UIView *_playerContainer;
    UIImageView *_interactionImageView;
    AWESimplifiedStickerContainerView *_stickerContainerView;
    AWEEditorStickerGestureViewController *_stickerGestureController;
    NSNumber *_selectedStickerEditid;
    CDUnknownBlockType _activeStickerBlock;
    AWEStickerEditBaseView *_selectedStickerView;
    NSString *_currentStickerIds;
    NSDictionary *_initialStickerInfoDict;
    NSDictionary *_initialStickerSizeDict;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *initialStickerSizeDict; // @synthesize initialStickerSizeDict=_initialStickerSizeDict;
@property(copy, nonatomic) NSDictionary *initialStickerInfoDict; // @synthesize initialStickerInfoDict=_initialStickerInfoDict;
@property(copy, nonatomic) NSString *currentStickerIds; // @synthesize currentStickerIds=_currentStickerIds;
@property(retain, nonatomic) AWEStickerEditBaseView *selectedStickerView; // @synthesize selectedStickerView=_selectedStickerView;
@property(copy, nonatomic) CDUnknownBlockType activeStickerBlock; // @synthesize activeStickerBlock=_activeStickerBlock;
@property(retain, nonatomic) NSNumber *selectedStickerEditid; // @synthesize selectedStickerEditid=_selectedStickerEditid;
@property(retain, nonatomic) AWEEditorStickerGestureViewController *stickerGestureController; // @synthesize stickerGestureController=_stickerGestureController;
@property(retain, nonatomic) AWESimplifiedStickerContainerView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(retain, nonatomic) UIImageView *interactionImageView; // @synthesize interactionImageView=_interactionImageView;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(retain, nonatomic) AWEPinStickerViewControllerInputData *inputData; // @synthesize inputData=_inputData;
- (void)cancelPinSticker:(long long)arg1;
- (_Bool)activeSticker:(long long)arg1;
- (void)setSticker:(long long)arg1 offsetX:(double)arg2 offsetY:(double)arg3 angle:(double)arg4 scale:(double)arg5;
- (id)allStickerViews;
- (id)player;
- (id)contentView;
- (void)p_unHilightStickerExceptStickerId:(long long)arg1;
- (void)p_hilightStickerWithStickerId:(long long)arg1;
- (id)p_createStickerInfoWithInfo:(id)arg1;
- (void)p_recoverStickerView;
- (void)p_setupContainerViewAndGestureVC;
- (void)p_recoverStickersAlpha;
- (void)restoreViewToOriginalState;
- (void)setPlayerContainerFrame:(struct CGRect)arg1 content:(id)arg2;
- (void)configWhenContainerWillDisappear;
- (void)configWhenContainerDidAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


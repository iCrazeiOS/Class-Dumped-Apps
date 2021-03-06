//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IESLiveCollectionViewCellProtocol-Protocol.h"

@class IESLiveGiftPanelCloseItem, NSString, UIButton, UIImageView;
@protocol IESLiveEnvironment;

@interface IESLiveGiftPanelCloseCell : UICollectionViewCell <IESLiveCollectionViewCellProtocol>
{
    IESLiveGiftPanelCloseItem *_item;
    UIButton *_closeButton;
    UIImageView *_closeImageView;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IESLiveGiftPanelCloseItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)didCloseButtonClicked:(id)arg1;
- (void)loadCloseSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


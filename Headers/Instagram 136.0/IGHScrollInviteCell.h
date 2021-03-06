//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGFBUser, IGMediaThumbnailView, IGTextButton, UIButton, UILabel, UIView;
@protocol IGHScrollInviteCellDelegate;

@interface IGHScrollInviteCell : UICollectionViewCell
{
    _Bool _isInvited;
    id <IGHScrollInviteCellDelegate> _delegate;
    IGMediaThumbnailView *_profilePictureView;
    UILabel *_nameLabel;
    UIButton *_dismissButton;
    IGTextButton *_inviteButton;
    UIView *_cardBackgroundView;
    IGFBUser *_fbUser;
}

+ (double)defaulCellWidthWithConstrainedWidth:(double)arg1;
+ (double)defaulCellHeight;
@property(readonly, nonatomic) IGFBUser *fbUser; // @synthesize fbUser=_fbUser;
@property(readonly, nonatomic) UIView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(readonly, nonatomic) IGTextButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) IGMediaThumbnailView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) __weak id <IGHScrollInviteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInvited; // @synthesize isInvited=_isInvited;
- (void).cxx_destruct;
- (void)_layoutInviteButton;
- (void)_didTapDismissButton;
- (void)_didTapInviteButton;
- (void)configureCellWithFBUserInfo:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


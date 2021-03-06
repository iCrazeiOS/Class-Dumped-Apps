//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEBillboardLabel, AWEGeneralSearchModel, AWESearchUser, AWESearchUserFollowButton, UIImageView, UILabel;
@protocol AWEFeedLiveMarkViewProtocol, AWELiveStoryBrowserTagViewProtocol, AWESearchTopUserDelegate;

@interface AWEGeneralTopUserView : UIView
{
    id <AWESearchTopUserDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_infoLabel;
    UILabel *_fansLabel;
    AWESearchUser *_topUserModel;
    UIView *_userView;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    UIImageView *_verifyImageView;
    UILabel *_nameLabel;
    AWEBillboardLabel *_starNameLabel;
    UIImageView *_recommendImageView;
    UILabel *_recommendReasonLabel;
    AWESearchUserFollowButton *_followButton;
    UILabel *_linkLabel;
    UIImageView *_linkImage;
    UIView *_linkView;
    UIView *_headerView;
    UIView<AWELiveStoryBrowserTagViewProtocol> *_tagView;
    AWEGeneralSearchModel *_searchModel;
    UIView *_dividingLine;
}

+ (double)heightForModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UIView<AWELiveStoryBrowserTagViewProtocol> *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UIImageView *linkImage; // @synthesize linkImage=_linkImage;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) AWESearchUserFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) AWEBillboardLabel *starNameLabel; // @synthesize starNameLabel=_starNameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *verifyImageView; // @synthesize verifyImageView=_verifyImageView;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) UIView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) AWESearchUser *topUserModel; // @synthesize topUserModel=_topUserModel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <AWESearchTopUserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dividingLineColor;
- (id)verifyImageName;
- (_Bool)shouldSetTagViewBorder;
- (double)nameLabelTopOffset:(id)arg1;
- (id)fansLabelText:(id)arg1 userModel:(id)arg2;
- (id)fansLabelPrefix;
- (void)configFansAndInfoLabelColor:(id)arg1;
- (void)configFansAndInfoLabelText:(id)arg1;
- (void)configNameLabel:(id)arg1;
- (id)bgColor;
- (void)trackAdShow;
- (void)onLinkViewTapped;
- (void)onUserViewTapped;
- (void)onArrowButtonTapped;
- (void)onFollowButtonTapped;
- (void)onAvatarImageTapped;
- (void)updateFollowStatus:(long long)arg1;
- (void)addHightlightWithAttributeString:(id)arg1 prefixLength:(long long)arg2 positions:(id)arg3 unHighlightTextColor:(id)arg4;
- (void)addHightlightWithAttributeString:(id)arg1 prefixLength:(long long)arg2 positions:(id)arg3;
- (void)addDividingLine;
- (void)configureLinkDataWithSearchModel:(id)arg1;
- (void)configureLinkViewIfNeeded;
- (void)configureUserView:(id)arg1;
- (void)configureHeaderView;
- (void)configureUserViewWithSearchModel:(id)arg1;
- (id)init;
- (id)dividingLineColor;
- (id)verifyImageName;
- (_Bool)shouldSetTagViewBorder;
- (double)nameLabelTopOffset:(id)arg1;
- (id)fansLabelText:(id)arg1 userModel:(id)arg2;
- (id)fansLabelPrefix;
- (void)configFansAndInfoLabelColor:(id)arg1;
- (void)configFansAndInfoLabelText:(id)arg1;
- (void)configNameLabel:(id)arg1;
- (id)bgColor;

@end


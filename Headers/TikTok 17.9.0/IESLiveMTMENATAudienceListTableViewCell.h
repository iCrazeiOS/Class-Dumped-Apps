//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTSLiveAvatarImageView, IESLiveMTAudienceModel, IESLiveUserModel, UIButton, UILabel;
@protocol IESLiveMTAudienceListActions, IESLiveRoomService, IESLiveUserService;

@interface IESLiveMTMENATAudienceListTableViewCell : UITableViewCell
{
    long long _followButtonShowCount;
    UILabel *_rankLabel;
    HTSLiveAvatarImageView *_avatorImage;
    UILabel *_nameLabel;
    UILabel *_coinLabel;
    UIButton *_followButton;
    IESLiveMTAudienceModel *_model;
    id <IESLiveUserService> _userService;
    IESLiveUserModel *_currentUser;
    id <IESLiveRoomService> _roomService;
    id <IESLiveMTAudienceListActions> _actionCreator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTAudienceListActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) IESLiveUserModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) IESLiveMTAudienceModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *coinLabel; // @synthesize coinLabel=_coinLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) HTSLiveAvatarImageView *avatorImage; // @synthesize avatorImage=_avatorImage;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) long long followButtonShowCount; // @synthesize followButtonShowCount=_followButtonShowCount;
- (void)playAnimationOnButton:(id)arg1;
- (void)follow;
- (_Bool)shouldHideFollow:(id)arg1;
- (void)setFollowButtonVisiable:(id)arg1 isAnchor:(_Bool)arg2;
- (void)updateWithModel:(id)arg1 isAnchor:(_Bool)arg2;
- (void)p_setupLayout;
- (void)pr_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


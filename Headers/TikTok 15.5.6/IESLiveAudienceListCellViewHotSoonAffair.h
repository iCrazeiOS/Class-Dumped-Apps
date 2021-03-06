//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveAudienceListCellViewAffair-Protocol.h"

@class HTSLiveAvatarImageView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface IESLiveAudienceListCellViewHotSoonAffair : NSObject <IESLiveAudienceListCellViewAffair>
{
    UIView *_contentView;
    UIView *_rankView;
    UILabel *_rankLabel;
    UIImageView *_medalImageView;
    HTSLiveAvatarImageView *_avatorImageView;
    UILabel *_nameLabel;
    UILabel *_firePowerLabel;
    UIImageView *_honorLevelIcon;
    UIImageView *_fansClubIcon;
    UIButton *_followButton;
    long long _rankType;
    long long _followButtonShowCount;
}

@property(nonatomic) long long followButtonShowCount; // @synthesize followButtonShowCount=_followButtonShowCount;
@property(nonatomic) long long rankType; // @synthesize rankType=_rankType;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIImageView *fansClubIcon; // @synthesize fansClubIcon=_fansClubIcon;
@property(retain, nonatomic) UIImageView *honorLevelIcon; // @synthesize honorLevelIcon=_honorLevelIcon;
@property(retain, nonatomic) UILabel *firePowerLabel; // @synthesize firePowerLabel=_firePowerLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) HTSLiveAvatarImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIImageView *medalImageView; // @synthesize medalImageView=_medalImageView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIView *rankView; // @synthesize rankView=_rankView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)updateModelWith:(id)arg1;
- (void)pre_setupView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


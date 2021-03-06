//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCProfileAlias, NSString, SQPBCommonLocationGlobalAddress, UIImageView, UILabel, _TtC10UIControls29RotatingActivityIndicatorView;

@interface SCProfileSettingView : UIView
{
    _Bool _actionRequired;
    _Bool _toggleSelected;
    _Bool _toggleEnabled;
    _Bool _showActivityIndicator;
    NSString *_overrideTitle;
    CCProfileAlias *_alias;
    SQPBCommonLocationGlobalAddress *_address;
    unsigned long long _options;
    UILabel *_backgroundLabel;
    UIImageView *_leadingAccessoryImageView;
    UIImageView *_accessoryImageView;
    double _accessoryImageInsetAdjustment;
    UIView *_separatorView;
    _TtC10UIControls29RotatingActivityIndicatorView *_activityIndicatorView;
    NSString *_genericSelectableTitleText;
}

@property(copy, nonatomic) NSString *genericSelectableTitleText; // @synthesize genericSelectableTitleText=_genericSelectableTitleText;
@property(retain, nonatomic) _TtC10UIControls29RotatingActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double accessoryImageInsetAdjustment; // @synthesize accessoryImageInsetAdjustment=_accessoryImageInsetAdjustment;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UIImageView *leadingAccessoryImageView; // @synthesize leadingAccessoryImageView=_leadingAccessoryImageView;
@property(retain, nonatomic) UILabel *backgroundLabel; // @synthesize backgroundLabel=_backgroundLabel;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic, getter=isToggleEnabled) _Bool toggleEnabled; // @synthesize toggleEnabled=_toggleEnabled;
@property(nonatomic, getter=isToggleSelected) _Bool toggleSelected; // @synthesize toggleSelected=_toggleSelected;
@property(nonatomic, getter=isActionRequired) _Bool actionRequired; // @synthesize actionRequired=_actionRequired;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) SQPBCommonLocationGlobalAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) CCProfileAlias *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *overrideTitle; // @synthesize overrideTitle=_overrideTitle;
- (void).cxx_destruct;
- (void)_updateAccessoryImage;
- (struct CGRect)_separatorFrame;
- (id)_displayStringFromAddress:(id)arg1;
- (id)_backgroundLabelTitle;
- (id)_installedActivityIndicatorView;
- (id)_installedAccessoryImageView;
- (id)_installedBackgroundLabel;
@property(nonatomic) _Bool hasSeparator; // @dynamic hasSeparator;
- (void)layoutSubviews;
- (void)_commonInitializer;
- (id)initGenericSelectableStyleWithFrame:(struct CGRect)arg1 titleText:(id)arg2 leadingAccessoryImage:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 address:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 alias:(id)arg2 options:(unsigned long long)arg3;

@end


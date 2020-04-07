//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, SPTLoginInputFormViewStyle, SPTSignupTermsAndPolicyViewStyle, UIColor, UIFont;

@interface SPTSignupViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    SPTLoginInputFormViewStyle *_inputFormStyle;
    GLUEButtonStyle *_actionButtonStyle;
    double _titleTopMargin;
    double _displayNameTitleTopMargin;
    double _inputFormTopMargin;
    double _horizontalMargin;
    double _actionButtonTopMargin;
    UIColor *_stepTwoPickerButtonColor;
    UIFont *_stepTwoPickerButtonFont;
    double _displayNameTermsViewMargin;
    double _displayNameFormHeight;
    SPTSignupTermsAndPolicyViewStyle *_termsViewStyle;
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
}

@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
@property(copy, nonatomic) SPTSignupTermsAndPolicyViewStyle *termsViewStyle; // @synthesize termsViewStyle=_termsViewStyle;
@property(nonatomic) double displayNameFormHeight; // @synthesize displayNameFormHeight=_displayNameFormHeight;
@property(nonatomic) double displayNameTermsViewMargin; // @synthesize displayNameTermsViewMargin=_displayNameTermsViewMargin;
@property(copy, nonatomic) UIFont *stepTwoPickerButtonFont; // @synthesize stepTwoPickerButtonFont=_stepTwoPickerButtonFont;
@property(copy, nonatomic) UIColor *stepTwoPickerButtonColor; // @synthesize stepTwoPickerButtonColor=_stepTwoPickerButtonColor;
@property(nonatomic) double actionButtonTopMargin; // @synthesize actionButtonTopMargin=_actionButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double inputFormTopMargin; // @synthesize inputFormTopMargin=_inputFormTopMargin;
@property(nonatomic) double displayNameTitleTopMargin; // @synthesize displayNameTitleTopMargin=_displayNameTitleTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) SPTLoginInputFormViewStyle *inputFormStyle; // @synthesize inputFormStyle=_inputFormStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


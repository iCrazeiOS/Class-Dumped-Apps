//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, _TtC8Chipotle15NoMenuTextField;

@interface _TtC8Chipotle22FloatingLabelTextField : UIView
{
    // Error parsing type: , name: view
    // Error parsing type: , name: inputField
    // Error parsing type: , name: headerLabel
    // Error parsing type: , name: passwordToggleButton
    // Error parsing type: , name: inputFieldTrailingConstraint
    // Error parsing type: , name: underlineView
    // Error parsing type: , name: passwordErrorLabel
    // Error parsing type: , name: shouldShowError
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isFloated
    // Error parsing type: , name: hintText
    // Error parsing type: , name: passwordHintView
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: picker
}

- (void).cxx_destruct;
- (void)checkPasswordWithTextField:(id)arg1;
- (void)inputFieldEditingChanged:(id)arg1;
- (void)passwordToggleClicked:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UILabel *passwordErrorLabel; // @synthesize passwordErrorLabel;
@property(nonatomic) __weak UIView *underlineView; // @synthesize underlineView;
@property(nonatomic) __weak NSLayoutConstraint *inputFieldTrailingConstraint; // @synthesize inputFieldTrailingConstraint;
@property(nonatomic) __weak UIButton *passwordToggleButton; // @synthesize passwordToggleButton;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel;
@property(nonatomic) __weak _TtC8Chipotle15NoMenuTextField *inputField; // @synthesize inputField;
@property(nonatomic, retain) UIView *view; // @synthesize view;

@end


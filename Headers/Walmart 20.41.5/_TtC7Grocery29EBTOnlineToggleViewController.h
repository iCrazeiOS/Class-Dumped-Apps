//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Grocery25GroceryBaseViewController.h"

@class UIButton, UILabel, UIView, _TtC10CoreStyles18CoreTertiaryButton, _TtC7Grocery8Checkbox;

@interface _TtC7Grocery29EBTOnlineToggleViewController : _TtC7Grocery25GroceryBaseViewController
{
    // Error parsing type: , name: removeButton
    // Error parsing type: , name: ebtCardTitleLabel
    // Error parsing type: , name: ebtCardLabel
    // Error parsing type: , name: ebtPaymentCardLabel
    // Error parsing type: , name: ebtEnabledCheckbox
    // Error parsing type: , name: infoButton
    // Error parsing type: , name: seeBalanceButton
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)seeBalanceAction:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)infoButtonAction:(id)arg1;
- (void)didCheckWithEbtSwitch:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView;
@property(nonatomic) __weak _TtC10CoreStyles18CoreTertiaryButton *seeBalanceButton; // @synthesize seeBalanceButton;
@property(nonatomic) __weak UIButton *infoButton; // @synthesize infoButton;
@property(nonatomic) __weak _TtC7Grocery8Checkbox *ebtEnabledCheckbox; // @synthesize ebtEnabledCheckbox;
@property(nonatomic) __weak UILabel *ebtPaymentCardLabel; // @synthesize ebtPaymentCardLabel;
@property(nonatomic) __weak UILabel *ebtCardLabel; // @synthesize ebtCardLabel;
@property(nonatomic) __weak UILabel *ebtCardTitleLabel; // @synthesize ebtCardTitleLabel;
@property(nonatomic) __weak _TtC10CoreStyles18CoreTertiaryButton *removeButton; // @synthesize removeButton;

@end


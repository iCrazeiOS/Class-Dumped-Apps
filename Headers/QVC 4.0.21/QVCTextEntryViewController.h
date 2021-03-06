//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIButton, UILabel, UITextView, UIToolbar;
@protocol QVCTextEntryViewControllerDelegate;

@interface QVCTextEntryViewController : UIViewController <UITextViewDelegate>
{
    id <QVCTextEntryViewControllerDelegate> delegate;
    UITextView *theTextView;
    UILabel *placeHolderLabel;
    UIToolbar *inputAccessoryView;
    UIBarButtonItem *charCountButton;
    _Bool showCharCount;
    _Bool showClearButton;
    NSString *placeHolderText;
    UIButton *customLeftButton;
    UIButton *customRightButton;
    NSString *currentText;
    NSString *screenTitle;
    NSString *leftButtonTitle;
    NSString *rightButtonTitle;
    NSString *leftButtonImage;
    NSString *rightButtonImage;
    long long keyboardType;
    long long numRequiredChars;
}

- (void).cxx_destruct;
@property _Bool showClearButton; // @synthesize showClearButton;
@property long long numRequiredChars; // @synthesize numRequiredChars;
@property _Bool showCharCount; // @synthesize showCharCount;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType;
@property(retain, nonatomic) NSString *rightButtonImage; // @synthesize rightButtonImage;
@property(retain, nonatomic) NSString *leftButtonImage; // @synthesize leftButtonImage;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle;
@property(retain, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle;
@property(retain, nonatomic) NSString *screenTitle; // @synthesize screenTitle;
@property(retain, nonatomic) NSString *currentText; // @synthesize currentText;
@property(retain, nonatomic) UIButton *customRightButton; // @synthesize customRightButton;
@property(retain, nonatomic) UIButton *customLeftButton; // @synthesize customLeftButton;
@property(retain, nonatomic) UIBarButtonItem *charCountButton; // @synthesize charCountButton;
@property(retain, nonatomic) UIToolbar *inputAccessoryView; // @synthesize inputAccessoryView;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText;
@property(retain, nonatomic) UITextView *theTextView; // @synthesize theTextView;
@property(nonatomic) id <QVCTextEntryViewControllerDelegate> delegate; // @synthesize delegate;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (void)addRightButton;
- (void)addLeftButton;
- (void)addCustomButtons;
- (void)clearButtonPressed;
- (void)updateCharCount;
- (_Bool)isValidString:(id)arg1;
- (_Bool)isLongEnough;
- (void)notLongEnough;
- (void)dismissAndInformDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


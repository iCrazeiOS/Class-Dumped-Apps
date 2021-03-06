//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PSPDFButton, PSPDFCheckbox;

@interface PSPDFLabeledCheckbox : UIView
{
    PSPDFCheckbox *_checkbox;
    PSPDFButton *_button;
}

@property(retain, nonatomic) PSPDFButton *button; // @synthesize button=_button;
@property(retain, nonatomic) PSPDFCheckbox *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;
- (void)updateButton;
- (void)checkboxTouchDown;
- (void)saveLabelButtonTouchCancelled:(id)arg1;
- (void)saveLabelButtonTouchUp:(id)arg1;
- (void)saveLabelButtonTouchDown:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)updateColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)setupCheckbox:(id)arg1 button:(id)arg2 size:(double)arg3;
- (id)initWithTitle:(id)arg1 checkboxSize:(double)arg2;

@end


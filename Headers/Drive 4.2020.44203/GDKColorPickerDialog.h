//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/MDCAlertController.h>

#import "GDKColorPickerVCDelegate-Protocol.h"
#import "GDKThemable-Protocol.h"

@class GDKColorPickerVC, GDKTheme, NSString, UITraitCollection;

@interface GDKColorPickerDialog : MDCAlertController <GDKColorPickerVCDelegate, GDKThemable>
{
    GDKColorPickerVC *_colorPickerVC;
    CDUnknownBlockType _chooseColorAction;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) CDUnknownBlockType chooseColorAction; // @synthesize chooseColorAction=_chooseColorAction;
@property(retain, nonatomic) GDKColorPickerVC *colorPickerVC; // @synthesize colorPickerVC=_colorPickerVC;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)colorPicker:(id)arg1 didChooseColorAtIndex:(long long)arg2;
- (void)updateConstraints;
- (void)configureConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChooseColorAction:(CDUnknownBlockType)arg1 folderColorPalette:(id)arg2 selectedColorIndex:(long long)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end


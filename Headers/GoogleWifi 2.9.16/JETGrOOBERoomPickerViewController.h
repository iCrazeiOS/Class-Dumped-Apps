//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGrOOBEListPickerViewController.h"

#import "JETGrOOBECustomLabelTextEntryViewControllerDelegate-Protocol.h"
#import "JETGrOOBEListPickerViewControllerDataSource-Protocol.h"

@class NSArray, NSString;

@interface JETGrOOBERoomPickerViewController : JETGrOOBEListPickerViewController <JETGrOOBECustomLabelTextEntryViewControllerDelegate, JETGrOOBEListPickerViewControllerDataSource>
{
    NSArray *_roomList;
    NSArray *_roomListDisplay;
    NSString *_customLabel;
}

@property(copy, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(copy, nonatomic) NSArray *roomListDisplay; // @synthesize roomListDisplay=_roomListDisplay;
@property(copy, nonatomic) NSArray *roomList; // @synthesize roomList=_roomList;
- (void).cxx_destruct;
- (_Bool)isLastAP;
- (_Bool)isFirstAP;
- (void)selectedItemWithIndex:(long long)arg1;
- (void)onCustomLabelCreated:(id)arg1;
- (void)onRightButton;
- (void)onLeftButton;
- (id)rightButtonText;
- (id)leftButtonText;
- (long long)rightButtonType;
- (long long)leftButtonType;
- (id)itemAccessibilityIdentifierForIndex:(unsigned long long)arg1;
- (id)headerAccessibilityIdentifier;
- (id)itemSubtitleForIndex:(unsigned long long)arg1;
- (id)itemTitleForIndex:(unsigned long long)arg1;
- (unsigned long long)numItems;
- (id)captionSubtitle;
- (id)captionTitle;
- (void)viewDidLoad;
- (void)addCustomLabel:(id)arg1;
- (id)initWithAPState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


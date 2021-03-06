//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/QTMCollectionViewController.h>

#import "GABFooterButtonsCVDelegate-Protocol.h"

@class GOOTextContentViewObject, NSMutableArray, NSString;
@protocol GABBackupInterruptedVCDelegate;

@interface GABBackupInterruptedVC : QTMCollectionViewController <GABFooterButtonsCVDelegate>
{
    CDUnknownBlockType _continueBlock;
    id <GABBackupInterruptedVCDelegate> _delegate;
    long long _headerType;
    GOOTextContentViewObject *_cvoFiller;
    NSMutableArray *_interruptedCVOs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *interruptedCVOs; // @synthesize interruptedCVOs=_interruptedCVOs;
@property(retain, nonatomic) GOOTextContentViewObject *cvoFiller; // @synthesize cvoFiller=_cvoFiller;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) __weak id <GABBackupInterruptedVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType continueBlock; // @synthesize continueBlock=_continueBlock;
- (void)footerButtonsRightButtonWasPressed:(id)arg1;
- (void)footerButtonsLeftButtonWasPressed:(id)arg1;
- (id)createLearnMoreCVO;
- (id)createMessageCVO;
- (id)createButtonFooterCVO;
- (id)interruptedModel;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithHeaderType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class UIButton, UIImageView, UILabel, UIProgressView, UIView, WAChatStorage, WARepairDatabaseController;
@protocol WARepairDatabaseControllerDelegate;

@interface WARepairDatabaseViewController : WAViewController
{
    UILabel *_paragraphLabel;
    UILabel *_warningLabel;
    UIButton *_beginButton;
    UIImageView *_warningImageView;
    UIView *_repairProgressView;
    UIProgressView *_progressView;
    UILabel *_completionLabel;
    WARepairDatabaseController *_navigationController;
    WAChatStorage *_chatStorage;
    id <WARepairDatabaseControllerDelegate> _delegate;
    unsigned long long _repairRetries;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long repairRetries; // @synthesize repairRetries=_repairRetries;
@property(nonatomic) __weak id <WARepairDatabaseControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(nonatomic) __weak WARepairDatabaseController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *repairProgressView; // @synthesize repairProgressView=_repairProgressView;
@property(retain, nonatomic) UIImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(retain, nonatomic) UIButton *beginButton; // @synthesize beginButton=_beginButton;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UILabel *paragraphLabel; // @synthesize paragraphLabel=_paragraphLabel;
- (unsigned long long)supportedInterfaceOrientations;
- (void)handleRepairOutcome:(unsigned long long)arg1;
- (void)performRecovery:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)viewDidLoad;
- (void)removeCorruptionFlag:(id)arg1;
- (void)awakeFromNib;

@end


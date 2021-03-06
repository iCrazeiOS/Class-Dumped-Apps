//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStaticTableViewController.h>

@class NSString, UIBarButtonItem;

@interface PSPDFUsernameTableViewController : PSPDFStaticTableViewController
{
    _Bool _userDidTapDone;
    NSString *_username;
    CDUnknownBlockType _completionHandler;
    NSString *_footnote;
    UIBarButtonItem *_doneButton;
}

@property(nonatomic) _Bool userDidTapDone; // @synthesize userDidTapDone=_userDidTapDone;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)textChanged:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)createHeaderView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath, SXProductData;
@protocol SXTwisterViewControllerDelegate;

@interface SXTwisterViewController : UITableViewController
{
    NSIndexPath *_productIndexPath;
    SXProductData *_model;
    id <SXTwisterViewControllerDelegate> _delegate;
    NSArray *_offers;
}

@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(nonatomic) __weak id <SXTwisterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SXProductData *model; // @synthesize model=_model;
@property(retain, nonatomic) NSIndexPath *productIndexPath; // @synthesize productIndexPath=_productIndexPath;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)setupCloseButton;
- (void)setupTitleAppearance;
- (void)closeTwister:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


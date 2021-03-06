//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDelegate-Protocol.h>

@class IGActivityFilter, IGTableLayoutSpec, NSArray, NSString, UILabel, UITableView, UIView;
@protocol IGActivityFiltersViewControllerDelegate;

@interface IGActivityFiltersViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IGGestureHandler>
{
    NSArray *_filters;
    IGActivityFilter *_selectedFilter;
    UILabel *_titleLabel;
    UIView *_divider;
    UITableView *_tableView;
    IGTableLayoutSpec *_layoutSpec;
    id <IGActivityFiltersViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGActivityFiltersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGSize)_preferredSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFilters:(id)arg1 selectedFilter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


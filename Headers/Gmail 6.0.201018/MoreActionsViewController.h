//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseActionsViewController.h"

#import "ClusterNameViewControllerDelegate-Protocol.h"
#import "GBTAppBarSupport-Protocol.h"
#import "JBTEventListener-Protocol.h"
#import "MoreActionsViewControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ActionHandler, GBTAppBarViewController, NSMutableArray, NSString, UILabel;
@protocol GBTClient, JBTClusterConfig, JBTItem, JBTLiveList, MoreActionsViewControllerDelegate;

@interface MoreActionsViewController : GBTBaseActionsViewController <ClusterNameViewControllerDelegate, GBTAppBarSupport, JBTEventListener, MoreActionsViewControllerDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    ActionHandler *_actionHandler;
    id <GBTClient> _client;
    id <JBTLiveList> _elementList;
    id <JBTItem> _item;
    NSMutableArray *_moveToRows;
    UILabel *_noLabelsMessage;
    unsigned long long _sourceNavigationType;
    _Bool _hideNewClusterButton;
    GBTAppBarViewController *_appBar;
    id <JBTClusterConfig> _currentCluster;
    id <MoreActionsViewControllerDelegate> _delegate;
}

+ (id)elementListForUser:(id)arg1;
+ (id)moreActionsViewControllerWithActionHandler:(id)arg1 client:(id)arg2 delegate:(id)arg3 navigationType:(unsigned long long)arg4;
+ (id)moreActionsViewControllerWithItem:(id)arg1 client:(id)arg2 navigationType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideNewClusterButton; // @synthesize hideNewClusterButton=_hideNewClusterButton;
@property(nonatomic) __weak id <MoreActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <JBTClusterConfig> currentCluster; // @synthesize currentCluster=_currentCluster;
@property(retain, nonatomic) GBTAppBarViewController *appBar; // @synthesize appBar=_appBar;
- (void)moreActionsViewControllerDidCancel:(id)arg1;
- (void)moreActionsViewController:(id)arg1 didSelectAction:(unsigned long long)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToNewClusterWithDisplayName:(id)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToCluster:(id)arg2;
- (void)moreActionsViewControllerDidSelectRemoveFromCurrentCluster:(id)arg1;
- (void)appBar:(id)arg1 didTapOnButtonItem:(id)arg2 event:(id)arg3 button:(id)arg4;
- (id)titleForAppBar:(id)arg1;
- (id)rightBarButtonItemsForAppBar:(id)arg1;
- (id)leftBarButtonItemsForAppBar:(id)arg1;
- (void)clusterNameViewControllerDidCancel:(id)arg1;
- (void)clusterNameViewController:(id)arg1 didFinishWithName:(id)arg2;
- (void)newClusterTapped:(id)arg1;
- (id)navBarTitle;
- (_Bool)isCluster:(id)arg1;
- (_Bool)isActionTypeApplicable:(unsigned long long)arg1 commandConfig:(id)arg2;
- (void)initializeMoveToDestinations;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)cancel;
- (id)initWithItem:(id)arg1 actionHandler:(id)arg2 currentCluster:(id)arg3 elementList:(id)arg4 client:(id)arg5 navigationType:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


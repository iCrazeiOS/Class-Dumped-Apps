//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBViewController.h"

#import "HUBViewContentOffsetObserver-Protocol.h"
#import "HUBViewModelLoaderDelegate-Protocol.h"

@interface _TtC21FollowFeedFeatureImpl11FeedHubPage : HUBViewController <HUBViewModelLoaderDelegate, HUBViewContentOffsetObserver>
{
    // Error parsing type: , name: theme
    // Error parsing type: , name: viewModelLoader
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: commandHandler
    // Error parsing type: , name: paginationHandler
    // Error parsing type: , name: useDiffingOnViewModelChanges
}

- (void).cxx_destruct;
- (id)initWithContainerViewFactory:(CDUnknownBlockType)arg1;
- (id)initWithComponentRegistry:(id)arg1 componentLayoutManager:(id)arg2 imageLoaderFactory:(id)arg3 commandHandler:(id)arg4;
- (void)turnOffHubsModelDiffingWithNotification:(id)arg1;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)sp_updateContentInsets;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubViewController.h"

#import "SPTRadioPlaybackObserver-Protocol.h"

@class NSDate, NSString, SPTRadioPlaybackService;

@interface SPTRadioHubViewController : SPTHubViewController <SPTRadioPlaybackObserver>
{
    NSDate *_lastUpdate;
    SPTRadioPlaybackService *_playbackService;
}

@property(readonly, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void).cxx_destruct;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 pageURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 impressionLogger:(id)arg8 loadingLogger:(id)arg9 pageIdentifier:(id)arg10 playbackService:(id)arg11 shareDragDelegateFactory:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


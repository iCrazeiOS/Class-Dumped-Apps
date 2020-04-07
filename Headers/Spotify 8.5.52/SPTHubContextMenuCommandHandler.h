//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"
#import "SPTContextMenuPresenterDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURL;
@protocol SPTContextMenuOptions, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTHubInteractionLogger, SPTUBIHubsUtilities;

@interface SPTHubContextMenuCommandHandler : NSObject <SPTContextMenuPresenterDelegate, HUBCommandHandler>
{
    id <SPTContextMenuOptions> _contextMenuOptions;
    NSURL *_viewURI;
    NSString *_contextMenuLogContext;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTHubInteractionLogger> _interactionLogger;
    NSMutableSet *_presentedContextMenuPresenters;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
}

@property(retain, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) NSMutableSet *presentedContextMenuPresenters; // @synthesize presentedContextMenuPresenters=_presentedContextMenuPresenters;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, copy, nonatomic) NSString *contextMenuLogContext; // @synthesize contextMenuLogContext=_contextMenuLogContext;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (_Bool)showTrackContextMenuForCommand:(id)arg1 event:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
@property(readonly, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
- (id)initWithViewURI:(id)arg1 contextMenuLogContext:(id)arg2 contextMenuOptionsFactory:(id)arg3 contextMenuPresenterFactory:(id)arg4 interactionLogger:(id)arg5 ubiHubsInstrumentation:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


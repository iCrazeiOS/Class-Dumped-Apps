//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeCommandHandlerFactory, SPTHomeContentOperationLoaderFactory, SPTHomeDebugger, SPTHomeEndpointFactory, SPTHomeFeatureProperties, SPTHomeHubProvider, SPTHomeViewModelHiddenComponents, SPTHomeViewModelProvider;
@protocol GLUETheme, SPTBannerPresentationManager, SPTOfflineModeState, SPTShareDragDelegateFactory;

@interface SPTHomeHubManager : NSObject
{
    SPTHomeViewModelProvider *_viewModelProvider;
    SPTHomeHubProvider *_homeHubProvider;
    SPTHomeEndpointFactory *_endpointFactory;
    SPTHomeCommandHandlerFactory *_homeCommandHandlerFactory;
    id <GLUETheme> _GLUETheme;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    SPTHomeContentOperationLoaderFactory *_contentOperationLoaderFactory;
    SPTHomeFeatureProperties *_homeFeatureProperties;
    SPTHomeViewModelHiddenComponents *_hiddenComponents;
    SPTHomeDebugger *_homeDebugger;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) SPTHomeDebugger *homeDebugger; // @synthesize homeDebugger=_homeDebugger;
@property(readonly, nonatomic) SPTHomeViewModelHiddenComponents *hiddenComponents; // @synthesize hiddenComponents=_hiddenComponents;
@property(readonly, nonatomic) SPTHomeFeatureProperties *homeFeatureProperties; // @synthesize homeFeatureProperties=_homeFeatureProperties;
@property(readonly, nonatomic) SPTHomeContentOperationLoaderFactory *contentOperationLoaderFactory; // @synthesize contentOperationLoaderFactory=_contentOperationLoaderFactory;
@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) SPTHomeCommandHandlerFactory *homeCommandHandlerFactory; // @synthesize homeCommandHandlerFactory=_homeCommandHandlerFactory;
@property(readonly, nonatomic) SPTHomeEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(readonly, nonatomic) SPTHomeHubProvider *homeHubProvider; // @synthesize homeHubProvider=_homeHubProvider;
@property(readonly, nonatomic) SPTHomeViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (id)makeCommandDispatcherWithURL:(id)arg1 referrerIdentifier:(id)arg2 hubLogger:(id)arg3 viewModelProvider:(id)arg4 hiddenComponents:(id)arg5;
- (id)makeViewModelProviderForSourceIdentifier:(id)arg1 hiddenComponents:(id)arg2;
- (id)provideHubViewControllerForURL:(id)arg1 initialViewModel:(id)arg2 referrerIdentifier:(id)arg3;
- (id)initWithHomeHubProvider:(id)arg1 endpointFactory:(id)arg2 homeCommandHandlerFactory:(id)arg3 GLUETheme:(id)arg4 offlineModeState:(id)arg5 shareDragDelegateFactory:(id)arg6 contentOperationLoaderFactory:(id)arg7 homeFeatureProperties:(id)arg8 sourceIdentifier:(id)arg9 homeDebugger:(id)arg10 bannerPresentationManager:(id)arg11;

@end


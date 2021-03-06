//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGTVMetadataDescriptionInputHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVMetadataTitleInputHandlerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVSeriesCreationNetworkDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGTVCreateNewSeriesView, IGTVMetadataDescriptionInputHandler, IGTVMetadataTitleInputHandler, IGTVSeriesCreationNetworkDataSource, IGUserSession, NSString, UIBarButtonItem, UITapGestureRecognizer;
@protocol IGTVCreateNewSeriesViewControllerDelegate, IGTVSeriesCreationLoggingContext;

@interface IGTVCreateNewSeriesViewController : IGViewController <IGTVMetadataDescriptionInputHandlerDelegate, IGTVSeriesCreationNetworkDataSourceDelegate, IGTVMetadataTitleInputHandlerDelegate, UIGestureRecognizerDelegate>
{
    IGUserSession *_userSession;
    id <IGTVSeriesCreationLoggingContext> _seriesCreationLoggingContext;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_createEnabledBarButtonItem;
    UIBarButtonItem *_createDisabledBarButtonItem;
    UIBarButtonItem *_loadingBarButtonItem;
    IGTVSeriesCreationNetworkDataSource *_seriesCreationNetworkDataSource;
    IGTVMetadataDescriptionInputHandler *_descriptionInputHandler;
    IGTVMetadataTitleInputHandler *_titleInputHandler;
    IGTVCreateNewSeriesView *_createNewSeriesView;
    UITapGestureRecognizer *_keyboardDismissTap;
    double _keyboardBottomInset;
    _Bool _isLoading;
    id <IGTVCreateNewSeriesViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVCreateNewSeriesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateBarButtonItems;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)createNewSeriesDidFail;
- (void)createNewSeriesDidSucceed:(id)arg1;
- (void)createNewSeriesDataSourceWillStartRequest;
- (void)titleTextFieldDidBeginEditing:(id)arg1;
- (void)titleTextFieldDidTypeReturn:(id)arg1;
- (void)titleTextFieldDidChange:(id)arg1;
- (void)descriptionTextViewDidBeginEditing:(id)arg1;
- (void)descriptionTextViewDidChange:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handleCreateBarButton;
- (void)_showCancelAlertDialog;
- (void)_handleCancelBarButton;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 seriesCreationLoggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


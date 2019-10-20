//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "GOOTextFieldContentViewDelegate-Protocol.h"
#import "JETSavableViewController-Protocol.h"

@class GOONavigationStyle, JETClientIPAddressValidator, JETIPAddressContentViewObject, JETStationInfo, NSSet, NSString, QTMButton, UIBarButtonItem, UIScrollView, UIView, UIViewController;

@interface JETAddClientStaticIPViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization, GOOTextFieldContentViewDelegate, JETSavableViewController>
{
    _Bool _inPortForwardingFlow;
    QTMButton *_nextButton;
    UIViewController *_flowStartViewController;
    JETIPAddressContentViewObject *_ipAddressField;
    JETStationInfo *_selectedStation;
    UIBarButtonItem *_saveButton;
    JETClientIPAddressValidator *_ipAddressFieldValidator;
}

@property(retain, nonatomic) JETClientIPAddressValidator *ipAddressFieldValidator; // @synthesize ipAddressFieldValidator=_ipAddressFieldValidator;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) JETStationInfo *selectedStation; // @synthesize selectedStation=_selectedStation;
@property(retain, nonatomic) JETIPAddressContentViewObject *ipAddressField; // @synthesize ipAddressField=_ipAddressField;
@property(readonly, nonatomic) _Bool inPortForwardingFlow; // @synthesize inPortForwardingFlow=_inPortForwardingFlow;
@property(retain, nonatomic) UIViewController *flowStartViewController; // @synthesize flowStartViewController=_flowStartViewController;
@property(retain, nonatomic) QTMButton *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (void)textDidChangeForObject:(id)arg1;
- (void)close;
- (_Bool)isFormValid;
- (void)populateModel;
- (id)ipAddressPrefixSuffix;
- (void)save;
- (void)cancelButtonTapped;
- (void)saveButtonTapped;
- (void)nextButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)accessPointsGroupIsUpdated;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 selectedStation:(id)arg3 flowStartViewController:(id)arg4 inPortForwardingFlow:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
@property(readonly) Class superclass;

@end


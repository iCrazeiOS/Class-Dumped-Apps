//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEPreferenceViewModel-Protocol.h"

@class GHCClientRpcInvocation, GHCConfirmationDialog, GHCPreferenceId, GHCPreferenceNewScreenAction, NSAttributedString, NSString, NSURL;
@protocol HMEPreferenceData;

@interface HMESettingsBannerButtonViewModel : NSObject <HMEPreferenceViewModel>
{
    _Bool _disabled;
    _Bool _refreshOnReturn;
    NSString *_title;
    NSAttributedString *_attributedSubtitle;
    NSString *_subtitle;
    NSString *_cellIdentifier;
    NSURL *_deeplinkURL;
    id <HMEPreferenceData> _preferenceChildData;
    GHCPreferenceId *_preferenceID;
    GHCPreferenceNewScreenAction *_preferenceScreenAction;
    long long _renderType;
    GHCClientRpcInvocation *_rpcInvocation;
    GHCConfirmationDialog *_confirmationDialog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=shouldRefreshOnReturn) _Bool refreshOnReturn; // @synthesize refreshOnReturn=_refreshOnReturn;
@property(readonly, nonatomic) GHCConfirmationDialog *confirmationDialog; // @synthesize confirmationDialog=_confirmationDialog;
@property(readonly, nonatomic) GHCClientRpcInvocation *rpcInvocation; // @synthesize rpcInvocation=_rpcInvocation;
@property(readonly, nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(readonly, nonatomic) GHCPreferenceNewScreenAction *preferenceScreenAction; // @synthesize preferenceScreenAction=_preferenceScreenAction;
@property(readonly, nonatomic) GHCPreferenceId *preferenceID; // @synthesize preferenceID=_preferenceID;
@property(retain, nonatomic) id <HMEPreferenceData> preferenceChildData; // @synthesize preferenceChildData=_preferenceChildData;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithButtonTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


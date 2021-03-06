//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMResourceBasedModelImpl.h>

#import <Module_Framework/ASMHeaderViewModel-Protocol.h>

@class ASMObservable, ASMResourceKey, NSString;
@protocol ASMAccountModel, ASMLoggerModel, ASMNavigationModel;

@interface ASMHeaderViewModelImpl : ASMResourceBasedModelImpl <ASMHeaderViewModel>
{
    _Bool _enableAccountSwitching;
    _Bool _enableHeaderActionItems;
    ASMObservable *_welcomeHeader;
    id <ASMNavigationModel> _navigationModel;
    id <ASMLoggerModel> _loggerModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ASMLoggerModel> loggerModel; // @synthesize loggerModel=_loggerModel;
@property(retain, nonatomic) id <ASMNavigationModel> navigationModel; // @synthesize navigationModel=_navigationModel;
@property(retain, nonatomic) ASMObservable *welcomeHeader; // @synthesize welcomeHeader=_welcomeHeader;
@property(readonly, nonatomic) _Bool enableHeaderActionItems; // @synthesize enableHeaderActionItems=_enableHeaderActionItems;
@property(readonly, nonatomic) _Bool enableAccountSwitching; // @synthesize enableAccountSwitching=_enableAccountSwitching;
- (void)startAccountSwitchingFlowWithSourceView:(id)arg1 type:(unsigned long long)arg2;
- (void)closeGoogleAccount;
@property(readonly, nonatomic) ASMObservable *currentProfilePicture;
- (void)logOutboundNavigationToDestination:(id)arg1;
- (void)navigateToScreenWithKey:(id)arg1 withNavigationOrigin:(unsigned long long)arg2;
@property(readonly, nonatomic) ASMObservable *currentIdentity;
@property(readonly, nonatomic) ASMObservable *currentAccount;
- (id)initWithResourceKey:(id)arg1 navigationModel:(id)arg2 accountModel:(id)arg3 loggerModel:(id)arg4 enableAccountSwitching:(_Bool)arg5 enableHeaderActionItems:(_Bool)arg6;

// Remaining properties
@property(readonly, nonatomic) id <ASMAccountModel> accountModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) ASMObservable *loading;
@property(readonly, nonatomic) ASMResourceKey *resourceKey;
@property(readonly) Class superclass;

@end


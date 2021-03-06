//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreModules/NativeRedBoxSpec-Protocol.h>
#import <CoreModules/RCTBridgeModule-Protocol.h>

@class NSString, NSURL, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTRedBox : NSObject <NativeRedBoxSpec, RCTBridgeModule>
{
    NSURL *_overrideBundleURL;
    CDUnknownBlockType _overrideReloadAction;
}

+ (id)moduleName;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType overrideReloadAction; // @synthesize overrideReloadAction=_overrideReloadAction;
@property(retain, nonatomic) NSURL *overrideBundleURL; // @synthesize overrideBundleURL=_overrideBundleURL;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_09f1d460)arg1 nativeInvoker:(shared_ptr_09f1d460)arg2 perfLogger:(id)arg3;
- (void)addCustomButton:(id)arg1 onPressHandler:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)setExtraData:(id)arg1 forIdentifier:(id)arg2;
- (void)updateErrorMessage:(id)arg1 withParsedStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withParsedStack:(id)arg2 errorCookie:(int)arg3;
- (void)updateErrorMessage:(id)arg1 withParsedStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withParsedStack:(id)arg2;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2 errorCookie:(int)arg3;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withRawStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withRawStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withDetails:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showError:(id)arg1;
- (void)registerErrorCustomizer:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end


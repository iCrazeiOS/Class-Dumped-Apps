//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NativeActionSheetManagerSpec-Protocol.h>
#import <FBSharedFramework/RCTBridgeModule-Protocol.h>
#import <FBSharedFramework/UIActionSheetDelegate-Protocol.h>

@class NSMapTable, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleRegistry;

@interface RCTActionSheetManager : NSObject <UIActionSheetDelegate, NativeActionSheetManagerSpec, RCTBridgeModule>
{
    NSMapTable *_callbacks;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__1571;
+ (const struct RCTMethodInfo *)__rct_export__600;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (void)showShareActionSheetWithOptions:(struct SpecShowShareActionSheetWithOptionsOptions *)arg1 failureCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (void)showActionSheetWithOptions:(struct SpecShowActionSheetWithOptionsOptions *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 onParentViewController:(id)arg2 anchorViewTag:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry;

@end


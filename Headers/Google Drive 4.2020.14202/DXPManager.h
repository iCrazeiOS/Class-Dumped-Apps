//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPLibraryStateObservable-Protocol.h"
#import "DXPManager-Protocol.h"
#import "DXPPolicyChangeObserver-Protocol.h"

@class DXPLibraryState, NSHashTable, NSNotificationCenter;
@protocol DXPDebuggerController, DXPDispatcher, DXPFeedbackPSDGenerator, DXPFlags, DXPPasteboardProtectionLibrary, DXPPolicyFetchControlling, DXPProtectionController, DXPSharingProtectionLibrary, GEMEventLogger, SSOService;

@interface DXPManager : NSObject <DXPLibraryStateObservable, DXPPolicyChangeObserver, DXPManager>
{
    id <DXPPasteboardProtectionLibrary> _pasteboardProtectionLibrary;
    id <DXPSharingProtectionLibrary> _sharingProtectionLibrary;
    id <DXPFeedbackPSDGenerator> _feedbackGenerator;
    id <DXPPolicyFetchControlling> _policyFetchController;
    id <DXPDebuggerController> _debuggerController;
    id <DXPProtectionController> _protectionController;
    id <SSOService> _ssoService;
    NSNotificationCenter *_notificationCenter;
    DXPLibraryState *_currentLibraryState;
    NSHashTable *_libraryStateObservers;
    id <GEMEventLogger> _eventLogger;
    id <DXPFlags> _flags;
    id <DXPDispatcher> _dispatcher;
}

+ (void)logFlags:(id)arg1 eventLogger:(id)arg2;
+ (_Bool)performInitialization;
+ (id)managerWithConfig:(id)arg1 ssoService:(id)arg2 debuggerController:(id)arg3 eventLogger:(id)arg4 flags:(id)arg5;
+ (id)managerWithConfig:(id)arg1 ssoService:(id)arg2 debuggerController:(id)arg3 eventLogger:(id)arg4;
+ (id)managerWithConfig:(id)arg1 ssoService:(id)arg2;
@property(readonly, nonatomic) id <DXPDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) id <DXPFlags> flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <GEMEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(retain, nonatomic) NSHashTable *libraryStateObservers; // @synthesize libraryStateObservers=_libraryStateObservers;
@property(retain, nonatomic) DXPLibraryState *currentLibraryState; // @synthesize currentLibraryState=_currentLibraryState;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(readonly, nonatomic) id <DXPProtectionController> protectionController; // @synthesize protectionController=_protectionController;
@property(retain, nonatomic) id <DXPDebuggerController> debuggerController; // @synthesize debuggerController=_debuggerController;
@property(readonly, nonatomic) id <DXPPolicyFetchControlling> policyFetchController; // @synthesize policyFetchController=_policyFetchController;
@property(readonly, nonatomic) id <DXPFeedbackPSDGenerator> feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) id <DXPSharingProtectionLibrary> sharingProtectionLibrary; // @synthesize sharingProtectionLibrary=_sharingProtectionLibrary;
@property(readonly, nonatomic) id <DXPPasteboardProtectionLibrary> pasteboardProtectionLibrary; // @synthesize pasteboardProtectionLibrary=_pasteboardProtectionLibrary;
- (void).cxx_destruct;
- (void)updateFlagsAfterDelay;
- (void)logUsersWithEnforcedPolicies:(id)arg1;
- (void)removeLibraryStateObserver:(id)arg1;
- (void)addLibraryStateObserver:(id)arg1;
- (void)policiesDidUpdateWithPolicies:(id)arg1;
- (id)settingsString;
- (id)settingsViewController;
- (void)setPrimaryIdentity:(id)arg1;
- (void)syncPhenotypeExperimentFlags:(id)arg1;
- (void)requestPolicyUpdate:(id)arg1;
- (id)initWithPolicyFetchController:(id)arg1 protectionController:(id)arg2 ssoService:(id)arg3 notificationCenter:(id)arg4 pasteboardProtectionLibrary:(id)arg5 sharingProtectionLibrary:(id)arg6 eventLogger:(id)arg7 debuggerController:(id)arg8 flags:(id)arg9 dispatcher:(id)arg10;

@end


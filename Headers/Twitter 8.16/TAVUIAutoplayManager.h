//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAVUIAutoplayManager : NSObject
{
    // Error parsing type: , name: candidateAutoplayables
    // Error parsing type: , name: needsUpdate
    // Error parsing type: , name: maxActiveAutoplayablesCount
    // Error parsing type: , name: filterPolicies
    // Error parsing type: , name: $__lazy_storage_$_filterPolicyNames
    // Error parsing type: , name: sortPolicy
    // Error parsing type: , name: activeAutoplayables
    // Error parsing type: , name: debugOverlay
}

+ (id)debugOverlayWasDisabledNotification;
+ (id)debugOverlayWasEnabledNotification;
- (void).cxx_destruct;
- (id)init;
- (void)debugOverlaySwitchWasDisabled;
- (void)debugOverlaySwitchWasEnabled;
- (void)removeCandidateAutoplayable:(id)arg1;
- (void)addCandidateAutoplayable:(id)arg1;
- (id)initWithMaxActiveAutoplayablesCount:(long long)arg1 sortPolicy:(id)arg2 filterPolicies:(id)arg3;

@end


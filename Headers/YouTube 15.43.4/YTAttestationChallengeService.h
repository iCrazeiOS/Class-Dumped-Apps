//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

#import <Module_Framework/YTAttestationChallengeService-Protocol.h>

@class NSString, YTApiaryResourceParser;

@interface YTAttestationChallengeService : YTBaseInnerTubeRequestService <YTAttestationChallengeService>
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (id)requestWithChallengeRequest:(id)arg1 requestNonce:(id)arg2 identityID:(id)arg3 retry:(_Bool)arg4;
- (void)makeAttestationChallengeRequest:(id)arg1 requestNonce:(id)arg2 identityID:(id)arg3 retry:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)makeGenericAttestationChallengeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


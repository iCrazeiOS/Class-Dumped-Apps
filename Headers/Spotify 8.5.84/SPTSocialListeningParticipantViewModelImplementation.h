//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningParticipantViewModel-Protocol.h"

@class NSString, NSURL, SPTSocialListeningParticipantModel;

@interface SPTSocialListeningParticipantViewModelImplementation : NSObject <SPTSocialListeningParticipantViewModel>
{
    _Bool _currentUser;
    _Bool _host;
    NSString *_participantID;
    NSString *_username;
    NSString *_displayName;
    NSURL *_imageURL;
    SPTSocialListeningParticipantModel *_participantModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTSocialListeningParticipantModel *participantModel; // @synthesize participantModel=_participantModel;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(readonly, nonatomic, getter=isHost) _Bool host; // @synthesize host=_host;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
- (id)initWithCurrentUserData:(id)arg1;
- (id)initWithParticipantModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


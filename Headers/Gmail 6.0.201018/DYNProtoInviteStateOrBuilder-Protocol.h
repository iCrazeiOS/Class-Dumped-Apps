//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoInviteType, DYNProtoMessageId, DYNProtoUserId;

@protocol DYNProtoInviteStateOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoInviteType *)getInviteType;
- (_Bool)hasInviteType;
- (_Bool)getShowWelcomeMat;
- (_Bool)hasShowWelcomeMat;
- (DYNProtoMessageId *)getInvitationMessageId;
- (_Bool)hasInvitationMessageId;
- (DYNProtoUserId *)getInviterUserId;
- (_Bool)hasInviterUserId;
@end


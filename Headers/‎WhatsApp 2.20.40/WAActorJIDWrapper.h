//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@class WADeviceJID;

@interface WAActorJIDWrapper : NSObject <NSCopying>
{
    WADeviceJID *_deviceJID;
}

@property(readonly, nonatomic) WADeviceJID *deviceJID; // @synthesize deviceJID=_deviceJID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceJID:(id)arg1;
- (id)initWithAggregatedReceiptParticipantXMPPStanzaElement:(id)arg1;
- (id)initWithMessageStatusChangeRequestProto:(id)arg1;
- (id)initWithRetryTaskActorJIDString:(id)arg1 participantUserJIDString:(id)arg2;
- (id)initWithXMPPStanza:(id)arg1;

@end


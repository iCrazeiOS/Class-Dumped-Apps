//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WBMMSUploadOperationResult.h>

@class NSArray, NSData, NSDate;

@interface WBMMSUploadOperationResultEncrypted : WBMMSUploadOperationResult
{
    NSData *_sidecar;
    NSData *_mediaKeyData;
    NSDate *_mediaKeyCreationDate;
    NSData *_encFileHash;
    NSArray *_partialPlaintextHashes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *partialPlaintextHashes; // @synthesize partialPlaintextHashes=_partialPlaintextHashes;
@property(readonly, copy, nonatomic) NSData *encFileHash; // @synthesize encFileHash=_encFileHash;
@property(readonly, nonatomic) NSDate *mediaKeyCreationDate; // @synthesize mediaKeyCreationDate=_mediaKeyCreationDate;
@property(readonly, copy, nonatomic) NSData *mediaKeyData; // @synthesize mediaKeyData=_mediaKeyData;
@property(readonly, copy, nonatomic) NSData *sidecar; // @synthesize sidecar=_sidecar;
- (id)initWithMediaType:(unsigned long long)arg1 mediaURL:(id)arg2 directPath:(id)arg3 plaintextHash:(id)arg4 sidecar:(id)arg5 mediaKeyData:(id)arg6 mediaKeyCreationDate:(id)arg7 encFileHash:(id)arg8 partialPlaintextHashes:(id)arg9;

@end


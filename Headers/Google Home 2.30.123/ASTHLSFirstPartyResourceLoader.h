//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTHLSResourceLoader-Protocol.h"
#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class NSString, NSURL;
@protocol ASTHLSAuthProxy;

@interface ASTHLSFirstPartyResourceLoader : NSObject <AVAssetResourceLoaderDelegate, ASTHLSResourceLoader>
{
    NSURL *_streamURL;
    id <ASTHLSAuthProxy> _authProxy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ASTHLSAuthProxy> authProxy; // @synthesize authProxy=_authProxy;
@property(readonly, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
- (id)assetURLForStartTime:(id)arg1 endTime:(id)arg2;
- (id)makeAssetForStartTime:(id)arg1 endTime:(id)arg2;
- (id)initWithStreamURL:(id)arg1 authProxy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


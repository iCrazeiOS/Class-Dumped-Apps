//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLClientInfoProvider-Protocol.h"

@class NSString, PDLClientVersion;

@interface PDLClientInfoProviderImpl : NSObject <PDLClientInfoProvider>
{
    int _clearcutAppID;
    PDLClientVersion *_clientVersion;
}

@property(nonatomic) int clearcutAppID; // @synthesize clearcutAppID=_clearcutAppID;
@property(retain, nonatomic) PDLClientVersion *clientVersion; // @synthesize clientVersion=_clientVersion;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


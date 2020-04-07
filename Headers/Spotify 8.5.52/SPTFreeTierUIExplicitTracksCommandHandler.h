//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTExplicitContentAccessManager;

@interface SPTFreeTierUIExplicitTracksCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithExplicitAccessManager:(id)arg1;

@end


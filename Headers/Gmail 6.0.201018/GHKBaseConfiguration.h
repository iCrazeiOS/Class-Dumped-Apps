//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GHKBaseConfigurationService-Protocol.h"
#import "GHKBaseConfigurationServiceForMigration-Protocol.h"

@class NSString, PHTPhenotypeFlags;

@interface GHKBaseConfiguration : NSObject <GHKBaseConfigurationService, GHKBaseConfigurationServiceForMigration>
{
    PHTPhenotypeFlags *_allFlags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
@property(readonly, nonatomic) NSString *receiverBaseUrl;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


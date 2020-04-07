//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchHubsLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTSearch2DateProviding, SPTSearchUBIHubsLogger, SPTUBILogger;

@interface SPTSearchHubsLoggerImplementation : NSObject <SPTSearchHubsLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTSearch2DateProviding> _dateProvider;
    id <SPTUBILogger> _ubiLogger;
    id <SPTSearchUBIHubsLogger> _ubiHubsLogger;
}

@property(readonly, nonatomic) id <SPTSearchUBIHubsLogger> ubiHubsLogger; // @synthesize ubiHubsLogger=_ubiHubsLogger;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)logInteraction:(id)arg1;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 dateProvider:(id)arg2 ubiLogger:(id)arg3 ubiHubsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


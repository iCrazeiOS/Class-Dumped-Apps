//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTSearchHubsLogger, SPTSearchRecentsDataSource, SPTSearchUBIHubsLogger;

@interface SPTSearchClearRecentsCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTSearchRecentsDataSource> _dataSource;
    id <SPTSearchHubsLogger> _searchHubsLogger;
    id <SPTSearchUBIHubsLogger> _ubiHubsLogger;
}

@property(readonly, nonatomic) id <SPTSearchUBIHubsLogger> ubiHubsLogger; // @synthesize ubiHubsLogger=_ubiHubsLogger;
@property(readonly, nonatomic) id <SPTSearchHubsLogger> searchHubsLogger; // @synthesize searchHubsLogger=_searchHubsLogger;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRecentsDataSource:(id)arg1 searchHubsLogger:(id)arg2 ubiHubsLogger:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSqlVirtualConnection_RunWithConnection-Protocol.h"

@class ComGoogleAppsXplatSqlSqlInsert, ComGoogleAppsXplatSqlSqliteSqliteTransaction, NSString;
@protocol JavaUtilCollection;

@interface ComGoogleAppsXplatSqlSqliteSqliteTransaction_$Lambda$5 : NSObject <ComGoogleAppsXplatSqlVirtualConnection_RunWithConnection>
{
    ComGoogleAppsXplatSqlSqliteSqliteTransaction *this$0_;
    id <JavaUtilCollection> val$bulkParameterValues_;
    int val$numParamsPerRow_;
    ComGoogleAppsXplatSqlSqlInsert *val$insert_;
}

- (void)dealloc;
- (id)runWithComGoogleAppsXplatSqlVirtualConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


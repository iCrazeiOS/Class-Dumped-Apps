//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController, ComGoogleAppsXplatSqlSqlDatabase;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapChangesImapDraftRfc822MessageIdReferencesHelper : NSObject
{
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController *messageSummaryTableController_;
    id <JavaxInjectProvider> imapExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)maybeSetRfc822MessageIdReferencesWithComGoogleAppsBigtopDataItemsItemsSlicesProtos_DetailedMessage:(id)arg1;

@end


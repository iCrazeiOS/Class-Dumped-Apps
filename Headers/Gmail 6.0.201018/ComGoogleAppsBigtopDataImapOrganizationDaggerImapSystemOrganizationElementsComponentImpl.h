//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataImapOrganizationImapSystemOrganizationElementsComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapOrganizationDaggerImapSystemOrganizationElementsComponentImpl : NSObject <ComGoogleAppsBigtopDataImapOrganizationImapSystemOrganizationElementsComponentImpl>
{
    id <JavaxInjectProvider> imapExecutorProvider_;
    id <JavaxInjectProvider> imapFolderTableControllerProvider_;
    id <JavaxInjectProvider> sqlDatabaseProvider_;
    id <JavaxInjectProvider> treatImapJunkFolderAsSystemFolderProvider_;
    id <JavaxInjectProvider> forceUnclusteredStarredLabelInLeftNavForImapProvider_;
    id <JavaxInjectProvider> forceUnclusteredUnreadLabelInLeftNavForImapProvider_;
    id <JavaxInjectProvider> imapSystemOrganizationElementsReaderProvider_;
}

- (void)dealloc;
- (id)getSystemOrganizationElementsReader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


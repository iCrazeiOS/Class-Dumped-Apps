//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqliteSqliteOptions_Builder.h"

@class JavaLangBoolean;

@interface ComGoogleAppsXplatSqlSqliteAutoValue_SqliteOptions_Builder : ComGoogleAppsXplatSqlSqliteSqliteOptions_Builder
{
    JavaLangBoolean *enableWriteAheadLogging_;
    JavaLangBoolean *enableForeignKeyConstraints_;
}

- (void)dealloc;
- (id)build;
- (id)enableForeignKeyConstraintsWithBoolean:(_Bool)arg1;
- (id)enableWriteAheadLoggingWithBoolean:(_Bool)arg1;

@end


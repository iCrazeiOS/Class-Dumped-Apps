//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LLMarketingDB, LLMarketingLogger;
@protocol LLLocalyticsDelegate;

@interface LLBaseMarketingManager : NSObject
{
    id <LLLocalyticsDelegate> _localyticsDelegate;
    LLMarketingDB *_db;
    LLMarketingLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LLMarketingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) LLMarketingDB *db; // @synthesize db=_db;
@property(nonatomic) __weak id <LLLocalyticsDelegate> localyticsDelegate; // @synthesize localyticsDelegate=_localyticsDelegate;
- (void)prepareWithDatabase:(id)arg1;
- (id)initWithDelegate:(id)arg1 logger:(id)arg2;

@end


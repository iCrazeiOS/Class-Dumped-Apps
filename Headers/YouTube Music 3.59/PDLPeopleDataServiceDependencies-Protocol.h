//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol CCTClearcutLoggerProvider, GIPAccountID, GSCAccountsService, PDLCacheService, PDLConfigurationService, PDLExperimentsService, PDLMetricsLoggerFactory;

@protocol PDLPeopleDataServiceDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *clearcutLoggerProviderProvider;
@property(readonly, nonatomic) id <CCTClearcutLoggerProvider> clearcutLoggerProvider;
@property(readonly, nonatomic) GOOProvider *configurationServiceProvider;
@property(readonly, nonatomic) id <PDLConfigurationService> configurationService;
@property(readonly, nonatomic) GOOProvider *metricsLoggerFactoryProvider;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory;
@property(readonly, nonatomic) GOOProvider *experimentsServiceProvider;
@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService;
@property(readonly, nonatomic) GOOProvider *cacheServiceProvider;
@property(readonly, nonatomic) id <PDLCacheService> cacheService;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@end


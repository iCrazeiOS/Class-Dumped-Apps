//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol DYNJavaObjectFactoryService, DYNSharedLayerService, GIPAccountID, HUBLinkRouterService, HUBPeopleSheetConfigurationService, SSOService;

@protocol DYNPeopleSheetServiceDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *sharedLayerServiceProvider;
@property(readonly, nonatomic) GOOProvider *peopleSheetConfigurationServiceProvider;
@property(readonly, nonatomic) GOOProvider *linkRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *factoryServiceProvider;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <DYNSharedLayerService> sharedLayerService;
@property(readonly, nonatomic) id <HUBPeopleSheetConfigurationService> peopleSheetConfigurationService;
@property(readonly, nonatomic) id <HUBLinkRouterService> linkRouterService;
@property(readonly, nonatomic) id <DYNJavaObjectFactoryService> factoryService;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@end


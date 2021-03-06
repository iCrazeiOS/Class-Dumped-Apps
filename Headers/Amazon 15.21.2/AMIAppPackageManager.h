//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIEventCenter, NSMutableArray, NSMutableDictionary;
@protocol AMIAppEventsRegistrarProtocol;

@interface AMIAppPackageManager : NSObject
{
    AMIEventCenter *_eventCenter;
    NSMutableArray *_modules;
    id <AMIAppEventsRegistrarProtocol> _appEvents;
    unsigned long long _nextModuleIdentifier;
    NSMutableDictionary *_services;
}

@property(readonly, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(nonatomic) unsigned long long nextModuleIdentifier; // @synthesize nextModuleIdentifier=_nextModuleIdentifier;
@property(readonly, nonatomic) id <AMIAppEventsRegistrarProtocol> appEvents; // @synthesize appEvents=_appEvents;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(readonly, nonatomic) AMIEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
- (void).cxx_destruct;
- (void)addModuleFromModuleClass:(Class)arg1;
- (void)addModulesFromModuleClassNames:(id)arg1;
- (id)serviceForProtocol:(id)arg1;
- (void)registerServiceForProtocol:(id)arg1 createBlock:(CDUnknownBlockType)arg2;
- (void)showViewController:(id)arg1 presentationStyle:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)showViewControllerForModuleSpec:(id)arg1 presentationStyleOverride:(long long)arg2 navigationController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)viewControllerForModuleSpec:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (id)initWithAMIAppEventsRegistrarProtocol:(id)arg1;

@end


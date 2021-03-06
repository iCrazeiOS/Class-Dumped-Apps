//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class AMIModuleContext, NSString;
@protocol AMILocalization;

@interface CNLowNavBarModule : NSObject <AMIModule>
{
    AMIModuleContext *_moduleContext;
    id <AMILocalization> _localizationService;
}

+ (id)browseURL;
+ (id)sharedModule;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(retain, nonatomic) AMIModuleContext *moduleContext; // @synthesize moduleContext=_moduleContext;
- (void).cxx_destruct;
- (id)tabBarTintColor;
- (_Bool)isValidModuleSpec:(id)arg1;
- (_Bool)enableNewCategory;
- (_Bool)enableLowerNavigationBar;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


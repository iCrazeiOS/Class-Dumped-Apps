//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPActivityViewControllerSwizzler-Protocol.h"

@class NSString;
@protocol DXPActivityViewControllerFactory, GEMEventLogger;

@interface DXPSharingActivityViewControllerSwizzler : NSObject <DXPActivityViewControllerSwizzler>
{
    _Bool _enabled;
    id <DXPActivityViewControllerFactory> _factory;
    id <GEMEventLogger> _eventLogger;
    CDUnknownFunctionPointerType _originalImplementation;
    CDUnknownFunctionPointerType _updatedImplementation;
}

- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType updatedImplementation; // @synthesize updatedImplementation=_updatedImplementation;
@property(nonatomic) CDUnknownFunctionPointerType originalImplementation; // @synthesize originalImplementation=_originalImplementation;
@property(readonly, nonatomic) id <GEMEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(nonatomic) __weak id <DXPActivityViewControllerFactory> factory; // @synthesize factory=_factory;
- (id)activityViewControllerWithActivityViewController:(id)arg1 activityItems:(id)arg2 applicationActivities:(id)arg3;
- (void)unswizzle;
- (void)swizzle;
@property(readonly, nonatomic) CDUnknownBlockType originalInitializationBlock;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)initWithEventLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


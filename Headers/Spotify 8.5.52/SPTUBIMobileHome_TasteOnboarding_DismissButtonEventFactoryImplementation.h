//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileHome_TasteOnboarding_DismissButtonEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileHome_TasteOnboarding_DismissButtonEventFactoryImplementation : NSObject <SPTUBIMobileHome_TasteOnboarding_DismissButtonEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitUiHide;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


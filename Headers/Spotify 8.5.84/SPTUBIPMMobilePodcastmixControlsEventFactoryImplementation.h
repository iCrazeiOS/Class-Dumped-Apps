//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIPMMobilePodcastmixControlsEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIPMMobilePodcastmixControlsEventFactoryImplementation : NSObject <SPTUBIPMMobilePodcastmixControlsEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2 parentAbsoluteLocation:(id)arg3;
+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)impression;
- (id)customizeSnackbarButtonFactoryWithUri:(id)arg1;
- (id)customizeMenuActionFactoryWithUri:(id)arg1;
- (id)customizeIconButtonFactoryWithUri:(id)arg1;
- (id)customizeSummaryEditButtonFactoryWithUri:(id)arg1;
- (id)errorSnackbarFactoryWithReason:(id)arg1;
- (id)errorScreenFactoryWithReason:(id)arg1;
- (id)itemlistFactory;
- (id)topicFilterListFactory;
- (id)helpButtonFactory;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2 parentAbsoluteLocation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


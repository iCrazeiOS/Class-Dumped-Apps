//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RKMapping.h>

@class NSArray, NSMutableArray;

@interface RKDynamicMapping : RKMapping
{
    NSMutableArray *_mutableMatchers;
    NSArray *_possibleObjectMappings;
    CDUnknownBlockType _objectMappingForRepresentationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType objectMappingForRepresentationBlock; // @synthesize objectMappingForRepresentationBlock=_objectMappingForRepresentationBlock;
@property(retain, nonatomic) NSArray *possibleObjectMappings; // @synthesize possibleObjectMappings=_possibleObjectMappings;
@property(retain, nonatomic) NSMutableArray *mutableMatchers; // @synthesize mutableMatchers=_mutableMatchers;
- (_Bool)isEqualToMapping:(id)arg1;
- (id)objectMappingForRepresentation:(id)arg1;
- (void)removeMatcher:(id)arg1;
- (void)addMatcher:(id)arg1;
@property(readonly, nonatomic) NSArray *objectMappings;
@property(readonly, nonatomic) NSArray *matchers;
- (id)init;

@end


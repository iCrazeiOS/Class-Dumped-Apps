//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCItem.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OptionAvailability : BaseQVCItem
{
    NSString *optionName;
    NSMutableArray *inStock;
    NSMutableDictionary *notInStock;
    NSMutableDictionary *waitListed;
    long long _numberOfMarkedDownItems;
}

- (void).cxx_destruct;
@property long long numberOfMarkedDownItems; // @synthesize numberOfMarkedDownItems=_numberOfMarkedDownItems;
@property(copy) NSMutableDictionary *waitListed; // @synthesize waitListed;
@property(copy) NSMutableDictionary *notInStock; // @synthesize notInStock;
@property(copy) NSMutableArray *inStock; // @synthesize inStock;
@property(retain, nonatomic) NSString *optionName; // @synthesize optionName;
@property(readonly, getter=isMarkedDown) _Bool markedDown;
- (void)printValues;
- (_Bool)containsAvailabilityForIndex:(long long)arg1;
- (void)addAvailabilityCode:(id)arg1 forIndex:(long long)arg2;
- (id)initWithEmptyObjects;
- (id)initWithObjectsForInStock:(id)arg1 andNotInStock:(id)arg2 andWaitListed:(id)arg3;

@end


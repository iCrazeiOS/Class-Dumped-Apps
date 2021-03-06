//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCThermostatAtom;
@protocol HMEThermostatAtomModelControllerDelegate;

@protocol HMEThermostatAtomModelController <NSObject>
@property(readonly, nonatomic) _Bool hasCustomAtom;
@property(nonatomic) __weak id <HMEThermostatAtomModelControllerDelegate> delegate;
- (_Bool)hasReachedMaximumNumberOfAtoms;
- (_Bool)isEmpty;
- (long long)indexOfItem:(GHCThermostatAtom *)arg1;
- (GHCThermostatAtom *)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)updateScheduleAtom:(GHCThermostatAtom *)arg1 sender:(id)arg2;
- (void)removeScheduleAtomWithID:(unsigned int)arg1 sender:(id)arg2;
- (void)addScheduleAtom:(GHCThermostatAtom *)arg1 sender:(id)arg2;
- (void)fetchScheduleAtoms:(id)arg1;
@end


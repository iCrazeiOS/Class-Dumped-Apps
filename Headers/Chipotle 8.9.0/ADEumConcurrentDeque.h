//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ADEumConcurrentDeque : NSObject
{
    NSMutableArray *_store;
    unsigned long long _capacity;
}

@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)clear;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)drainTo:(id)arg1;
- (id)removeFirst;
- (_Bool)offerFirst:(id)arg1;
- (_Bool)offer:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GwtJsArray.h"

#import "JavaLangIterable-Protocol.h"

@class NSString;

@interface GwtJsArray_Impl : GwtJsArray <JavaLangIterable>
{
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)getIterable;
- (id)iterator;
- (id)initWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (id)initWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4;
- (id)initWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (id)initWithId:(id)arg1 withId:(id)arg2;
- (id)initWithId:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


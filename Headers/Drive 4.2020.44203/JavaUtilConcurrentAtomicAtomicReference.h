//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface JavaUtilConcurrentAtomicAtomicReference : NSObject <JavaIoSerializable>
{
    unsigned long long value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)accumulateAndGetWithId:(id)arg1 withJavaUtilFunctionBinaryOperator:(id)arg2;
- (id)getAndAccumulateWithId:(id)arg1 withJavaUtilFunctionBinaryOperator:(id)arg2;
- (id)updateAndGetWithJavaUtilFunctionUnaryOperator:(id)arg1;
- (id)getAndUpdateWithJavaUtilFunctionUnaryOperator:(id)arg1;
- (id)getAndSetWithId:(id)arg1;
- (_Bool)weakCompareAndSetWithId:(id)arg1 withId:(id)arg2;
- (_Bool)compareAndSetWithId:(id)arg1 withId:(id)arg2;
- (void)lazySetWithId:(id)arg1;
- (void)setWithId:(id)arg1;
- (id)get;
- (id)init;
- (id)initWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


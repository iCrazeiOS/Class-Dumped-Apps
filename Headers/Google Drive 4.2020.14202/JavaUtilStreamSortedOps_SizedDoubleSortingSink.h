//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamSortedOps_AbstractDoubleSortingSink.h"

@class IOSDoubleArray;

@interface JavaUtilStreamSortedOps_SizedDoubleSortingSink : JavaUtilStreamSortedOps_AbstractDoubleSortingSink
{
    IOSDoubleArray *array_;
    int offset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)acceptWithDouble:(double)arg1;
- (void)end;
- (void)beginWithLong:(long long)arg1;
- (id)initWithJavaUtilStreamSink:(id)arg1;

@end


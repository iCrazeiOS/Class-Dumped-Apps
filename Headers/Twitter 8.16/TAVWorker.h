//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAVWorker : NSObject
{
}

+ (void)enqueueBlock:(CDUnknownBlockType)arg1 withName:(id)arg2;
+ (void)enqueue:(id)arg1;
+ (id)queue;
+ (void)setIsSingleThreaded:(_Bool)arg1;
+ (_Bool)isSingleThreaded;

@end


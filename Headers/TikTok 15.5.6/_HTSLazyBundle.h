//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _HTSLazyBundle : NSObject
{
    _Bool _isUnloading;
    struct __CFBundle *_bundleRef;
    NSArray *_moduleDelegates;
}

@property(nonatomic) _Bool isUnloading; // @synthesize isUnloading=_isUnloading;
@property(retain, nonatomic) NSArray *moduleDelegates; // @synthesize moduleDelegates=_moduleDelegates;
@property(nonatomic) struct __CFBundle *bundleRef; // @synthesize bundleRef=_bundleRef;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAXContext : NSObject
{
    NSMutableDictionary *_captures;
}

- (void).cxx_destruct;
- (void)capturePathsFromContext:(id)arg1;
- (id)captureForPath:(id)arg1;
- (void)capturePath:(id)arg1 element:(id)arg2 key:(id)arg3;
- (id)init;

@end


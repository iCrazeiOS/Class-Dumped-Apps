//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSGConfigurationBuilder : NSObject
{
}

+ (void)loadSendThreads:(id)arg1 options:(id)arg2;
+ (void)loadMaxBreadcrumbs:(id)arg1 options:(id)arg2;
+ (void)loadEndpoints:(id)arg1 options:(id)arg2;
+ (void)loadStringArray:(id)arg1 options:(id)arg2 key:(id)arg3;
+ (void)loadString:(id)arg1 options:(id)arg2 key:(id)arg3;
+ (void)loadBoolean:(id)arg1 options:(id)arg2 key:(id)arg3;
+ (id)configurationFromOptions:(id)arg1;

@end


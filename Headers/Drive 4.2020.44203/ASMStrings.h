//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface ASMStrings : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)preferredLanguageParameter;
- (id)stringForID:(int)arg1 quantity:(long long)arg2;
- (id)stringForID:(int)arg1;
- (id)init;

@end


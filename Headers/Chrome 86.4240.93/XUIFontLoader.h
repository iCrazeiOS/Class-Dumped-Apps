//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/ELMDefaultFontLoader.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface XUIFontLoader : ELMDefaultFontLoader
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)defaultFontWithSize:(double)arg1;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/JSObjectionModule.h>

@class JSObjectionInjector;

@interface __JSObjectionInjectorDefaultModule : JSObjectionModule
{
    JSObjectionInjector *_injector;
}

- (void).cxx_destruct;
@property(nonatomic) __weak JSObjectionInjector *injector; // @synthesize injector=_injector;
- (void)configure;
- (id)initWithInjector:(id)arg1;

@end


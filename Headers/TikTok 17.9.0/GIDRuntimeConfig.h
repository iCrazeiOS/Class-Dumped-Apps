//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIDAppSwitchConfig, NSString;

@interface GIDRuntimeConfig : NSObject
{
    GIDAppSwitchConfig *_appSwitch;
    NSString *_developerMessage;
    NSString *_redirectURLString;
    NSString *_emmSupport;
}

+ (id)defaultConfig;
@property(readonly, nonatomic) NSString *emmSupport; // @synthesize emmSupport=_emmSupport;
@property(readonly, nonatomic) NSString *redirectURLString; // @synthesize redirectURLString=_redirectURLString;
@property(readonly, nonatomic) NSString *developerMessage; // @synthesize developerMessage=_developerMessage;
@property(readonly, nonatomic) GIDAppSwitchConfig *appSwitch; // @synthesize appSwitch=_appSwitch;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


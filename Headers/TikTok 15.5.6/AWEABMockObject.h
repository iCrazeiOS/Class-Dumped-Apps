//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEABMockObject : NSObject
{
    NSString *_title;
    NSString *_abDescription;
    NSArray *_owners;
    NSString *_appVersion;
    NSArray *_linesOfBusiness;
    NSArray *_modules;
    long long _layer;
    NSString *_serverString;
    NSString *_defaultValue;
}

+ (void)registerMockWithServerString:(id)arg1 defaultValue:(id)arg2 mockBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *serverString; // @synthesize serverString=_serverString;
@property(nonatomic) long long layer; // @synthesize layer=_layer;
@property(copy, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(copy, nonatomic) NSArray *linesOfBusiness; // @synthesize linesOfBusiness=_linesOfBusiness;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSArray *owners; // @synthesize owners=_owners;
@property(copy, nonatomic) NSString *abDescription; // @synthesize abDescription=_abDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)canRegister;

@end


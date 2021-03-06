//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAModelObject.h>

@class NSDictionary, NSString, NSURL;

@interface SMACSMNetworkAdObject : SMAModelObject
{
    NSURL *_impressionURL;
    NSURL *_clickURL;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _priority;
    NSString *_name;
    NSString *_adUnitId;
    NSString *_appId;
    NSString *_className;
    NSDictionary *_customData;
    NSString *_customDataString;
}

+ (id)codingKeys;
@property(copy, nonatomic) NSString *customDataString; // @synthesize customDataString=_customDataString;
@property(copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSURL *clickURL; // @synthesize clickURL=_clickURL;
@property(copy, nonatomic) NSURL *impressionURL; // @synthesize impressionURL=_impressionURL;
- (void).cxx_destruct;

@end


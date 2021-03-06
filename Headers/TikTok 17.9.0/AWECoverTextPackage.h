//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWECoverTextPackage : MTLModel <MTLJSONSerializing>
{
    unsigned long long _layoutType;
    unsigned long long _orientation;
    long long _paddingStart;
    long long _paddingEnd;
    long long _paddingTop;
    long long _paddingBottom;
    double _rotation;
    NSArray *_textConfigs;
    NSString *_effectPath;
}

+ (id)textConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *effectPath; // @synthesize effectPath=_effectPath;
@property(retain, nonatomic) NSArray *textConfigs; // @synthesize textConfigs=_textConfigs;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) long long paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) long long paddingEnd; // @synthesize paddingEnd=_paddingEnd;
@property(nonatomic) long long paddingStart; // @synthesize paddingStart=_paddingStart;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


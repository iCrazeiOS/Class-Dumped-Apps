//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdPreviewToolPreview-Protocol.h"

@class NSArray, NSDate, NSString;

@interface SPTAdPreviewToolLineItem : NSObject <SPTAdPreviewToolPreview>
{
    NSString *_name;
    long long _identifier;
    NSDate *_startDate;
    NSDate *_modifiedDate;
    long long _type;
    NSArray *_creatives;
}

@property(readonly, nonatomic) NSArray *creatives; // @synthesize creatives=_creatives;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(long long)arg2 startDate:(id)arg3 modifiedDate:(id)arg4 creatives:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


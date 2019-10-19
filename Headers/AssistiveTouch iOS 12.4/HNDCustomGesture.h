//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface HNDCustomGesture : NSObject <NSCopying>
{
    _Bool _isDoubleTap;
    _Bool _shouldPerformAtOriginalLocation;
    _Bool _hasLocalizableName;
    NSString *_name;
    NSArray *_points;
    NSArray *_times;
    NSArray *_forces;
    long long _orbGestureType;
}

+ (id)gestureWithDictionary:(id)arg1;
@property(nonatomic) _Bool hasLocalizableName; // @synthesize hasLocalizableName=_hasLocalizableName;
@property(nonatomic) _Bool shouldPerformAtOriginalLocation; // @synthesize shouldPerformAtOriginalLocation=_shouldPerformAtOriginalLocation;
@property(nonatomic) _Bool isDoubleTap; // @synthesize isDoubleTap=_isDoubleTap;
@property(nonatomic) long long orbGestureType; // @synthesize orbGestureType=_orbGestureType;
@property(retain, nonatomic) NSArray *forces; // @synthesize forces=_forces;
@property(retain, nonatomic) NSArray *times; // @synthesize times=_times;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)perform;
- (void)prepare;

@end


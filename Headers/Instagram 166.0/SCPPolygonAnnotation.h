//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSArray, SCPPolygonAnnotationStyle;

@interface SCPPolygonAnnotation : NSObject <NSCopying>
{
    NSArray *_points;
    SCPPolygonAnnotationStyle *_style;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCPPolygonAnnotationStyle *style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSArray *points; // @synthesize points=_points;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPoints:(id)arg1 style:(id)arg2;

@end


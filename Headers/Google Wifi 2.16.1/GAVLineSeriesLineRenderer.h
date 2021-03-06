//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIBezierPath;
@protocol GAVLineStyle;

@interface GAVLineSeriesLineRenderer : NSObject
{
    NSMutableArray *_objects;
    UIBezierPath *_path;
    NSMutableArray *_selectionDetails;
    id <GAVLineStyle> _style;
}

@property(retain, nonatomic) id <GAVLineStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSMutableArray *selectionDetails; // @synthesize selectionDetails=_selectionDetails;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)renderSegment;
- (void)addPoint:(struct CGPoint)arg1 style:(id)arg2 selectionDetails:(id)arg3;
- (id)init;

@end


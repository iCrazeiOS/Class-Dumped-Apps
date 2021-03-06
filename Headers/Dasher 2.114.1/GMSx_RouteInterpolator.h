//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSPolyline2D, GMSx_ETAMap;

@interface GMSx_RouteInterpolator : NSObject
{
    GMSPolyline2D *_polyline;
    GMSx_ETAMap *_etaMap;
    unsigned long long _startVertexIndex;
    unsigned long long _endVertexIndex;
    double _duration;
    double _distance;
    double _startOffsetMeters;
    double _startOffsetWorldUnits;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double startOffsetWorldUnits; // @synthesize startOffsetWorldUnits=_startOffsetWorldUnits;
@property(readonly, nonatomic) double startOffsetMeters; // @synthesize startOffsetMeters=_startOffsetMeters;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)getInterpolatedValuesForETA:(double)arg1 meters:(out double *)arg2 point:(out struct GMSPoint2D *)arg3;
- (id)multiProjectPoint:(struct GMSPoint2D)arg1 maxDistance:(double)arg2;
- (id)projectPoint:(struct GMSPoint2D)arg1 maxDistance:(double)arg2 startVertexIndex:(unsigned long long)arg3 endVertexIndex:(unsigned long long)arg4;
- (id)projectPoint:(struct GMSPoint2D)arg1 maxDistance:(double)arg2;
- (struct GMSCoordinate)interpolatedCoordinateAtMetersFromStart:(double)arg1;
- (struct GMSCoordinate)interpolatedCoordinateAtETA:(double)arg1;
- (struct GMSCoordinate)coordinateNotExceedingMetersFromStart:(double)arg1;
- (struct GMSCoordinate)coordinateNotExceedingETA:(double)arg1;
- (double)interpolatedETAFromLocation:(id)arg1 maxDistance:(double)arg2;
- (double)interpolatedETAFromLocation:(id)arg1;
- (double)interpolatedETAForMeters:(double)arg1;
- (double)metersRemainingFromLocation:(id)arg1;
- (double)metersFromStartAtETA:(double)arg1;
- (double)distanceFromStartToCoordinate:(struct GMSCoordinate)arg1 startVertexIndex:(unsigned long long)arg2 endVertexIndex:(unsigned long long)arg3;
- (double)distanceFromStartToCoordinate:(struct GMSCoordinate)arg1;
- (double)distanceFromStartToProjection:(id)arg1;
- (double)metersFromStartToCoordinate:(struct GMSCoordinate)arg1 startVertexIndex:(unsigned long long)arg2 endVertexIndex:(unsigned long long)arg3;
- (double)metersFromStartToCoordinate:(struct GMSCoordinate)arg1;
- (double)metersFromStartToProjection:(id)arg1;
- (double)metersFromStartToVertexIndex:(unsigned long long)arg1;
- (unsigned long long)vertexIndexNotExceedingMeters:(double)arg1;
- (id)initWithRoute:(id)arg1;
- (id)initWithETAMap:(id)arg1 polyline:(id)arg2 duration:(double)arg3 distance:(double)arg4;

@end


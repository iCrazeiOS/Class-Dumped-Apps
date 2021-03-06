//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GMSTileType : NSObject <NSCopying>
{
    GMSTileType *_multiZoomStylesTileTypeOverride;
    _Bool _usesDeviceDensity;
    _Bool _storable;
    _Bool _wantsMultiZoomStyles;
    _Bool _includesIndoorFeatures;
    _Bool _requestsOverdraw;
    _Bool _useGlobalStyles;
    _Bool _useOneToOneZoomTable;
    _Bool _usePaintZoomTable;
    _Bool _useTileFallback;
    int _mapTileType;
    unsigned int _paintTileType;
    unsigned int _tileVariant;
    int _dataType;
    int _clearcutLatencyCounter;
    NSString *_paintLayerID;
    NSString *_name;
}

+ (id)testTypeForPaintZoom;
+ (id)allTileTypes;
+ (id)tileTypeByPaintTileType:(int)arg1;
+ (id)tileTypeByTileFlags:(unsigned int)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *paintLayerID; // @synthesize paintLayerID=_paintLayerID;
@property(readonly, nonatomic) int clearcutLatencyCounter; // @synthesize clearcutLatencyCounter=_clearcutLatencyCounter;
@property(readonly, nonatomic) _Bool useTileFallback; // @synthesize useTileFallback=_useTileFallback;
@property(readonly, nonatomic) _Bool usePaintZoomTable; // @synthesize usePaintZoomTable=_usePaintZoomTable;
@property(readonly, nonatomic) _Bool useOneToOneZoomTable; // @synthesize useOneToOneZoomTable=_useOneToOneZoomTable;
@property(readonly, nonatomic) _Bool useGlobalStyles; // @synthesize useGlobalStyles=_useGlobalStyles;
@property(readonly, nonatomic) _Bool requestsOverdraw; // @synthesize requestsOverdraw=_requestsOverdraw;
@property(readonly, nonatomic) _Bool includesIndoorFeatures; // @synthesize includesIndoorFeatures=_includesIndoorFeatures;
@property(readonly, nonatomic) _Bool wantsMultiZoomStyles; // @synthesize wantsMultiZoomStyles=_wantsMultiZoomStyles;
@property(readonly, nonatomic, getter=isStorable) _Bool storable; // @synthesize storable=_storable;
@property(readonly, nonatomic) _Bool usesDeviceDensity; // @synthesize usesDeviceDensity=_usesDeviceDensity;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int tileVariant; // @synthesize tileVariant=_tileVariant;
@property(readonly, nonatomic) unsigned int paintTileType; // @synthesize paintTileType=_paintTileType;
@property(readonly, nonatomic) int mapTileType; // @synthesize mapTileType=_mapTileType;
- (_Bool)isBaseOrLabelOnlyType;
- (id)stringValue;
@property(readonly, nonatomic) unsigned int tileFlags;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)multiZoomStylesTileType;
- (void)overrideMultiZoomStylesTileType:(id)arg1;
- (id)initWithTileTypeInfo:(const struct GMSTileTypeInfo *)arg1;

@end


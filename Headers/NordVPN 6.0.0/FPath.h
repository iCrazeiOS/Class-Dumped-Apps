//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface FPath : NSObject <NSCopying>
{
    long long _pieceNum;
    NSArray *_pieces;
}

+ (id)empty;
+ (id)pathWithString:(id)arg1;
+ (id)relativePathFrom:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pieces; // @synthesize pieces=_pieces;
@property(nonatomic) long long pieceNum; // @synthesize pieceNum=_pieceNum;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)enumerateComponentsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)isEmpty;
- (id)childFromString:(id)arg1;
- (id)child:(id)arg1;
- (id)parent;
- (id)wireFormat;
- (id)toStringWithTrailingSlash:(_Bool)arg1;
- (id)toStringWithTrailingSlash;
- (id)toString;
- (id)getBack;
- (id)popFront;
- (unsigned long long)length;
- (id)getFront;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPieces:(id)arg1 andPieceNum:(long long)arg2;
- (id)initWith:(id)arg1;

@end


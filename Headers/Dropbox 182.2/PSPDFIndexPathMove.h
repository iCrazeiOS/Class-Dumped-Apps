//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSCopying-Protocol.h>

@class NSIndexPath;

@interface PSPDFIndexPathMove : NSObject <NSCopying>
{
    NSIndexPath *_from;
    NSIndexPath *_to;
}

+ (id)indexPathMoveFrom:(id)arg1 to:(id)arg2;
@property(copy, nonatomic) NSIndexPath *to; // @synthesize to=_to;
@property(copy, nonatomic) NSIndexPath *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initFrom:(id)arg1 to:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RNCConnectionState : NSObject
{
    _Bool _expensive;
    NSString *_type;
    NSString *_cellularGeneration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool expensive; // @synthesize expensive=_expensive;
@property(readonly, nonatomic) NSString *cellularGeneration; // @synthesize cellularGeneration=_cellularGeneration;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool connected;
- (_Bool)isEqualToConnectionState:(id)arg1;
- (id)initWithReachabilityFlags:(unsigned int)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class UIColor;

@interface FBImageDominantPaletteColor : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_color;
    long long _clusterSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long clusterSize; // @synthesize clusterSize=_clusterSize;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1 clusterSize:(long long)arg2;

@end


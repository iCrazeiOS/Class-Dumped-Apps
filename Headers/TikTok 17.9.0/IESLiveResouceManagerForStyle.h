//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESLiveResouceManager.h"

@class NSArray, NSMutableDictionary;

@interface IESLiveResouceManagerForStyle : IESLiveResouceManager
{
    NSMutableDictionary *_allStyles;
    NSArray *_tables;
}

+ (void)load;
@property(retain, nonatomic) NSArray *tables; // @synthesize tables=_tables;
@property(retain, nonatomic) NSMutableDictionary *allStyles; // @synthesize allStyles=_allStyles;
- (void).cxx_destruct;
- (id)parseValueStr:(id)arg1;
- (id)parseFromContent:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithAssetBundle:(id)arg1 type:(id)arg2;

@end


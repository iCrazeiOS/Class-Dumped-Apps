//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXConsumableResultViewModel : NSObject
{
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)rowAtIndexPath:(id)arg1;
- (void)updateModel:(id)arg1 inFreshContext:(_Bool)arg2 enablePromotionMessage:(_Bool)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWENearbyABManager : NSObject
{
    _Bool _useNewNearbyImp;
    double _neabyHorizontalMargin;
}

+ (double)neabyHorizontalMargin;
+ (id)sharedManager;
+ (void)load;
@property(nonatomic) _Bool useNewNearbyImp; // @synthesize useNewNearbyImp=_useNewNearbyImp;
@property(nonatomic) double neabyHorizontalMargin; // @synthesize neabyHorizontalMargin=_neabyHorizontalMargin;

@end


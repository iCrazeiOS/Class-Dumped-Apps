//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation;

@interface TGLocationPair : NSObject
{
    _Bool _current;
    _Bool _onlyLocationUpdate;
    CLLocation *_location;
}

+ (id)pairWithLocation:(id)arg1 isCurrent:(_Bool)arg2 onlyLocationUpdate:(_Bool)arg3;
@property(nonatomic) _Bool onlyLocationUpdate; // @synthesize onlyLocationUpdate=_onlyLocationUpdate;
@property(readonly, nonatomic, getter=isCurrent) _Bool current; // @synthesize current=_current;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;

@end


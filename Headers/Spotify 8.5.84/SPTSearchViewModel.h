//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol HUBViewModel;

@interface SPTSearchViewModel : NSObject
{
    id <HUBViewModel> _hubViewModel;
    NSArray *_filters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) id <HUBViewModel> hubViewModel; // @synthesize hubViewModel=_hubViewModel;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHubViewModel:(id)arg1;
- (id)initWithHubViewModel:(id)arg1 filters:(id)arg2;

@end


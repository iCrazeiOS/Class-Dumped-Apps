//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCTabBarViewIndicatorContext-Protocol.h"

@class NSString, UITabBarItem;

@interface MDCTabBarViewPrivateIndicatorContext : NSObject <MDCTabBarViewIndicatorContext>
{
    UITabBarItem *_item;
    struct CGRect _bounds;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITabBarItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithItem:(id)arg1 bounds:(struct CGRect)arg2 contentFrame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


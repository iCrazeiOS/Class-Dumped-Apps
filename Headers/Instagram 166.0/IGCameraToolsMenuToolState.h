//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCameraToolsMenuToolState : NSObject
{
    _Bool _visibleWhenCollapsed;
    _Bool _removing;
    double _collapsedAlpha;
    double _insertionPercentage;
    double _submenuExpansionPercentage;
}

@property(nonatomic) double submenuExpansionPercentage; // @synthesize submenuExpansionPercentage=_submenuExpansionPercentage;
@property(nonatomic, getter=isRemoving) _Bool removing; // @synthesize removing=_removing;
@property(nonatomic) double insertionPercentage; // @synthesize insertionPercentage=_insertionPercentage;
@property(nonatomic) _Bool visibleWhenCollapsed; // @synthesize visibleWhenCollapsed=_visibleWhenCollapsed;
@property(nonatomic) double collapsedAlpha; // @synthesize collapsedAlpha=_collapsedAlpha;

@end


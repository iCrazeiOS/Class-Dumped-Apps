//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCollectionViewLayoutAttributesModifier-Protocol.h>

@class NSString;

@interface IGCollectionViewLayoutAttributesModifierZIndex : NSObject <IGCollectionViewLayoutAttributesModifier>
{
    long long _zIndex;
}

- (id)indexPathDependenciesWithCollectionView:(id)arg1;
- (void)modifyAttributes:(id)arg1 withContext:(id)arg2;
- (id)initWithZIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


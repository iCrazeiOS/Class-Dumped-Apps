//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GILHierarchyProvider-Protocol.h>

@class GILClientVisualElement, GILInitialVisibilityAlphaThresholdSideChannel, NSPointerArray, NSString, UIView;

@interface GILHierarchyNode : NSObject <GILHierarchyProvider>
{
    NSPointerArray *_syntheticChildren;
    GILHierarchyNode *_syntheticParentHierarchyNode;
    GILClientVisualElement *_clientVisualElement;
    GILInitialVisibilityAlphaThresholdSideChannel *_alphaThresholdSideChannel;
    _Bool _markedAsRoot;
    UIView *_associatedView;
}

@property(readonly, nonatomic, getter=isMarkedAsRoot) _Bool markedAsRoot; // @synthesize markedAsRoot=_markedAsRoot;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
- (void).cxx_destruct;
- (id)syntheticChildren;
- (id)parentClientVisualElement;
- (id)childClientVisualElements;
@property(readonly, nonatomic) long long visibility;
@property(readonly, nonatomic, getter=isSynthetic) _Bool synthetic;
- (void)removeSyntheticParent;
- (void)setSyntheticParentFromHierarchyNode:(id)arg1;
- (id)initWithClientVisualElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


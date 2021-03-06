//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_IVAnnotation, NSMutableDictionary;
@protocol IVAnnotationsManagerDelegate;

@interface GMSx_IVAnnotationsManager : NSObject
{
    struct IconRenderer *_iconRenderer;
    double _nativeScale;
    NSMutableDictionary *_featureToAnnotationMap;
    GMSx_IVAnnotation *_currentlySelected;
    double _currentSizeMultiplier;
    id <IVAnnotationsManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IVAnnotationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyDelegateOfCurrentAnnotations;
- (void)setSelectedAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)addOrMergeAnnotationForFeature:(id)arg1 andSelect:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setSizeMultiplier:(double)arg1 renderLabelWhenSelected:(_Bool)arg2;
- (void)clearSelectedAnnotationWithAnimation:(_Bool)arg1;
-     // Error parsing type: B44@0:8{CGPoint=dd}16r^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}32B40, name: pickAnnotationAtTapPoint:cameraProto:animated:
-     // Error parsing type: v32@0:8@16r^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}24, name: updateAnnotationsForFeatures:cameraProto:
- (id)initWithIconRenderer:(struct IconRenderer *)arg1 nativeScale:(double)arg2;

@end


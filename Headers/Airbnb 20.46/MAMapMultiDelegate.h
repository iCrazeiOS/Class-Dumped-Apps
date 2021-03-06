//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAMapViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface MAMapMultiDelegate : NSObject <MAMapViewDelegate>
{
    id _originalDelegate;
    NSMutableArray *_delegates;
}

@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak id originalDelegate; // @synthesize originalDelegate=_originalDelegate;
- (void).cxx_destruct;
- (void)offlineDataDidReload:(id)arg1;
- (void)offlineDataWillReload:(id)arg1;
- (void)mapView:(id)arg1 didIndoorMapHidden:(id)arg2;
- (void)mapView:(id)arg1 didIndoorMapFloorIndexChanged:(id)arg2;
- (void)mapView:(id)arg1 didIndoorMapShowed:(id)arg2;
- (void)mapInitComplete:(id)arg1;
- (void)mapView:(id)arg1 didLongPressedAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didSingleTappedAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTouchPois:(id)arg2;
- (void)mapView:(id)arg1 didChangeOpenGLESDisabled:(_Bool)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 didAnnotationViewTapped:(id)arg2;
- (void)mapView:(id)arg1 didAnnotationViewCalloutTapped:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewRequireLocationAuth:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 mapDidZoomByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapWillZoomByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapDidMoveByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 mapWillMoveByUser:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 wasUserAction:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 wasUserAction:(_Bool)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionChanged:(id)arg1;
- (_Bool)isExistedSelector:(SEL)arg1;
- (id)getAllMapDelegates;
- (void)removeAllDelegates;
- (void)removeDelegate:(id)arg1;
- (void)removeInvalidDelegate;
- (void)addDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 isOriginalDelegate:(_Bool)arg2;
- (id)findDelegateObjectByDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


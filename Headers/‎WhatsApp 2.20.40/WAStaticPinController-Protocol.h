//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLPlacemark, NSString, WAMapView;
@protocol WAStaticPinControllerDelegate;

@protocol WAStaticPinController <NSObject>
+ (id)controllerAttachedToWAMapView:(WAMapView *)arg1;
@property(nonatomic) _Bool ignoreInsets;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) _Bool startFloating;
@property(nonatomic) _Bool doNotHighlightCallout;
@property(nonatomic, getter=isPinCalloutVisible) _Bool pinCalloutVisible;
@property(nonatomic, getter=isPinFloating) _Bool pinFloating;
@property(nonatomic, getter=isPinHidden) _Bool pinHidden;
@property(nonatomic) __weak id <WAStaticPinControllerDelegate> delegate;
- (void)setPinCalloutTitle:(NSString *)arg1;
- (void)enterStickerMode;
- (void)setAlpha:(double)arg1;
- (void)configurePinCalloutWithPlacemark:(CLPlacemark *)arg1 showActivity:(_Bool)arg2;
- (void)setPinCalloutVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dropPin;
- (void)liftPin;
- (void)setPinHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layout;
@end


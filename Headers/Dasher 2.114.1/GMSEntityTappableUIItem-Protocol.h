//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@protocol GMSEntityTappableUIItem;

@protocol GMSEntityTappableUIItem <NSObject>
- (_Bool)matchesTappableUIItem:(id <GMSEntityTappableUIItem>)arg1;
- (void)wasTapped;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (_Bool)shouldMoveToEndOnTap;
- (struct GMSEntityTapOrdering)tapOrdering;

@optional
- (_Bool)handleForceTouch;
- (struct CGPoint)tapEffectCenterForCamera:(const reffed_ptr_329922e5 *)arg1;
- (_Bool)isEnabled;
@end


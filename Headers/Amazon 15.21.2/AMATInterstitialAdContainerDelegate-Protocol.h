//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMATAdContainerDelegate-Protocol.h"

@class NSError, NSURL;

@protocol AMATInterstitialAdContainerDelegate <AMATAdContainerDelegate>
- (void)interstitialDidClickOnPrivateURL:(NSURL *)arg1;
- (void)interstitialDidFailToRenderWithError:(NSError *)arg1;
- (void)interstitialDidRender;
- (void)interstitialDidFailToPrerenderWithError:(NSError *)arg1;
- (void)interstitialDidPrerender;
@end


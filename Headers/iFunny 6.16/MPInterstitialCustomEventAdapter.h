//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBaseInterstitialAdapter.h>

#import <Funny/MPPrivateInterstitialCustomEventDelegate-Protocol.h>

@class MPAdConfiguration, MPInterstitialCustomEvent, MPRealTimeTimer, NSString;

@interface MPInterstitialCustomEventAdapter : MPBaseInterstitialAdapter <MPPrivateInterstitialCustomEventDelegate>
{
    _Bool _hasTrackedImpression;
    _Bool _hasTrackedClick;
    MPInterstitialCustomEvent *_interstitialCustomEvent;
    MPAdConfiguration *_configuration;
    MPRealTimeTimer *_expirationTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPRealTimeTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(nonatomic) _Bool hasTrackedClick; // @synthesize hasTrackedClick=_hasTrackedClick;
@property(nonatomic) _Bool hasTrackedImpression; // @synthesize hasTrackedImpression=_hasTrackedImpression;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MPInterstitialCustomEvent *interstitialCustomEvent; // @synthesize interstitialCustomEvent=_interstitialCustomEvent;
- (void)trackImpression;
- (void)interstitialCustomEventWillLeaveApplication:(id)arg1;
- (void)interstitialCustomEventDidReceiveTapEvent:(id)arg1;
- (void)interstitialCustomEventDidExpire:(id)arg1;
- (void)interstitialCustomEventDidDisappear:(id)arg1;
- (void)interstitialCustomEventWillDisappear:(id)arg1;
- (void)interstitialCustomEventDidAppear:(id)arg1;
- (void)interstitialCustomEventWillAppear:(id)arg1;
- (void)interstitialCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)interstitialCustomEvent:(id)arg1 didLoadAd:(id)arg2;
- (id)interstitialDelegate;
- (id)location;
- (id)adUnitId;
- (void)showInterstitialFromViewController:(id)arg1;
- (void)getAdWithConfiguration:(id)arg1 targeting:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


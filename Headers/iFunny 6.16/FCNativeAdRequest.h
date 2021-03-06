//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPNativeAdRequest.h>

@class IFMoPubUnitIdContentFeedTypeFactory, MPAdConfiguration, NSString, _TtC7FCBidor13StorageWinner;

@interface FCNativeAdRequest : MPNativeAdRequest
{
    _Bool requestTimedout;
    NSString *networkName;
    double loadingBeganTime;
    _Bool _shouldCallDelayedSetUpTierName;
    _Bool _isFCBiddingCustomEvent;
    _Bool _isSecondInstance;
    NSString *_tierName;
    MPAdConfiguration *_configuration;
    NSString *_mopubAdUnitId;
    unsigned long long _requestTimeoutType;
    long long _feedType;
    IFMoPubUnitIdContentFeedTypeFactory *_contentFeedTypeFactory;
    _TtC7FCBidor13StorageWinner *_bidWinner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSecondInstance; // @synthesize isSecondInstance=_isSecondInstance;
@property(nonatomic) _Bool isFCBiddingCustomEvent; // @synthesize isFCBiddingCustomEvent=_isFCBiddingCustomEvent;
@property(retain) _TtC7FCBidor13StorageWinner *bidWinner; // @synthesize bidWinner=_bidWinner;
@property(retain, nonatomic) IFMoPubUnitIdContentFeedTypeFactory *contentFeedTypeFactory; // @synthesize contentFeedTypeFactory=_contentFeedTypeFactory;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long requestTimeoutType; // @synthesize requestTimeoutType=_requestTimeoutType;
@property(copy, nonatomic) NSString *mopubAdUnitId; // @synthesize mopubAdUnitId=_mopubAdUnitId;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool shouldCallDelayedSetUpTierName; // @synthesize shouldCallDelayedSetUpTierName=_shouldCallDelayedSetUpTierName;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
- (double)requestsLoadingTimeout;
- (id)keywords;
- (void)dealloc;
- (id)extendedTierNameForTierName:(id)arg1;
- (id)extendedTierName;
- (void)timeout;
- (void)nativeCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)nativeCustomEvent:(id)arg1 didLoadAd:(id)arg2;
- (void)originalNativeCustomEvent:(id)arg1 didLoadAd:(id)arg2;
- (void)cancelTimeout;
- (void)setTargeting:(id)arg1;
- (void)setUpTimeoutWithInterval:(double)arg1 requestTimeoutType:(unsigned long long)arg2;
- (void)setNativeCustomEvent:(id)arg1;
- (void)setUpTierName;
- (void)getAdWithConfiguration:(id)arg1;
- (id)dspFormatter;

@end


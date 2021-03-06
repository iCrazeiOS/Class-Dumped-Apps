//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADAppOpenAd, GADObserverCollection;

@interface GADAppOpenAdView : UIView
{
    GADAppOpenAd *_appOpenAd;
    GADObserverCollection *_adObservers;
    CDUnknownBlockType _adCloseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType adCloseHandler; // @synthesize adCloseHandler=_adCloseHandler;
@property(retain, nonatomic) GADAppOpenAd *appOpenAd; // @synthesize appOpenAd=_appOpenAd;
- (void).cxx_destruct;
- (void)handleAdWillClose;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


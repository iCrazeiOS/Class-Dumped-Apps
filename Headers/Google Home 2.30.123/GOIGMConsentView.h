//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOIGMConsentBaseView.h"

@protocol GOIGMConsentViewDelegate;

@interface GOIGMConsentView : GOIGMConsentBaseView
{
    id <GOIGMConsentViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelAction;
- (void)linkAction;
- (id)initWithConsentURL:(id)arg1 ssoService:(id)arg2 identity:(id)arg3 UIResources:(id)arg4 delegate:(id)arg5;

@end


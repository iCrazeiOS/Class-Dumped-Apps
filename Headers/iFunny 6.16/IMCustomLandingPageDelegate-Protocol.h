//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IMCustomLandingPageProcessor, NSError;

@protocol IMCustomLandingPageDelegate <NSObject>
- (void)customLandingPageProcessorDidDismissScreen:(IMCustomLandingPageProcessor *)arg1;
- (void)customLandingPageProcessorWillDismissScreen:(IMCustomLandingPageProcessor *)arg1;
- (void)customLandingPageProcessorDidPresentScreen:(IMCustomLandingPageProcessor *)arg1;
- (void)customLandingPageProcessorWillPresentScreen:(IMCustomLandingPageProcessor *)arg1;

@optional
- (void)customLandingPageFailed:(IMCustomLandingPageProcessor *)arg1 error:(NSError *)arg2;
- (void)customLandingPageLoadSuccessful:(IMCustomLandingPageProcessor *)arg1;
@end


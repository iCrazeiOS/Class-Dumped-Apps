//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdEndCardNoMediaView, NSError;

@protocol FBAdEndCardNoMediaViewDelegate <NSObject>
- (void)endCardNoMediaViewDidTerminate:(FBAdEndCardNoMediaView *)arg1;
- (void)endCardNoMediaView:(FBAdEndCardNoMediaView *)arg1 didFailWithError:(NSError *)arg2;
- (void)endCardNoMediaViewWillClose:(FBAdEndCardNoMediaView *)arg1;
- (void)endCardNoMediaViewClicked:(FBAdEndCardNoMediaView *)arg1;
@end


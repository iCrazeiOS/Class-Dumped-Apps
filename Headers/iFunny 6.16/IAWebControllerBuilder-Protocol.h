//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IAAdModel;
@protocol IAWebControllerDelegate;

@protocol IAWebControllerBuilder <NSObject>
@property(nonatomic) _Bool isSecure;
@property(nonatomic) _Bool fraudDetectionEnabled;
@property(nonatomic) _Bool isInterstitial;
@property(retain, nonatomic) IAAdModel *model;
@property(nonatomic) __weak id <IAWebControllerDelegate> delegate;
@end


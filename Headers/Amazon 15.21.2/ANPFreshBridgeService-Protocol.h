//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANXBarComponentViewController, NSString, UIViewController;

@protocol ANPFreshBridgeService <NSObject>
- (void)updateSearchAlias:(NSString *)arg1 subnav:(UIViewController *)arg2;
- (_Bool)shouldShowSubNav:(NSString *)arg1;
- (ANXBarComponentViewController *)createFreshSubnavViewController;

@optional
- (ANXBarComponentViewController *)createLegacyFreshSubnavViewController;
@end


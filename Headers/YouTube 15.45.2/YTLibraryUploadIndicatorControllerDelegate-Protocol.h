//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTLibraryUploadIndicatorController;

@protocol YTLibraryUploadIndicatorControllerDelegate <NSObject>
- (void)uploadIndicatorController:(YTLibraryUploadIndicatorController *)arg1 stateDidChangeFromState:(long long)arg2 toState:(long long)arg3;

@optional
- (void)uploadIndicatorController:(YTLibraryUploadIndicatorController *)arg1 didUpdateLabelText:(NSString *)arg2;
@end


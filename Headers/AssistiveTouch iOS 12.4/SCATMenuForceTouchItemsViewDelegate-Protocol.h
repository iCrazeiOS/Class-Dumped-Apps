//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATMenuGestureSheetViewDelegate-Protocol.h"

@class SCATModernMenuGestureForceTouchSheet;

@protocol SCATMenuForceTouchItemsViewDelegate <SCATMenuGestureSheetViewDelegate>
- (void)didChooseMorePreviewActions;
- (void)didChoosePreviewActions:(SCATModernMenuGestureForceTouchSheet *)arg1;
- (void)didChooseForceTouchGesture:(SCATModernMenuGestureForceTouchSheet *)arg1;
- (void)didChooseForceTouchMaximum:(SCATModernMenuGestureForceTouchSheet *)arg1;
- (void)didChooseForceTouchCancel:(SCATModernMenuGestureForceTouchSheet *)arg1;
@end


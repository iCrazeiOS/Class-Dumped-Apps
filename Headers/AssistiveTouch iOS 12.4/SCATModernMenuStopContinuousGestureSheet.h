//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@protocol SCATMenuStopContinuousGestureItemViewDelegate;

@interface SCATModernMenuStopContinuousGestureSheet : SCATModernMenuGesturesSheetBase
{
    id <SCATMenuStopContinuousGestureItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCATMenuStopContinuousGestureItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuItemWasActivated:(id)arg1;
- (_Bool)shouldAllowDwellSelection;
- (_Bool)shouldKeepScannerAwake;
- (struct CGRect)rectToClear;
- (_Bool)allowsExitAction;
- (_Bool)allowsBackAction;
- (id)makeMenuItemsIfNeeded;

@end


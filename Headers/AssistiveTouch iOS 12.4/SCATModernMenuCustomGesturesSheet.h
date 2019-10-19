//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@class NSMutableArray;
@protocol SCATMenuCustomGestureItemsViewDelegate;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase
{
    NSMutableArray *_gestures;
    int _type;
    id <SCATMenuCustomGestureItemsViewDelegate> _delegate;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <SCATMenuCustomGestureItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadGestures;
- (void)menuItemWasActivated:(id)arg1;
- (_Bool)shouldUpdateMenuItem:(id)arg1;
- (id)backTitle;
- (id)makeMenuItemsIfNeeded;
- (void)viewControllerViewWillAppear:(_Bool)arg1;
- (id)init;
- (id)initWithType:(int)arg1 menu:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATPointPicker.h"

@interface SCATGridPointPicker : SCATPointPicker
{
}

- (_Bool)handleInputAction:(long long)arg1 withElement:(id)arg2;
- (void)scannerWillMakeManagerInactive:(id)arg1;
- (void)scannerWillMakeManagerActive:(id)arg1;
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;
- (id)lastElementWithOptions:(int *)arg1;
- (id)firstElementWithOptions:(int *)arg1;
- (id)_gridViewController;
- (long long)pickerType;
- (id)_initWithMenu:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WABloksKit/BKBloksComponentController.h>

@class UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface WABloksRichTextComponentController : BKBloksComponentController
{
    UITapGestureRecognizer *_tapGesture;
    UIView *_view;
}

- (void).cxx_destruct;
- (void)handleTapWithIndex:(long long)arg1;
- (void)componentWillRelinquishView:(id)arg1;
- (void)didTapOnString:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface YTReelWatchProgressView : UIView
{
    long long _currentIndex;
    NSMutableArray *_progressBars;
    _Bool _highlightCurrentBar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlightCurrentBar; // @synthesize highlightCurrentBar=_highlightCurrentBar;
- (id)progressBars;
- (void)layoutProgressBars;
- (void)removeProgressBar;
- (void)addProgressBar;
- (id)accessibilityValue;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)focusIndex:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long barCount;
- (id)initWithFrame:(struct CGRect)arg1;

@end


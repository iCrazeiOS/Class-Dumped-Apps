//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SXRatingStarsView : UIView
{
    double _rating;
    NSMutableArray *_stars;
}

@property(retain, nonatomic) NSMutableArray *stars; // @synthesize stars=_stars;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


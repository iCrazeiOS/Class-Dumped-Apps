//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSArray, NSString;

@interface HATSStarRating : UISlider
{
    NSArray *_stars;
    float _deltaX;
    _Bool _ratingSelected;
    long long _rating;
    long long _numberOfStars;
    NSString *_lowestRatingText;
    NSString *_highestRatingText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *highestRatingText; // @synthesize highestRatingText=_highestRatingText;
@property(readonly, copy, nonatomic) NSString *lowestRatingText; // @synthesize lowestRatingText=_lowestRatingText;
@property(readonly, nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(readonly, nonatomic) long long rating; // @synthesize rating=_rating;
- (id)accessibilityValue;
- (void)setStarFrames;
- (void)selectStar:(int)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithNumberOfStars:(long long)arg1 lowestRatingText:(id)arg2 highestRatingText:(id)arg3;

@end


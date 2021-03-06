//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRBannerPanel, GTPColor, LOGGsxVEData, NSString;

@interface CDRBanner : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPColor *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) CDRBannerPanel *bannerPanel; // @dynamic bannerPanel;
@property(copy, nonatomic) NSString *fifeURL3X1; // @dynamic fifeURL3X1;
@property(copy, nonatomic) NSString *fifeURL3X2; // @dynamic fifeURL3X2;
@property(copy, nonatomic) NSString *fifeURL4X1; // @dynamic fifeURL4X1;
@property(retain, nonatomic) GTPColor *gradientColor; // @dynamic gradientColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBannerPanel; // @dynamic hasBannerPanel;
@property(nonatomic) _Bool hasFifeURL3X1; // @dynamic hasFifeURL3X1;
@property(nonatomic) _Bool hasFifeURL3X2; // @dynamic hasFifeURL3X2;
@property(nonatomic) _Bool hasFifeURL4X1; // @dynamic hasFifeURL4X1;
@property(nonatomic) _Bool hasGradientColor; // @dynamic hasGradientColor;
@property(nonatomic) _Bool hasImageLink; // @dynamic hasImageLink;
@property(nonatomic) _Bool hasVeMetadata; // @dynamic hasVeMetadata;
@property(copy, nonatomic) NSString *imageLink; // @dynamic imageLink;
@property(retain, nonatomic) LOGGsxVEData *veMetadata; // @dynamic veMetadata;

@end


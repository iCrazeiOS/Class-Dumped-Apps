//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class UIColor, UIFont;

@interface IGNUXLayoutSpec : NSObject <NSCopying>
{
    UIFont *_headerFont;
    double _headerTopMargin;
    UIFont *_subHeaderFont;
    UIColor *_subHeaderTextColor;
    double _regularVerticalSpacing;
    double _smallVerticalSpacing;
    UIFont *_textLinkFont;
    double _footerHeight;
    double _sideMargin;
}

+ (id)defaultLayoutSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(readonly, nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(readonly, nonatomic) UIFont *textLinkFont; // @synthesize textLinkFont=_textLinkFont;
@property(readonly, nonatomic) double smallVerticalSpacing; // @synthesize smallVerticalSpacing=_smallVerticalSpacing;
@property(readonly, nonatomic) double regularVerticalSpacing; // @synthesize regularVerticalSpacing=_regularVerticalSpacing;
@property(readonly, nonatomic) UIColor *subHeaderTextColor; // @synthesize subHeaderTextColor=_subHeaderTextColor;
@property(readonly, nonatomic) UIFont *subHeaderFont; // @synthesize subHeaderFont=_subHeaderFont;
@property(readonly, nonatomic) double headerTopMargin; // @synthesize headerTopMargin=_headerTopMargin;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeaderFont:(id)arg1 headerTopMargin:(double)arg2 subheaderFont:(id)arg3 subHeaderTextColor:(id)arg4 regularVerticalSpacing:(double)arg5 smallVerticalSpacing:(double)arg6 textLinkFont:(id)arg7 footerHeight:(double)arg8 sideMargin:(double)arg9;

@end


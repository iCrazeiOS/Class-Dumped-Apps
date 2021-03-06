//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface IFTextLinePositionModifier : NSObject
{
    UIFont *_font;
    double _paddingTop;
    double _paddingBottom;
    double _lineHeightMultiple;
}

- (void).cxx_destruct;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (double)heightForLineCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


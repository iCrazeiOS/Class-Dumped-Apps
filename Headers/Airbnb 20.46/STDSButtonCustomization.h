//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STDSCustomization.h"

@class UIColor;

@interface STDSButtonCustomization : STDSCustomization
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    long long _titleStyle;
}

+ (id)defaultSettingsForButtonType:(long long)arg1;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;

@end


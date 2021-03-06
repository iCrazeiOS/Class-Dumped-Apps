//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIColor;

@interface SPTHomeMixMemberPileViewModel : NSObject
{
    NSString *_text;
    UIColor *_backgroundColor;
    NSString *_accessibilityText;
    NSURL *_imageURL;
    NSURL *_imageURLLarge;
    unsigned long long _visualStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long visualStyle; // @synthesize visualStyle=_visualStyle;
@property(readonly, copy, nonatomic) NSURL *imageURLLarge; // @synthesize imageURLLarge=_imageURLLarge;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)imageURLPreferringLarge:(_Bool)arg1;
- (unsigned long long)defaultVisualStyle;
- (id)initWithImageURL:(id)arg1 imageURLLarge:(id)arg2 text:(id)arg3 backgroundColor:(id)arg4 accessibilityText:(id)arg5;

@end


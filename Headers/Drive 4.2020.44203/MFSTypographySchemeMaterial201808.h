//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMDCTypographyScheming-Protocol.h"

@class GMDCFontStorage, NSString, UIFont;

@interface MFSTypographySchemeMaterial201808 : NSObject <GMDCTypographyScheming>
{
    GMDCFontStorage *_fontStorage;
}

+ (id)defaultFontScheme;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIFont *display3;
@property(readonly, copy, nonatomic) UIFont *display2;
@property(readonly, copy, nonatomic) UIFont *display1;
@property(readonly, copy, nonatomic) UIFont *subhead2;
@property(readonly, copy, nonatomic) UIFont *subhead1;
@property(readonly, copy, nonatomic) UIFont *overline;
@property(readonly, copy, nonatomic) UIFont *button;
@property(readonly, copy, nonatomic) UIFont *caption;
@property(readonly, copy, nonatomic) UIFont *body2;
@property(readonly, copy, nonatomic) UIFont *body1;
@property(readonly, copy, nonatomic) UIFont *subtitle2;
@property(readonly, copy, nonatomic) UIFont *subtitle1;
@property(readonly, copy, nonatomic) UIFont *headline6;
@property(readonly, copy, nonatomic) UIFont *headline5;
@property(readonly, copy, nonatomic) UIFont *headline4;
@property(readonly, copy, nonatomic) UIFont *headline3;
@property(readonly, copy, nonatomic) UIFont *headline2;
@property(readonly, copy, nonatomic) UIFont *headline1;
- (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
- (id)googleSansDisplayOfSize:(double)arg1 weight:(double)arg2;
- (id)googleSansOfSize:(double)arg1 weight:(double)arg2;
- (_Bool)mdc_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic) _Bool useCurrentContentSizeCategoryWhenApplied;
- (void)triggerDownloadWithDelay:(double)arg1;
- (id)initWithFontStorage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


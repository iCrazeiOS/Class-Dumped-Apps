//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface GSXAdBadge : NSObject
{
    NSString *_text;
    UIColor *_textColor;
    UIColor *_backgroundColor;
}

@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithAdBadge:(id)arg1;

@end


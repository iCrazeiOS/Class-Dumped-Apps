//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface AWEListSectionSeparatorModel : NSObject
{
    double _height;
    UIColor *_separatorColor;
    struct AWEListKitSeparatorInsets _separatorInsets;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) struct AWEListKitSeparatorInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)init;

@end


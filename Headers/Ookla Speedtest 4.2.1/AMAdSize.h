//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AMAdSize : NSObject
{
    NSNumber *_height;
    NSNumber *_width;
}

+ (id)from:(id)arg1 andHeight:(id)arg2 andAdServerWrapper:(id)arg3;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)getHeight;
- (id)getWidth;
- (id)getHeightInPixels;
- (id)getWidthInPixels;
- (id)initWithWidth:(id)arg1 andHeight:(id)arg2;
- (id)init;

@end


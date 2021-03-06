//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LynxImageProcessor-Protocol.h"

@class NSString;

@interface LynxFatImageProcessor : NSObject <LynxImageProcessor>
{
    struct CGSize _size;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _border;
    long long _contentMode;
}

- (id)processImage:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 padding:(struct UIEdgeInsets)arg2 border:(struct UIEdgeInsets)arg3 contentMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


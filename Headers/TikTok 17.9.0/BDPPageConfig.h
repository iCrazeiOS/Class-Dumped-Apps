//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDModel.h"

#import "NSCopying-Protocol.h"

@class BDPWindowConfig;

@interface BDPPageConfig : BDModel <NSCopying>
{
    _Bool _hideShareMenu;
    BDPWindowConfig *_window;
    BDPWindowConfig *_originWindow;
}

@property(nonatomic, getter=isHideShareMenu) _Bool hideShareMenu; // @synthesize hideShareMenu=_hideShareMenu;
@property(retain, nonatomic) BDPWindowConfig *originWindow; // @synthesize originWindow=_originWindow;
@property(copy, nonatomic) BDPWindowConfig *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


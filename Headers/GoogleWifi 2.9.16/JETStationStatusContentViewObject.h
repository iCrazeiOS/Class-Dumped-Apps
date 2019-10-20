//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class NSAttributedString, NSString;

@interface JETStationStatusContentViewObject : GOOBaseContentViewObject
{
    _Bool _online;
    _Bool _prioritized;
    _Bool _copyTitleOnLongPress;
    NSString *_title;
    CDUnknownBlockType _editButtonBlock;
    NSAttributedString *_attributedTitle;
    struct UIEdgeInsets _padding;
}

@property(readonly, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) CDUnknownBlockType editButtonBlock; // @synthesize editButtonBlock=_editButtonBlock;
@property(nonatomic) _Bool copyTitleOnLongPress; // @synthesize copyTitleOnLongPress=_copyTitleOnLongPress;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool prioritized; // @synthesize prioritized=_prioritized;
@property(nonatomic) _Bool online; // @synthesize online=_online;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)init;
- (id)initWithOnline:(_Bool)arg1 prioritized:(_Bool)arg2 title:(id)arg3;

@end


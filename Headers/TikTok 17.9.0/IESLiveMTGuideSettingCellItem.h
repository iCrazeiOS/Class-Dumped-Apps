//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSNumber, NSString;

@interface IESLiveMTGuideSettingCellItem : NSObject
{
    _Bool _isGroupHeader;
    NSString *_title;
    NSString *_detail;
    NSAttributedString *_attrDetail;
    double _contentHeight;
    long long _style;
    id _initialValue;
    NSNumber *_switchValue;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *switchValue; // @synthesize switchValue=_switchValue;
@property(retain, nonatomic) id initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isGroupHeader; // @synthesize isGroupHeader=_isGroupHeader;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(copy, nonatomic) NSAttributedString *attrDetail; // @synthesize attrDetail=_attrDetail;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, UIColor;

@interface MetaBadge : NSObject
{
    _Bool _isSelected;
    NSString *_pk;
    NSString *_title;
    NSString *_type;
    NSString *_descriptionText;
    NSDate *_endsAt;
    NSDate *_receivedAt;
    NSString *_placement;
    long long _position;
    NSString *_subredditPK;
    NSString *_userPK;
    NSArray *_media;
    NSDictionary *_collections;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSDictionary *collections; // @synthesize collections=_collections;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(readonly, copy, nonatomic) NSString *subredditPK; // @synthesize subredditPK=_subredditPK;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(readonly, copy, nonatomic) NSDate *receivedAt; // @synthesize receivedAt=_receivedAt;
@property(readonly, copy, nonatomic) NSDate *endsAt; // @synthesize endsAt=_endsAt;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)mediaSourceFittingSize:(struct CGSize)arg1;
- (id)initWithMetaProduct:(id)arg1;
- (id)initWithData:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class QTMCollectionViewStyleController, UIColor;

@interface QTMCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _editing;
    unsigned long long _cellStateMask;
    unsigned long long _sectionOrdinalPosition;
    long long _scrollDirection;
    QTMCollectionViewStyleController *_styleController;
    double _animateCellsOnAppearanceDelay;
    unsigned long long _accessoryType;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _accessoryInsets;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets accessoryInsets; // @synthesize accessoryInsets=_accessoryInsets;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) double animateCellsOnAppearanceDelay; // @synthesize animateCellsOnAppearanceDelay=_animateCellsOnAppearanceDelay;
@property(retain, nonatomic) QTMCollectionViewStyleController *styleController; // @synthesize styleController=_styleController;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) unsigned long long sectionOrdinalPosition; // @synthesize sectionOrdinalPosition=_sectionOrdinalPosition;
@property(nonatomic) unsigned long long cellStateMask; // @synthesize cellStateMask=_cellStateMask;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (unsigned long long)elementKind;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


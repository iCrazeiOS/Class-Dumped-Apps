//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETRightImageContentViewObject.h"

#import "JETOptionItem-Protocol.h"
#import "JETSelectActionListItem-Protocol.h"

@class JETOptionItemController, NSArray, NSString, QTMCollectionView, QTMCollectionViewModel, UIImage;

@interface JETExpandableSectionHeaderContentViewObject : JETRightImageContentViewObject <JETSelectActionListItem, JETOptionItem>
{
    _Bool _selected;
    JETOptionItemController *_optionController;
    UIImage *_expandSectionIcon;
    UIImage *_collapseSectionIcon;
    QTMCollectionView *_collectionView;
    QTMCollectionViewModel *_model;
    long long _section;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak QTMCollectionViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak QTMCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImage *collapseSectionIcon; // @synthesize collapseSectionIcon=_collapseSectionIcon;
@property(retain, nonatomic) UIImage *expandSectionIcon; // @synthesize expandSectionIcon=_expandSectionIcon;
@property(nonatomic) __weak JETOptionItemController *optionController; // @synthesize optionController=_optionController;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)itemWasSelected;
- (id)initWithTitle:(id)arg1 collectionView:(id)arg2 model:(id)arg3 section:(long long)arg4 items:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


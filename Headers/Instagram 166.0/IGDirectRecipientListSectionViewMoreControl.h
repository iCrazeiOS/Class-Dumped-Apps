//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectRecipientListSectionViewMoreControl : NSObject
{
    _Bool _onlyAllowOneTap;
    _Bool _haveTappedViewMore;
    long long _numberOfAvailableItemsToDisplay;
    long long _numberOfInitialItemsToDisplay;
    long long _numberOfMaxItemsToDisplay;
    long long _numberOfAdditionalItemsToDisplayOnTap;
    long long _numberOfCurrentlyDisplayedItems;
}

@property(readonly, nonatomic) _Bool haveTappedViewMore; // @synthesize haveTappedViewMore=_haveTappedViewMore;
@property(readonly, nonatomic) _Bool onlyAllowOneTap; // @synthesize onlyAllowOneTap=_onlyAllowOneTap;
@property(readonly, nonatomic) long long numberOfCurrentlyDisplayedItems; // @synthesize numberOfCurrentlyDisplayedItems=_numberOfCurrentlyDisplayedItems;
@property(readonly, nonatomic) long long numberOfAdditionalItemsToDisplayOnTap; // @synthesize numberOfAdditionalItemsToDisplayOnTap=_numberOfAdditionalItemsToDisplayOnTap;
@property(readonly, nonatomic) long long numberOfMaxItemsToDisplay; // @synthesize numberOfMaxItemsToDisplay=_numberOfMaxItemsToDisplay;
@property(readonly, nonatomic) long long numberOfInitialItemsToDisplay; // @synthesize numberOfInitialItemsToDisplay=_numberOfInitialItemsToDisplay;
@property(readonly, nonatomic) long long numberOfAvailableItemsToDisplay; // @synthesize numberOfAvailableItemsToDisplay=_numberOfAvailableItemsToDisplay;
- (void)incrementFromTapInSection;
- (_Bool)shouldDisplayViewMoreButton;
- (id)initWithNumberOfAvailableItemsToDisplay:(long long)arg1 numberOfInitialItemsToDisplay:(long long)arg2 numberOfMaxItemsToDisplay:(long long)arg3 numberOfAdditionalItemsToDisplayOnTap:(long long)arg4 onlyAllowOneTap:(_Bool)arg5 haveTappedViewMore:(_Bool)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKCollectionCellModel-Protocol.h"

@class GDKAvatarViewObject, NSAttributedString, NSString, UIColor, UIImage;
@protocol NSObject;

@interface GDKApprovalEventState : NSObject <GDKCollectionCellModel>
{
    NSString *_eventID_7;
    GDKAvatarViewObject *_userAvatar_10;
    NSString *_date_4;
    NSAttributedString *_authorAndStatus_15;
    UIColor *_statusColor_11;
    UIImage *_decisionIcon_12;
    NSString *_comment_7;
    NSString *_addedItem_9;
    NSString *_addedItemA11YLabel_18;
    NSString *_removedItem_11;
    NSString *_removedItemA11YLabel_20;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *removedItemA11YLabel; // @synthesize removedItemA11YLabel=_removedItemA11YLabel_20;
@property(readonly, copy, nonatomic) NSString *removedItem; // @synthesize removedItem=_removedItem_11;
@property(readonly, copy, nonatomic) NSString *addedItemA11YLabel; // @synthesize addedItemA11YLabel=_addedItemA11YLabel_18;
@property(readonly, copy, nonatomic) NSString *addedItem; // @synthesize addedItem=_addedItem_9;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment_7;
@property(readonly, nonatomic) UIImage *decisionIcon; // @synthesize decisionIcon=_decisionIcon_12;
@property(readonly, copy, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor_11;
@property(readonly, copy, nonatomic) NSAttributedString *authorAndStatus; // @synthesize authorAndStatus=_authorAndStatus_15;
@property(readonly, copy, nonatomic) NSString *date; // @synthesize date=_date_4;
@property(readonly, nonatomic) GDKAvatarViewObject *userAvatar; // @synthesize userAvatar=_userAvatar_10;
@property(readonly, copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID_7;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <NSObject> diffIdentifier;
@property(readonly, nonatomic) Class cellClass;
- (id)initWithEventID:(id)arg1 userAvatar:(id)arg2 date:(id)arg3 authorAndStatus:(id)arg4 statusColor:(id)arg5 decisionIcon:(id)arg6 comment:(id)arg7 addedItem:(id)arg8 addedItemA11YLabel:(id)arg9 removedItem:(id)arg10 removedItemA11YLabel:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


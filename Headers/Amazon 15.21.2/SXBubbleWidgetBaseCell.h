//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXResultsCellBase.h"

#import "SXResultsCellRequired-Protocol.h"

@class NSString, SXBubbleWidgetBackgroundView;

@interface SXBubbleWidgetBaseCell : SXResultsCellBase <SXResultsCellRequired>
{
}

+ (id)sizingCell;
+ (struct UIEdgeInsets)contentInsetsForIndexPath:(id)arg1;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) SXBubbleWidgetBackgroundView *backgroundView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


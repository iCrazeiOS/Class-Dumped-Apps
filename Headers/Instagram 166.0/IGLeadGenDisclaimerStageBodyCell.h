//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGLeadGenCollectionViewDynamicSizingCell-Protocol.h>

@class IGCoreTextView, NSString;
@protocol IGLeadGenDisclaimerStageSecureSharingLinkDelegate;

@interface IGLeadGenDisclaimerStageBodyCell : UICollectionViewCell <IGCoreTextLinkHandler, IGLeadGenCollectionViewDynamicSizingCell>
{
    IGCoreTextView *_paragraph;
    id <IGLeadGenDisclaimerStageSecureSharingLinkDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGLeadGenDisclaimerStageSecureSharingLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


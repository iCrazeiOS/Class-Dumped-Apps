//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGPreviewingAction-Protocol.h>

@class IGImageView, IGPhoto, IGProductItem, IGSaveProductLogger, IGShoppingCartLogger, IGShoppingConsumptionFeedItemLogger, IGShoppingProductReportViewController, IGUserSession, NSString, UIView;
@protocol IGShoppingProductDetailsViewType;

@interface IGShoppingProductPreviewViewController : IGViewController <IGPreviewingAction>
{
    IGUserSession *_userSession;
    IGProductItem *_productItem;
    IGPhoto *_productImage;
    IGImageView *_imageView;
    long long _actions;
    UIView<IGShoppingProductDetailsViewType> *_productDetailsView;
    IGSaveProductLogger *_saveProductLogger;
    NSString *_sourceAnalyticsModule;
    NSString *_shoppingSessionId;
    IGShoppingCartLogger *_bagLogger;
    IGShoppingConsumptionFeedItemLogger *_consumptionLogger;
    IGShoppingProductReportViewController *_reportViewController;
}

- (void).cxx_destruct;
- (void)_presentProductDebugInfo;
- (_Bool)_isMediaFirstProductPreview;
- (void)_updateBagStatus;
- (void)_updateSaveStatusWithShouldSave:(_Bool)arg1;
- (void)_didTapReportMiscategorizedProduct;
- (void)_didTapReportThumbnailRelevancy;
- (void)_didTapNotInterested;
- (void)_didTapFlagProduct;
- (void)_logRemoveBagItem;
- (void)_logProductPreviewImpression;
- (id)_actions;
- (id)previewActionItems;
- (id)previewActionBarItems;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 productImage:(id)arg3 actions:(long long)arg4 sourceAnalyticsModule:(id)arg5 shoppingSessionId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


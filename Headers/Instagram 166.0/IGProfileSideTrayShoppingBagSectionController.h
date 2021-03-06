//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingCartBadgingListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSideTrayItemSectionController-Protocol.h>

@class IGSideTrayRowItemModel, IGUserSession, NSString;
@protocol IGSideTrayItemSectionControllerDelegate, IGSideTrayLoggingController;

@interface IGProfileSideTrayShoppingBagSectionController : IGListSectionController <IGShoppingCartBadgingListener, IGSideTrayItemSectionController>
{
    IGUserSession *_userSession;
    IGSideTrayRowItemModel *_item;
    id <IGSideTrayLoggingController> _loggingController;
    NSString *_analyticsModule;
    _Bool _profileIsInTabBar;
    id <IGSideTrayItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingBagBadgingService:(id)arg1 primaryEntryPointBadgingStateChanged:(_Bool)arg2;
- (void)shoppingBagBadgingService:(id)arg1 didUpdateTotalBagItemCount:(unsigned long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (_Bool)isBadged;
- (long long)badgeCount;
- (id)initWithUserSession:(id)arg1 profileIsInTabBar:(_Bool)arg2 analyticsModule:(id)arg3 delegate:(id)arg4 loggingController:(id)arg5;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 loggingController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


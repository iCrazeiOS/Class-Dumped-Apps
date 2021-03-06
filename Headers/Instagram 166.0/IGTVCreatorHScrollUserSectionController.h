//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGTVCreatorHScrollUserCellDelegate-Protocol.h>

@class IGFollowController, IGTVDestinationLoggingContext, IGUserSession, NSString;
@protocol IGTVCreatorHScrollUserSectionControllerDelegate;

@interface IGTVCreatorHScrollUserSectionController : IGListGenericSectionController <IGTVCreatorHScrollUserCellDelegate>
{
    IGUserSession *_userSession;
    IGFollowController *_followController;
    IGTVDestinationLoggingContext *_loggingContext;
    id <IGTVCreatorHScrollUserSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVCreatorHScrollUserSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_analyticsModule;
- (void)creatorHScrollUserCellDidChangeTraitCollectionColor:(id)arg1;
- (struct UIEdgeInsets)inset;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


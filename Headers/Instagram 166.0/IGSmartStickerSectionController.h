//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGGalleryDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGGradientTextStickerTrayCellDelegate-Protocol.h>
#import <FBSharedFramework/IGListDisplayDelegate-Protocol.h>

@class IGGalleryDataSource, IGUserSession, NSString;
@protocol IGSmartStickerModelType, IGSmartStickerSectionControllerDelegate;

@interface IGSmartStickerSectionController : IGListSectionController <IGGalleryDataSourceDelegate, IGListDisplayDelegate, IGGradientTextStickerTrayCellDelegate>
{
    unsigned long long _type;
    id <IGSmartStickerModelType> _item;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGUserSession *_userSession;
    NSString *_module;
    IGGalleryDataSource *_galleryDataSource;
    id <IGSmartStickerSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSmartStickerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gradientTextStickerTrayCellDidShowTooltip:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)_showToolTipIfPossibleOnCell:(id)arg1 tooltipText:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)displayDelegate;
- (id)_attributedStringWithImage:(id)arg1 text:(id)arg2;
- (void)hideToolTipIfPossible;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)arg1;
- (void)galleryDataSource:(id)arg1 didChange:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithType:(unsigned long long)arg1 userSession:(id)arg2 module:(id)arg3 layoutConfig:(struct IGGridLayoutConfiguration)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


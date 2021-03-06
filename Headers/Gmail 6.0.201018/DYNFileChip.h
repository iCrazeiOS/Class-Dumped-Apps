//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNChip.h"

#import "GSCImageViewDelegate-Protocol.h"

@class DYNFileChipTitlebar, GSCImageView, NSLayoutConstraint, NSString, UIColor;
@protocol DYNColorSchemeService, DYNDriveMetadataProtocol, DYNUploadMetadataProtocol;

@interface DYNFileChip : DYNChip <GSCImageViewDelegate>
{
    id <DYNColorSchemeService> _colorSchemeService;
    _Bool _forPostRoom;
    id <DYNDriveMetadataProtocol> _driveMetadata;
    id <DYNUploadMetadataProtocol> _uploadMetadata;
    GSCImageView *_noThumbnailIconView;
    DYNFileChipTitlebar *_titlebar;
    GSCImageView *_thumbnailView;
    UIColor *_noThumbnailIconTintColor;
    NSLayoutConstraint *_titlebarTopConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forPostRoom; // @synthesize forPostRoom=_forPostRoom;
@property(retain, nonatomic) NSLayoutConstraint *titlebarTopConstraint; // @synthesize titlebarTopConstraint=_titlebarTopConstraint;
@property(retain, nonatomic) UIColor *noThumbnailIconTintColor; // @synthesize noThumbnailIconTintColor=_noThumbnailIconTintColor;
@property(retain, nonatomic) GSCImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) DYNFileChipTitlebar *titlebar; // @synthesize titlebar=_titlebar;
@property(retain, nonatomic) GSCImageView *noThumbnailIconView; // @synthesize noThumbnailIconView=_noThumbnailIconView;
@property(retain, nonatomic) id <DYNUploadMetadataProtocol> uploadMetadata; // @synthesize uploadMetadata=_uploadMetadata;
@property(retain, nonatomic) id <DYNDriveMetadataProtocol> driveMetadata; // @synthesize driveMetadata=_driveMetadata;
- (id)accessibilityLabel;
- (void)clearCacheForCurrentImage;
- (void)loadingStateChanged:(id)arg1;
- (void)setThumbnailImageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
- (void)setIsRestricted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forPostRoom:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


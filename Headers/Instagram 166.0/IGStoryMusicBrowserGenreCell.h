//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

#import <FBSharedFramework/IGListBindable-Protocol.h>

@class IGStoryMusicBrowserDisclosureIndicator, IGStoryMusicBrowserRoundedImageView, NSString, NSURL, UIImageView, UILabel;

@interface IGStoryMusicBrowserGenreCell : IGBouncyCollectionViewCell <IGListBindable>
{
    IGStoryMusicBrowserRoundedImageView *_albumArtImageView;
    UIImageView *_placeholderImageView;
    UILabel *_genreTitleLabel;
    IGStoryMusicBrowserDisclosureIndicator *_disclosureIndicator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *genreTitle;
@property(retain, nonatomic) NSURL *albumArtURL;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


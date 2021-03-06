//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PSPDFKitUI/PSPDFGalleryContentViewCaption-Protocol.h>

@class NSString, UILabel;

@interface PSPDFGalleryContentCaptionView : UIView <PSPDFGalleryContentViewCaption>
{
    NSString *_caption;
    UILabel *_label;
    struct UIEdgeInsets _contentInset;
}

+ (Class)layerClass;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (void)updateLabel;
- (void)setContentScaleFactor:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


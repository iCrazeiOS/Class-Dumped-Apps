//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UIScrollView;

@interface JETCaptionView : UIView
{
    UILabel *_caption;
    UIButton *_captionButton;
    UILabel *_subCaptionLabel;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *subCaptionLabel; // @synthesize subCaptionLabel=_subCaptionLabel;
@property(retain, nonatomic) UIButton *captionButton; // @synthesize captionButton=_captionButton;
@property(readonly, nonatomic) UILabel *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCaption:(id)arg1 subCaption:(id)arg2;
@property(retain, nonatomic) NSString *subCaptionAccessibilityLabel;
@property(retain, nonatomic) NSString *subCaption;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCaption:(id)arg1 subCaptionView:(id)arg2;

@end


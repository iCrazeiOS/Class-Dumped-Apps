//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentView.h>

#import <Module_Framework/GOOCheckboxContentViewDelegate-Protocol.h>

@class MDFSpritedAnimationView, NSString;

@interface GOOCheckboxContentView : GOOTextContentView <GOOCheckboxContentViewDelegate>
{
    MDFSpritedAnimationView *_animationView;
}

+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (id)checkboxSpriteSheetForChecked:(_Bool)arg1;
- (void).cxx_destruct;
- (void)checkboxObject:(id)arg1 didUpdateChecked:(_Bool)arg2 animated:(_Bool)arg3;
- (void)updateCheckmarkWithChecked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCheckmarkWithChecked:(_Bool)arg1;
- (void)updateViewWithObject:(id)arg1;
- (struct CGRect)frameForCheckboxView:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


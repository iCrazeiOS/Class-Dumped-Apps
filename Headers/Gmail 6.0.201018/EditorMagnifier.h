//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface EditorMagnifier : UIView
{
    UIView *_cursor;
    UIImageView *_glass;
    UIView *_screenshot;
    struct CGPoint _magnifyPoint;
    struct CGRect _cursorRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint magnifyPoint; // @synthesize magnifyPoint=_magnifyPoint;
@property(nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
- (void)layoutSubviews;
- (void)updateScreenshot;
- (void)show;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


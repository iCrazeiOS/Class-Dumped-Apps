//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGTextView;

@interface IBGSurveyTextView : UIView
{
    UIView *_containerView;
    IBGTextView *_textView;
}

@property(retain, nonatomic) IBGTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)getText;
- (void)updateConstraints;
- (id)init;

@end


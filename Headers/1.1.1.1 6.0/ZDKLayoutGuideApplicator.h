//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;

@interface ZDKLayoutGuideApplicator : NSObject
{
    _Bool _isTopLayoutGuide;
    UIView *_topLevelView;
    UIViewController *_viewController;
}

+ (_Bool)isConstraint:(id)arg1 betweenView:(id)arg2 andView:(id)arg3;
+ (id)constraintsBetweenView:(id)arg1 containerView:(id)arg2 layoutPosition:(unsigned long long)arg3;
+ (id)visualConstraintForPosition:(unsigned long long)arg1 constant:(double)arg2;
@property(nonatomic) _Bool isTopLayoutGuide; // @synthesize isTopLayoutGuide=_isTopLayoutGuide;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIView *topLevelView; // @synthesize topLevelView=_topLevelView;
- (void).cxx_destruct;
- (id)layoutGuideForPosition:(unsigned long long)arg1;
- (void)applyFixForLayoutPosition:(unsigned long long)arg1;
- (void)applyFix;
- (void)assertTopLevelView;
- (void)awakeFromNib;
- (id)initWithViewController:(id)arg1 topLevelView:(id)arg2 layoutPosition:(unsigned long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveLayoutContainerItem;

@interface IESLiveLayoutContainerView : UIView
{
    IESLiveLayoutContainerItem *_item;
    CDUnknownBlockType _willRemoveFromSuperView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType willRemoveFromSuperView; // @synthesize willRemoveFromSuperView=_willRemoveFromSuperView;
@property(nonatomic) __weak IESLiveLayoutContainerItem *item; // @synthesize item=_item;
- (id)description;
- (void)willRemoveSubview:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end


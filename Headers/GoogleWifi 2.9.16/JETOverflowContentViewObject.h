//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETTextContentViewObject.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol JETOverflowContentViewDelegate;

@interface JETOverflowContentViewObject : JETTextContentViewObject <UIActionSheetDelegate>
{
    NSDictionary *_actions;
    id <JETOverflowContentViewDelegate> _delegate;
}

+ (id)objectWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 delegate:(id)arg4;
@property(nonatomic) __weak id <JETOverflowContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


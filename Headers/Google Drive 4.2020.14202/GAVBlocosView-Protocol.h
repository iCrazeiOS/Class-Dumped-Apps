//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol GAVBlocosViewDelegate;

@protocol GAVBlocosView
@property(nonatomic) __weak id <GAVBlocosViewDelegate> blocosViewDelegate;
- (void)removeAllAnchoredComments;
- (void)unfocusDiscussionAnchor;
- (void)removeAnchoredCommentWithAnchorID:(NSString *)arg1;
- (void)focusAnchoredCommentWithAnchorID:(NSString *)arg1;
- (void)drawAnchoredCommentWithAnchorID:(NSString *)arg1;
@end


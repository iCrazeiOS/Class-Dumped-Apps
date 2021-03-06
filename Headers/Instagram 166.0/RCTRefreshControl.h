//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIRefreshControl.h>

#import <FBSharedFramework/RCTCustomRefreshContolProtocol-Protocol.h>
#import <FBSharedFramework/RCTRefreshableProtocol-Protocol.h>

@class NSString, UIColor, UIScrollView;

@interface RCTRefreshControl : UIRefreshControl <RCTRefreshableProtocol, RCTCustomRefreshContolProtocol>
{
    _Bool _isInitialRender;
    _Bool _currentRefreshingState;
    unsigned long long _currentRefreshingStateClock;
    unsigned long long _currentRefreshingStateTimestamp;
    _Bool _refreshingProgrammatically;
    NSString *_title;
    UIColor *_titleColor;
    CDUnknownBlockType _onRefresh;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType onRefresh; // @synthesize onRefresh=_onRefresh;
- (void)refreshControlValueChanged;
- (void)setCurrentRefreshingState:(_Bool)arg1;
- (void)setRefreshing:(_Bool)arg1;
- (void)_updateTitle;
- (void)setTitleColor:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)endRefreshingProgrammatically;
- (void)beginRefreshingProgrammatically;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;

@end


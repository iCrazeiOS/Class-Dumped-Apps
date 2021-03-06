//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IGAPIClient, IGDirectRecipientListByFollowingStatusNetworkDataSourceDelegate;

@interface IGDirectRecipientListByFollowingStatusNetworkDataSource : NSObject
{
    id <IGAPIClient> _networker;
    NSArray *_defaultRecipients;
    NSString *_mediaId;
    _Bool _loading;
    id <IGDirectRecipientListByFollowingStatusNetworkDataSourceDelegate> _delegate;
    NSArray *_followingRecipients;
    NSArray *_notFollowingRecipients;
    NSString *_errorMessage;
    double _timeout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSArray *notFollowingRecipients; // @synthesize notFollowingRecipients=_notFollowingRecipients;
@property(readonly, nonatomic) NSArray *followingRecipients; // @synthesize followingRecipients=_followingRecipients;
@property(nonatomic) __weak id <IGDirectRecipientListByFollowingStatusNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onFetchFailed:(id)arg1;
- (void)_onResponseReceived:(id)arg1;
- (void)_performFetchNetworkRequest:(id)arg1;
- (void)fetchData;
- (id)initWithNetworker:(id)arg1 mediaId:(id)arg2 defaultRecipients:(id)arg3 timeout:(double)arg4;

@end


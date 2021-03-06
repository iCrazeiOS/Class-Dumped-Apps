//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedGalleryAssetFetchRequest-Protocol.h>

@class IGMediaMetadata, IGUser, NSString;
@protocol IGFeedGalleryAssetFetchRequestDelegate, IGStoryMediaAsset;

@interface IGFeedCameraStoryAssetFetchRequest : NSObject <IGFeedGalleryAssetFetchRequest>
{
    id <IGStoryMediaAsset> _asset;
    long long _cameraPosition;
    IGUser *_user;
    _Bool _isCanceled;
    IGMediaMetadata *_mediaMetadata;
    NSString *_identifier;
    id <IGFeedGalleryAssetFetchRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFeedGalleryAssetFetchRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_tryFinishWithImage:(id)arg1;
- (void)_tryFinishWithVideoAsset:(id)arg1;
- (void)cancel;
- (void)fetch;
- (id)initWithStoryMediaAsset:(id)arg1 cameraPosition:(long long)arg2 user:(id)arg3 mediaMetadata:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


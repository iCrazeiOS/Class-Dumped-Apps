//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRAssetEvent.h>

@interface CMRAssetCommandTimeoutEvent : CMRAssetEvent
{
    struct Handle<std::__1::shared_ptr<core::AssetCommandTimeoutEvent>, std::__1::shared_ptr<core::AssetCommandTimeoutEvent>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (id)assetId;
- (long long)commandType;
- (const shared_ptr_6761d5e4 *)cppRef;
- (id)initWithCpp:(const shared_ptr_6761d5e4 *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PRMCollectibleDelegate;

@interface PRMCollectibleProviderNode : NSObject
{
    Class _collectibleClass;
    NSMutableDictionary *_collectibles;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<PRMCollectibleDelegate> *_delegate;
}

@property(retain, nonatomic) Class collectibleClass; // @synthesize collectibleClass=_collectibleClass;
@property(nonatomic) __weak NSObject<PRMCollectibleDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)releaseCollectibleInContext:(id)arg1;
- (id)collectibleForContext:(id)arg1;
- (id)initWithType:(Class)arg1;

@end


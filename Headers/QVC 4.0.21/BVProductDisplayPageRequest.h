//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVBaseSortableProductRequest.h>

@class NSString;

@interface BVProductDisplayPageRequest : BVBaseSortableProductRequest
{
    NSString *_productId;
}

@property(retain) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)createParams;
- (void)sendProductsAnalytics:(id)arg1;
- (void)loadProducts:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)load:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithProductId:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GlowIngressRequestModel, GlowToasterDismissRequestModel, GlowToasterRequestModel, GlowToasterUseAddressRequestModel;

@protocol DEXServiceResource <NSObject>
- (void)useAddressWithRequest:(GlowToasterUseAddressRequestModel *)arg1 completionHandler:(void (^)(GlowToasterUseAddressResponseModel *, NSError *))arg2;
- (void)dismissToasterWithDismissRequest:(GlowToasterDismissRequestModel *)arg1 completionHandler:(void (^)(GlowToasterDismissResponseModel *, NSError *))arg2;
- (void)toasterWithToasterRequest:(GlowToasterRequestModel *)arg1 completionHandler:(void (^)(GlowToasterResponseModel *, NSError *))arg2;
- (void)ingressWithIngressRequest:(GlowIngressRequestModel *)arg1 completionHandler:(void (^)(GlowIngressModel *, NSError *))arg2;
@end


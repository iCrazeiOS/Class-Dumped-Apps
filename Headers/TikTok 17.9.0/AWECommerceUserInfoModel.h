//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWECommerceLinkUserInfoModel, NSArray, NSString;

@interface AWECommerceUserInfoModel : MTLModel <MTLJSONSerializing>
{
    _Bool _showStarAtlasGuide;
    _Bool _hasAdsEntry;
    _Bool _canAuthAuctionAdVideo;
    _Bool _isAdPartner;
    _Bool _adAuthorizationEnabled;
    _Bool _adRevenueSharing;
    _Bool _hasTCMEntry;
    long long _TCMType;
    AWECommerceLinkUserInfoModel *_linkUserInfo;
    long long _authVideoSettingType;
    NSArray *_adRevenueRits;
}

+ (id)authVideoSettingTypeJSONTransformer;
+ (id)linkUserInfoJSONTransformer;
+ (id)TCMTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasTCMEntry; // @synthesize hasTCMEntry=_hasTCMEntry;
@property(copy, nonatomic) NSArray *adRevenueRits; // @synthesize adRevenueRits=_adRevenueRits;
@property(nonatomic) _Bool adRevenueSharing; // @synthesize adRevenueSharing=_adRevenueSharing;
@property(nonatomic, getter=isAdAuthorizationEnabled) _Bool adAuthorizationEnabled; // @synthesize adAuthorizationEnabled=_adAuthorizationEnabled;
@property(nonatomic) _Bool isAdPartner; // @synthesize isAdPartner=_isAdPartner;
@property(nonatomic) _Bool canAuthAuctionAdVideo; // @synthesize canAuthAuctionAdVideo=_canAuthAuctionAdVideo;
@property(nonatomic) long long authVideoSettingType; // @synthesize authVideoSettingType=_authVideoSettingType;
@property(nonatomic) _Bool hasAdsEntry; // @synthesize hasAdsEntry=_hasAdsEntry;
@property(retain, nonatomic) AWECommerceLinkUserInfoModel *linkUserInfo; // @synthesize linkUserInfo=_linkUserInfo;
@property(nonatomic) _Bool showStarAtlasGuide; // @synthesize showStarAtlasGuide=_showStarAtlasGuide;
@property(nonatomic) long long TCMType; // @synthesize TCMType=_TCMType;
- (_Bool)shouldRequestAdsInProfile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


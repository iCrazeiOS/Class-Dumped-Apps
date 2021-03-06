//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IFAdvertisementStatisticBannerInfo : NSObject
{
    NSString *_tierId;
    NSString *_tierName;
    NSString *_originalId;
    NSData *_screenshotData;
}

+ (id)dWHTierNameTranslator;
+ (id)buildFromAdView:(id)arg1 shouldTakeScreenshot:(_Bool)arg2 keywords:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *screenshotData; // @synthesize screenshotData=_screenshotData;
@property(copy, nonatomic) NSString *originalId; // @synthesize originalId=_originalId;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
@property(copy, nonatomic) NSString *tierId; // @synthesize tierId=_tierId;
- (id)initWithTierId:(id)arg1 tierName:(id)arg2 networkName:(id)arg3 keywords:(id)arg4 originalId:(id)arg5 screenshotData:(id)arg6 isBidding:(_Bool)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface TTAdSplashRealTimeFetchModelItem : JSONModel
{
    NSString *_item_key;
    NSString *_splash_id;
    NSString *_log_extra;
    NSString *_splash_ad_id;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *splash_ad_id; // @synthesize splash_ad_id=_splash_ad_id;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *splash_id; // @synthesize splash_id=_splash_id;
@property(retain, nonatomic) NSString *item_key; // @synthesize item_key=_item_key;
- (void).cxx_destruct;

@end


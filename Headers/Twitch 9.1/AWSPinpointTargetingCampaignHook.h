//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSString;

@interface AWSPinpointTargetingCampaignHook : AWSModel
{
    NSString *_lambdaFunctionName;
    long long _mode;
    NSString *_webUrl;
}

+ (id)modeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *lambdaFunctionName; // @synthesize lambdaFunctionName=_lambdaFunctionName;

@end


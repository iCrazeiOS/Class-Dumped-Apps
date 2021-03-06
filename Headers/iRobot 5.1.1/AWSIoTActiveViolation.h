//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSIoTBehavior, AWSIoTMetricValue, NSDate, NSString;

@interface AWSIoTActiveViolation : AWSModel
{
    AWSIoTBehavior *_behavior;
    NSDate *_lastViolationTime;
    AWSIoTMetricValue *_lastViolationValue;
    NSString *_securityProfileName;
    NSString *_thingName;
    NSString *_violationId;
    NSDate *_violationStartTime;
}

+ (id)violationStartTimeJSONTransformer;
+ (id)lastViolationValueJSONTransformer;
+ (id)lastViolationTimeJSONTransformer;
+ (id)behaviorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *violationStartTime; // @synthesize violationStartTime=_violationStartTime;
@property(retain, nonatomic) NSString *violationId; // @synthesize violationId=_violationId;
@property(retain, nonatomic) NSString *thingName; // @synthesize thingName=_thingName;
@property(retain, nonatomic) NSString *securityProfileName; // @synthesize securityProfileName=_securityProfileName;
@property(retain, nonatomic) AWSIoTMetricValue *lastViolationValue; // @synthesize lastViolationValue=_lastViolationValue;
@property(retain, nonatomic) NSDate *lastViolationTime; // @synthesize lastViolationTime=_lastViolationTime;
@property(retain, nonatomic) AWSIoTBehavior *behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;

@end


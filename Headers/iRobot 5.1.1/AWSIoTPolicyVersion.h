//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSNumber, NSString;

@interface AWSIoTPolicyVersion : AWSModel
{
    NSDate *_createDate;
    NSNumber *_isDefaultVersion;
    NSString *_versionId;
}

+ (id)createDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) NSNumber *isDefaultVersion; // @synthesize isDefaultVersion=_isDefaultVersion;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
- (void).cxx_destruct;

@end


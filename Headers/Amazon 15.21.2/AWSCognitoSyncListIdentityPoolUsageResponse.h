//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSCognitoSyncListIdentityPoolUsageResponse : AWSModel
{
    NSNumber *_count;
    NSArray *_identityPoolUsages;
    NSNumber *_maxResults;
    NSString *_nextToken;
}

+ (id)identityPoolUsagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSNumber *maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSArray *identityPoolUsages; // @synthesize identityPoolUsages=_identityPoolUsages;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComAmazonPcompModel_ResultInfo.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface ComAmazonPcompModel_RSCompInfo : ComAmazonPcompModel_ResultInfo <NSCoding, NSCopying>
{
    NSString *_finalQuery;
    NSNumber *_totalResultCount;
}

+ (id)type;
@property(retain, nonatomic) NSNumber *totalResultCount; // @synthesize totalResultCount=_totalResultCount;
@property(copy, nonatomic) NSString *finalQuery; // @synthesize finalQuery=_finalQuery;
- (void).cxx_destruct;

@end


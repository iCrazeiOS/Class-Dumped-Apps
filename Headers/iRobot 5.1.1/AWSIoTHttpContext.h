//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDictionary, NSString;

@interface AWSIoTHttpContext : AWSModel
{
    NSDictionary *_headers;
    NSString *_queryString;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;

@end


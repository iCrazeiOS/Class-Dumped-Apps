//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerDataRequest.h"

@class NSDictionary;

@interface GCDWebServerURLEncodedFormRequest : GCDWebServerDataRequest
{
    NSDictionary *_arguments;
}

+ (id)mimeType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
- (id)description;
- (_Bool)close:(id *)arg1;

@end


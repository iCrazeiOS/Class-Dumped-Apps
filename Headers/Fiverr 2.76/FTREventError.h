//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ForterSDK/FTREventBase.h>

@class NSDictionary, NSString;

@interface FTREventError : FTREventBase
{
    NSString *_trackType;
    NSDictionary *_errorData;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSDictionary *errorData; // @synthesize errorData=_errorData;
@property(copy, nonatomic) NSString *trackType; // @synthesize trackType=_trackType;
- (void).cxx_destruct;
- (id)eventDataDictionary;
- (id)toDictionary;

@end


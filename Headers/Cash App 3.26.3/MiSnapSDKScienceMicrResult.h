//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MiSnapSDKScienceMicrResult : NSObject
{
    long long _confidence;
    NSString *_micrString;
    NSString *_routing;
    NSString *_account;
    NSString *_check;
    NSString *_amount;
    NSString *_ird;
    NSString *_tranCode;
    struct CGRect _micrPosition;
}

@property(retain, nonatomic) NSString *tranCode; // @synthesize tranCode=_tranCode;
@property(retain, nonatomic) NSString *ird; // @synthesize ird=_ird;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *check; // @synthesize check=_check;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *routing; // @synthesize routing=_routing;
@property(nonatomic) struct CGRect micrPosition; // @synthesize micrPosition=_micrPosition;
@property(retain, nonatomic) NSString *micrString; // @synthesize micrString=_micrString;
@property(nonatomic) long long confidence; // @synthesize confidence=_confidence;
- (void).cxx_destruct;

@end


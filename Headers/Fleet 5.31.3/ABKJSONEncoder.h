//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSDictionary;

@interface ABKJSONEncoder : NSObject
{
    NSDateFormatter *_dateFormatter;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (id)encodeRecursively:(id)arg1;
- (id)encodeValidNotEmptyOrNil:(id)arg1;
- (id)encodeOrNil:(id)arg1;
- (id)encode:(id)arg1;
- (id)init;

@end


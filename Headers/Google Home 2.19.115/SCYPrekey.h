//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCYPrekey : NSObject
{
    long long _id;
    NSData *_key;
    NSData *_signature;
}

+ (id)prekeyWithId:(long long)arg1 key:(id)arg2 signature:(id)arg3;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *key; // @synthesize key=_key;
@property(readonly, nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(long long)arg1 key:(id)arg2 signature:(id)arg3;

@end


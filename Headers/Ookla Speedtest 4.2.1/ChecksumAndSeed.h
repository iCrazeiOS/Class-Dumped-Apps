//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ChecksumAndSeed : NSObject
{
    NSData *_seed;
    NSString *_checksum;
}

+ (id)emptySeed;
+ (id)seedWithSeed:(id)arg1 checksum:(id)arg2;
@property(readonly, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) NSData *seed; // @synthesize seed=_seed;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSeed:(id)arg1 checksum:(id)arg2;

@end


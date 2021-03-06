//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSError, NSMutableArray;

@interface IosMslStream : NSObject
{
    NSError *_lastError;
    NSConditionLock *_conditionLock;
    NSMutableArray *_dataArray;
    long long _dataOffset;
    long long _readTotal;
}

@property(nonatomic) long long readTotal; // @synthesize readTotal=_readTotal;
@property(nonatomic) long long dataOffset; // @synthesize dataOffset=_dataOffset;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSConditionLock *conditionLock; // @synthesize conditionLock=_conditionLock;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (int)read:(vector_5b3bfa18 *)arg1 length:(unsigned long long)arg2 timeout:(int)arg3;
- (id)init;

@end


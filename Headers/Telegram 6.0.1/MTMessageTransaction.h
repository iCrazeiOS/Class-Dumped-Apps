//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTMessageTransaction : NSObject
{
    _Bool _allowServiceMode;
    _Bool _requiresEncryption;
    id _internalId;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _prepared;
    CDUnknownBlockType _failed;
    NSArray *_messagePayload;
}

@property(nonatomic) _Bool requiresEncryption; // @synthesize requiresEncryption=_requiresEncryption;
@property(nonatomic) _Bool allowServiceMode; // @synthesize allowServiceMode=_allowServiceMode;
@property(retain, nonatomic) NSArray *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(copy, nonatomic) CDUnknownBlockType failed; // @synthesize failed=_failed;
@property(copy, nonatomic) CDUnknownBlockType prepared; // @synthesize prepared=_prepared;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) id internalId; // @synthesize internalId=_internalId;
- (void).cxx_destruct;
- (id)initWithMessagePayload:(id)arg1 prepared:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end


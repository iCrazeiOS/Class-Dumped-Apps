//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol IESIMMessageProtocol <NSObject>
@property(readonly) NSDictionary *properties;
@property(readonly) NSDictionary *localExt;
@property(readonly) NSDictionary *syncedExt;
@property(readonly) long long status;
@property(readonly) NSString *senderSecID;
@property(readonly, nonatomic) _Bool isInvalided;
@property(readonly) long long sender;
@property(readonly) long long messageType;
@property(readonly) NSDate *createdAt;
@property(readonly) NSNumber *serverMessageID;
@property(readonly) long long recallerRole;
@property(readonly) _Bool recalled;
@property(readonly) NSDictionary *content;
@property(readonly) NSString *belongingConversationIdentifier;
@property(readonly) NSString *identifier;
- (void)recallMessageWithCompletion:(void (^)(NSError *))arg1;
- (void)deleteWithMode:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)setLocalExtWithKeys:(NSArray *)arg1 values:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setLocalExtEntry:(NSString *)arg1 value:(id)arg2 completion:(void (^)(NSError *))arg3;
- (NSDictionary *)syncedExtInternal;
- (long long)pullIndex;
- (long long)orderIndex;
@end


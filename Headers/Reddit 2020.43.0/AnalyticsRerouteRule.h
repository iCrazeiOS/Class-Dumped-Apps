//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsRerouteRule : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _ticket_typeIsSet;
    _Bool _priorityIsSet;
    _Bool _target_queue_idIsSet;
    int _priority;
    NSString *_id;
    NSString *_ticket_type;
    NSString *_target_queue_id;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool target_queue_idIsSet; // @synthesize target_queue_idIsSet=_target_queue_idIsSet;
@property(copy, nonatomic) NSString *target_queue_id; // @synthesize target_queue_id=_target_queue_id;
@property(nonatomic) _Bool priorityIsSet; // @synthesize priorityIsSet=_priorityIsSet;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool ticket_typeIsSet; // @synthesize ticket_typeIsSet=_ticket_typeIsSet;
@property(copy, nonatomic) NSString *ticket_type; // @synthesize ticket_type=_ticket_type;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetTarget_queue_id;
- (void)unsetPriority;
- (void)unsetTicket_type;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 ticket_type:(id)arg2 priority:(int)arg3 target_queue_id:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


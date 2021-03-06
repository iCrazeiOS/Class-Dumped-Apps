//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveFansGroupMessageQueue : NSObject
{
    _Bool _allowDispatch;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fansGroupMessageArray;
}

@property(retain, nonatomic) NSMutableArray *fansGroupMessageArray; // @synthesize fansGroupMessageArray=_fansGroupMessageArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool allowDispatch; // @synthesize allowDispatch=_allowDispatch;
- (void).cxx_destruct;
- (void)clearAllMessage;
- (id)dispatchMessage;
- (void)addMessageAtFirst:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)init;

@end


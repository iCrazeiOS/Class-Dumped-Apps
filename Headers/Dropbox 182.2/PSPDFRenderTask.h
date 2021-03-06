//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableSet, PSPDFRenderRequest, UIImage;
@protocol PSPDFRenderTaskDelegate;

@interface PSPDFRenderTask : NSObject
{
    // Error parsing type: {atomic<PSPDFRenderTaskState>="__a_"Aq}, name: _state
    CDUnknownBlockType _completionHandler;
    PSPDFRenderRequest *_request;
    id <PSPDFRenderTaskDelegate> _delegate;
    unsigned long long _priority;
    UIImage *_image;
    NSMutableSet *_groups;
    NSError *_error;
}

+ (void)groupTasks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)callbackLockQueue;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableSet *groups; // @synthesize groups=_groups;
@property(retain) UIImage *image; // @synthesize image=_image;
@property unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <PSPDFRenderTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSPDFRenderRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)leaveAllGroups;
- (void)addToGroup:(id)arg1;
- (void)completeTask;
- (void)cancel;
- (void)transitionedToCancelledState;
- (void)transitionedToCompletedState;
- (void)transitionToState:(long long)arg1;
@property(readonly, getter=isCompleted) _Bool completed;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1;

@end


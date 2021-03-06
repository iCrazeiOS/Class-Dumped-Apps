//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTAssistantServices, NSArray;

@interface ASTResponsePresenter : NSObject
{
    _Bool _synchronously;
    ASTAssistantServices *_services;
    NSArray *_segments;
    unsigned long long _state;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _synthesizeStopBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType synthesizeStopBlock; // @synthesize synthesizeStopBlock=_synthesizeStopBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool synchronously; // @synthesize synchronously=_synchronously;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) __weak ASTAssistantServices *services; // @synthesize services=_services;
- (void)tryPresentTTSInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryPresentStatusText:(id)arg1;
- (void)tryPresentText:(id)arg1;
- (void)tryPresentViewsForSegment:(id)arg1;
- (void)presentSegmentsSynchronouslyAtIndex:(unsigned long long)arg1;
- (void)stop;
- (void)start;
- (id)initWithSegments:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end


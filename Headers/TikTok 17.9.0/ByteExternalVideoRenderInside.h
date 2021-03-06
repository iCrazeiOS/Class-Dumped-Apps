//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ByteVideoSinkProtocol-Protocol.h"

@class ByteRtcVideoCanvas, NSString, OnerExternalVideoRenderInside, OnerVideoFrozenStatistics, UIView;
@protocol ByteExternalVideoRenderEventDelegate;

@interface ByteExternalVideoRenderInside : NSObject <ByteVideoSinkProtocol>
{
    _Bool _renderEnable;
    _Bool _isNeedSetWindows;
    id <ByteExternalVideoRenderEventDelegate> _eventDelegate;
    OnerExternalVideoRenderInside *_render;
    UIView *_view;
    NSString *_uid;
    ByteRtcVideoCanvas *_canvas;
    OnerVideoFrozenStatistics *_frozenStatistics;
    NSString *_realUid;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedSetWindows; // @synthesize isNeedSetWindows=_isNeedSetWindows;
@property(nonatomic) _Bool renderEnable; // @synthesize renderEnable=_renderEnable;
@property(retain, nonatomic) NSString *realUid; // @synthesize realUid=_realUid;
@property(retain, nonatomic) OnerVideoFrozenStatistics *frozenStatistics; // @synthesize frozenStatistics=_frozenStatistics;
@property(retain, nonatomic) ByteRtcVideoCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) OnerExternalVideoRenderInside *render; // @synthesize render=_render;
@property(nonatomic) __weak id <ByteExternalVideoRenderEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void)mirror:(_Bool)arg1;
- (void)setDisplayCanvas:(id)arg1;
- (void)setDisplayView:(id)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 rotation:(long long)arg2 extendedData:(id)arg3;
- (long long)pixelFormat;
- (void)shouldDispose;
- (void)shouldStop;
- (void)shouldStart;
- (_Bool)shouldInitialize;
- (void)setOnerVideoFrozenStatisticsDelegate:(id)arg1 UID:(id)arg2;
- (void)dealloc;
- (id)initWithRender:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


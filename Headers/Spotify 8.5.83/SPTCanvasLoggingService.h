//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEventSender, SPTLogCenter;

@interface SPTCanvasLoggingService : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logCanvasTapTooltipImpression;
- (void)logTapArtwork;
- (void)logTapVisuals;
- (void)logChangeSettingsWasTapped;
- (void)logCanvasSettingsTooltipImpression;
- (void)logCanvasToggleTooltipImpression;
- (void)logToggleArtworkWasTapped;
- (void)logToggleVisualsWasTapped;
- (void)logSettingsMenuCanvasEnabled:(_Bool)arg1 itemIndex:(int)arg2;
- (id)initWithLogCenter:(id)arg1 eventSender:(id)arg2;

@end


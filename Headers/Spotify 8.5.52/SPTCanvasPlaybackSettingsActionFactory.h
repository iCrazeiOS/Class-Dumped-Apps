//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCanvasLoggingService, SPTCanvasTooltipPresentationManager;
@protocol SPTLinkDispatcher;

@interface SPTCanvasPlaybackSettingsActionFactory : NSObject
{
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCanvasTooltipPresentationManager *_tooltipPresentationManager;
    SPTCanvasLoggingService *_logService;
}

@property(readonly, nonatomic) SPTCanvasLoggingService *logService; // @synthesize logService=_logService;
@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)actionForTrack:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1 logService:(id)arg2 tooltipPresentationManager:(id)arg3;

@end


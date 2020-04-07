//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCanvasForceArtworkManager, SPTCanvasLoggingService, SPTCanvasTooltipPresentationManager;
@protocol GLUETheme;

@interface SPTCanvasSwitchViewControllerFactory : NSObject
{
    id <GLUETheme> _theme;
    SPTCanvasForceArtworkManager *_forceArtworkManager;
    SPTCanvasLoggingService *_logService;
    SPTCanvasTooltipPresentationManager *_tooltipManager;
}

@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) SPTCanvasLoggingService *logService; // @synthesize logService=_logService;
@property(readonly, nonatomic) SPTCanvasForceArtworkManager *forceArtworkManager; // @synthesize forceArtworkManager=_forceArtworkManager;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithTheme:(id)arg1 forceArtworkManager:(id)arg2 logService:(id)arg3 tooltipManager:(id)arg4;

@end


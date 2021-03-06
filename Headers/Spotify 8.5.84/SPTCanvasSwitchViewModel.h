//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTCanvasForceArtworkManager, SPTCanvasLoggingService, SPTCanvasTooltipPresentationManager;
@protocol SPTCanvasSwitchViewModelDelegate;

@interface SPTCanvasSwitchViewModel : NSObject
{
    NSString *_leadingOptionTitle;
    NSString *_trailingOptionTitle;
    id <SPTCanvasSwitchViewModelDelegate> _delegate;
    SPTCanvasForceArtworkManager *_forceArtworkManager;
    SPTCanvasTooltipPresentationManager *_tooltipManager;
    SPTCanvasLoggingService *_logService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTCanvasLoggingService *logService; // @synthesize logService=_logService;
@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) SPTCanvasForceArtworkManager *forceArtworkManager; // @synthesize forceArtworkManager=_forceArtworkManager;
@property(nonatomic) __weak id <SPTCanvasSwitchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *trailingOptionTitle; // @synthesize trailingOptionTitle=_trailingOptionTitle;
@property(readonly, nonatomic) NSString *leadingOptionTitle; // @synthesize leadingOptionTitle=_leadingOptionTitle;
- (void)didTapTrailingOption;
- (void)didTapLeadingOption;
- (void)autoSelectOption;
- (id)initWithForceArtworkManager:(id)arg1 tooltipManager:(id)arg2 logService:(id)arg3 leadingOptionTitle:(id)arg4 trailingOptionTitle:(id)arg5;

@end


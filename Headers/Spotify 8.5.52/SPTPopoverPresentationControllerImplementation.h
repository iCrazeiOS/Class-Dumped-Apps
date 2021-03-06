//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPopoverPresentationController-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSString;
@protocol SPTInstrumentationModalPresentationMonitor, SPTPresenterViewControllerProvider;

@interface SPTPopoverPresentationControllerImplementation : NSObject <UIPopoverPresentationControllerDelegate, SPTPopoverPresentationController>
{
    id <SPTPresenterViewControllerProvider> _presenterProvider;
    id <SPTInstrumentationModalPresentationMonitor> _presentationMonitor;
}

@property(retain, nonatomic) id <SPTInstrumentationModalPresentationMonitor> presentationMonitor; // @synthesize presentationMonitor=_presentationMonitor;
@property(nonatomic) __weak id <SPTPresenterViewControllerProvider> presenterProvider; // @synthesize presenterProvider=_presenterProvider;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 onParentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewControllerWithPopoverPresentation:(id)arg1 onParentViewController:(id)arg2 animated:(_Bool)arg3 permittedArrowDirections:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 fromParentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewControllerWithPopoverPresentation:(id)arg1 onParentViewController:(id)arg2 fromView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentViewControllerWithPopoverPresentation:(id)arg1 onParentViewController:(id)arg2 fromBarButtonItem:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithPresenterProvider:(id)arg1 modalPresentationMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


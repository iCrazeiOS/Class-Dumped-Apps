//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "IESLiveMTPopPanelService-Protocol.h"

@class IESLiveMTPopPanelManager, NSString;

@interface IESLiveMTPopPanelManagerFragment : NSObject <IESLiveMTPopPanelService, HTSLiveComponent>
{
    IESLiveMTPopPanelManager *_popPanelManager;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTPopPanelManager *popPanelManager; // @synthesize popPanelManager=_popPanelManager;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)hasPanel;
- (void)decreasePanelCount;
- (void)increasePanelCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


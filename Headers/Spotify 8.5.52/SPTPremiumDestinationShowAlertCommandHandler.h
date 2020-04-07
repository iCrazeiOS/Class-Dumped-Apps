//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@class SPTPremiumDestinationLogger;
@protocol SPTAlertInterface;

@interface SPTPremiumDestinationShowAlertCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTAlertInterface> _alertInterface;
    SPTPremiumDestinationLogger *_logger;
}

@property(retain, nonatomic) SPTPremiumDestinationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithAlertInterface:(id)arg1 logger:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ACTILogger;

@interface WPJAriaEventLogger : NSObject
{
    id <ACTILogger> _ariaLogger;
}

+ (id)WPJAriaEventLoggerManager;
- (void).cxx_destruct;
@property(retain) id <ACTILogger> ariaLogger; // @synthesize ariaLogger=_ariaLogger;
- (id)scrubString:(id)arg1;
- (id)scrubEventProps:(id)arg1;
- (void)wpjEventLoggingWithAria:(id)arg1 operation:(id)arg2 isfailed:(id)arg3 reason:(id)arg4 session:(unsigned char)arg5;
- (void)wpjAriaLogWithDescription:(id)arg1 operation:(id)arg2 isfailed:(id)arg3 reason:(id)arg4 session:(unsigned char)arg5;
- (void)ariaLoggerTearDown;
- (id)generateEventPropertiesForPackage:(id)arg1 eventName:(id)arg2 operation:(id)arg3 isfailed:(id)arg4 reason:(id)arg5;
- (id)generateEventPropertiesForPackage:(id)arg1 eventName:(id)arg2 operation:(id)arg3 description:(id)arg4;
- (id)generateEventPropertiesForPackage:(id)arg1 eventName:(id)arg2 operation:(id)arg3;
- (void)disableAriaLogging;
- (void)initializeAriaForTenant:(id)arg1;

@end


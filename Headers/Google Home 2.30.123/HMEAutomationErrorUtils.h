//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMEAutomationErrorUtils : NSObject
{
}

+ (id)networkEventValueForError:(id)arg1 homeAutomationDeviceID:(id)arg2;
+ (int)smartDeviceErrorFromError:(id)arg1;
+ (id)sortedHomeAutomationErrorsWithErrors:(id)arg1;
+ (id)homeAutomationErrorLocalizedStringWithError:(id)arg1;
+ (id)underlyingErrorForDeviceWithHGSID:(id)arg1 fromError:(id)arg2;
+ (_Bool)isHomeAutomationError:(id)arg1;
+ (_Bool)isGenericError:(id)arg1;

@end


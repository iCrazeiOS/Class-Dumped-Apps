//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTNotification.h"

@class ASTAlarm;

@interface ASTAlarmNotification : ASTNotification
{
    ASTAlarm *_alarm;
}

@property(retain, nonatomic) ASTAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (id)displayMessageForAlarm:(id)arg1;
- (id)userInfo;
- (id)initWithAlarm:(id)arg1 trigger:(id)arg2;

@end


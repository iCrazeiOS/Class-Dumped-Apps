//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRTimeItem : NSObject
{
    int _hour;
    int _minute;
    NSString *_titleId;
    NSString *_timeText;
}

+ (id)TimeItemWithTitleId:(id)arg1 hour:(int)arg2 minute:(int)arg3 timeText:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(readonly, nonatomic) int minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) int hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) NSString *titleId; // @synthesize titleId=_titleId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitleId:(id)arg1 hour:(int)arg2 minute:(int)arg3 timeText:(id)arg4;

@end


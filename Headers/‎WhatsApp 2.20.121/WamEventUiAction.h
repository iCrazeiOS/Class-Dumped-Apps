//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventUiAction : WamEvent
{
    NSNumber *_ui_action_type_number;
    double _ui_action_t;
    double _ui_action_preloaded;
}

- (void).cxx_destruct;
@property(nonatomic) double ui_action_preloaded; // @synthesize ui_action_preloaded=_ui_action_preloaded;
@property(nonatomic) double ui_action_t_milliseconds; // @synthesize ui_action_t_milliseconds=_ui_action_t;
@property(nonatomic) long long ui_action_type;
- (_Bool)is_ui_action_type_set;
@property(nonatomic) double ui_action_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end


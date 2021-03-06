//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IA_JSONModel.h>

@class IADisplayConfigModel, IAMonitorConfigModel, IAVideoConfigModel, IAViewabilityConfigModel, NSArray, NSString;
@protocol IAUnitConfigModel, Optional;

@interface IASpotLevelConfigModel : IA_JSONModel
{
    _Bool _isActive;
    IADisplayConfigModel<Optional> *_display;
    NSString *_id;
    IAMonitorConfigModel<Optional> *_monitor;
    NSArray<IAUnitConfigModel> *_units;
    IAVideoConfigModel<Optional> *_video;
    IAViewabilityConfigModel<Optional> *_viewability;
}

+ (_Bool)propertyIsOptional:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IAViewabilityConfigModel<Optional> *viewability; // @synthesize viewability=_viewability;
@property(retain, nonatomic) IAVideoConfigModel<Optional> *video; // @synthesize video=_video;
@property(retain, nonatomic) NSArray<IAUnitConfigModel> *units; // @synthesize units=_units;
@property(retain, nonatomic) IAMonitorConfigModel<Optional> *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) IADisplayConfigModel<Optional> *display; // @synthesize display=_display;
- (id)init;

@end


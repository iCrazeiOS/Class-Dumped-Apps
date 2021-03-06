//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveRoomModel;
@protocol IESLiveEnvironment, IESLiveSettings;

@interface IESLiveMTNormalStreamConfigFactory : NSObject
{
    LiveRoomModel *_roomModel;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveSettings> _settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (id)optimizedURLWithOriginalURL:(id)arg1;
- (id)normalStreamConfigWith:(id)arg1;

@end


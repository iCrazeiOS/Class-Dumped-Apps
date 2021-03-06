//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaIndicator;
@protocol IGAudioNUXControllerDelegate;

@interface IGAudioNUXController : NSObject
{
    _Bool _persistent;
    id <IGAudioNUXControllerDelegate> _delegate;
    IGMediaIndicator *_indicator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
@property(retain, nonatomic) IGMediaIndicator *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak id <IGAudioNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateIndicatorWithAudioEnabled:(_Bool)arg1;
- (_Bool)isShowingAudioIndicator;
- (void)didTapOnVideo;
- (void)showOneTapIndicatorNUXAnimated:(_Bool)arg1;
- (void)_didPressVolumeButton:(id)arg1;
- (void)_didChangeMuteSwitch:(id)arg1;
- (id)initWithIndicator:(id)arg1;

@end


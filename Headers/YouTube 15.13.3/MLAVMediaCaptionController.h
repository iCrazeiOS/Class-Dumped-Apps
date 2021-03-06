//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCaptionController-Protocol.h>
#import <Module_Framework/MLPlayerCaptionDelegate-Protocol.h>

@class GIMMe, MLAVMediaCaptionTrack, NSArray, NSString;
@protocol MLCaptionConfig, MLCaptionControllerDelegate, MLCaptionTrack, MLPlayerCaptionProtocol;

@interface MLAVMediaCaptionController : NSObject <MLCaptionController, MLPlayerCaptionDelegate>
{
    id <MLCaptionConfig> _captionConfig;
    MLAVMediaCaptionTrack *_activeCaptionTrack;
    NSArray *_captionTracks;
    id <MLCaptionControllerDelegate> delegate;
    id <MLPlayerCaptionProtocol> _playerCaptionDelegate;
    GIMMe *_gimme;
    double _verticalRatio;
}

@property(nonatomic) double verticalRatio; // @synthesize verticalRatio=_verticalRatio;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <MLPlayerCaptionProtocol> playerCaptionDelegate; // @synthesize playerCaptionDelegate=_playerCaptionDelegate;
@property(nonatomic) __weak id <MLCaptionControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)updateCaptionsTextStyleRule;
- (void)loadUserCaptions;
- (void)loadCaptionsWithOption:(id)arg1;
- (void)playerCaptionOptionsDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool usesAdaptiveFormats;
- (void)start;
@property(retain, nonatomic) id <MLCaptionTrack> selectedCaptionTrack;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


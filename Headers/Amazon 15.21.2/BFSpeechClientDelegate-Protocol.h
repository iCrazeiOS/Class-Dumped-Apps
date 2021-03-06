//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLAuthenticationChallenge, NSURLSession;

@protocol BFSpeechClientDelegate <NSObject>
- (void)onMaxSpeechTimeout;
- (void)onNoSpeechTimeout;
- (void)didHaveError:(NSError *)arg1;
- (void)didStopRecordingByEndpointer;
- (void)didStopRecording;
- (void)didDetectSoundLevelChange:(double)arg1;
- (void)didReceiveBuffer:(NSData *)arg1;
- (void)didStartRecording;
- (void)didReadyForRecording;

@optional
- (_Bool)allowRequestForURLSession:(NSURLSession *)arg1 withAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
@end


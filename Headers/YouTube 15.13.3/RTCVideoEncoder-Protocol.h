//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString, RTCVideoEncoderQpThresholds, RTCVideoEncoderSettings, RTCVideoFrame;
@protocol RTCCodecSpecificInfo;

@protocol RTCVideoEncoder <NSObject>
- (RTCVideoEncoderQpThresholds *)scalingSettings;
- (NSString *)implementationName;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (long long)encode:(RTCVideoFrame *)arg1 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg2 frameTypes:(NSArray *)arg3;
- (long long)releaseEncoder;
- (long long)startEncodeWithSettings:(RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(_Bool (^)(RTCEncodedImage *, id <RTCCodecSpecificInfo>, RTCRtpFragmentationHeader *))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBCapturePOIProcessing-Protocol.h>

@class VNDetectFaceRectanglesRequest, VNSequenceRequestHandler;
@protocol FBCapturePOIProcessingDelegate;

@interface FBCapturePOIVNProcessor : NSObject <FBCapturePOIProcessing>
{
    VNSequenceRequestHandler *_requestHandler;
    VNDetectFaceRectanglesRequest *_faceRectanglesRequest;
    _Bool _enabled;
    long long _currentDevicePosition;
    id <FBCapturePOIProcessingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBCapturePOIProcessingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentDevicePosition; // @synthesize currentDevicePosition=_currentDevicePosition;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)isDogObject:(id)arg1;
- (_Bool)isCatObject:(id)arg1;
- (_Bool)isHumanBodyObject:(id)arg1;
- (_Bool)isCodeObject:(id)arg1;
- (_Bool)isFaceObject:(id)arg1;
- (id)codeFromObject:(id)arg1;
- (struct CGRect)boundsFromObject:(id)arg1;
- (void)detectPOIInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2;
- (void)_configureWithDetectionType:(long long)arg1;
- (void)configureWithCaptureSession:(id)arg1 detectionType:(long long)arg2 enableAfterDelay:(double)arg3 queue:(id)arg4;
@property(readonly, nonatomic) _Bool acceptsSampleBuffer;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface JMImage : NSObject
{
    struct opaqueCMSampleBuffer *sampleBuffer;
    double _focusValueCroppedImage;
    NSData *_croppedImageData;
    struct CGSize _imageSizeSampleBuffer;
    struct CGSize _imageSizeCroppedImage;
}

@property(retain, nonatomic) NSData *croppedImageData; // @synthesize croppedImageData=_croppedImageData;
@property(nonatomic) struct CGSize imageSizeCroppedImage; // @synthesize imageSizeCroppedImage=_imageSizeCroppedImage;
@property(nonatomic) double focusValueCroppedImage; // @synthesize focusValueCroppedImage=_focusValueCroppedImage;
@property(nonatomic) struct CGSize imageSizeSampleBuffer; // @synthesize imageSizeSampleBuffer=_imageSizeSampleBuffer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 croppedImageData:(id)arg2 focusValue:(double)arg3 imageSizeCroppedImage:(struct CGSize)arg4;

@end


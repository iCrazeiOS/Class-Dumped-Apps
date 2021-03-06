//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBImageProcessingUtils : NSObject
{
}

+ (int)numberOfReservedImageProcessingWorkerThreads;
+ (id)decodeJPEG:(id)arg1;
+ (_Bool)doesOrientationImplyTranspose:(long long)arg1;
+ (struct CGAffineTransform)affineTransformForOrientation:(long long)arg1 forBufferSize:(struct CGSize)arg2;
+ (id)db_resizeGPUImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)resizeImage:(id)arg1 toSize:(struct CGSize)arg2 interpolationQuality:(int)arg3;
+ (id)resizePixelBuffer:(id)arg1 toSize:(struct CGSize)arg2 useGPU:(_Bool)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSCameraSupport : NSObject
{
}

+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageFromData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (id)imageFromGrayBuffer:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (id)imageFromBGRABuffer:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 step:(unsigned long long)arg4;
+ (id)imageFromBuffer:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 step:(unsigned long long)arg4;
+ (id)dataForBuffer:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dataForPixelBuffer:(struct __CVBuffer *)arg1;
+ (char *)bufferForPixelBuffer:(struct __CVBuffer *)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4;
+ (char *)bufferForFirstPlaneOfPixelBuffer:(struct __CVBuffer *)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)bufferForPixelBuffer:(struct __CVBuffer *)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (_Bool)bufferForPixelBuffer:(struct __CVBuffer *)arg1 toBuffer:(char *)arg2 width:(unsigned long long *)arg3 height:(unsigned long long *)arg4 step:(unsigned long long *)arg5 size:(unsigned long long *)arg6;
+ (void)informationForPixelBuffer:(struct __CVBuffer *)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)bufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4;
+ (char *)grayBufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)wideColorPreservedBGRABufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)bgraBufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)wideColorPreservedBufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (char *)bufferForImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3 step:(unsigned long long *)arg4 size:(unsigned long long *)arg5;
+ (id)removeWideColorFromImage:(id)arg1;

@end


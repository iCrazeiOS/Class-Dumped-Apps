//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <FBSharedFramework/IGStoryMediaAsset-Protocol.h>
#import <FBSharedFramework/MOSCacheable-Protocol.h>

@class NSString;

@interface UIImage (FXBlurView) <IGStoryMediaAsset, MOSCacheable>
+ (id)decodedImageWithData:(id)arg1;
+ (id)stretchableBackgroundImageWithColor:(id)arg1;
+ (id)imageWithSize:(struct CGSize)arg1 color:(id)arg2 clippingPath:(id)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 color:(id)arg2 scale:(double)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 color:(id)arg2;
+ (id)ig_resizableRoundedRectWithCornerRadius:(double)arg1 fillColor:(id)arg2 outlineColor:(id)arg3;
+ (id)ig_resizableRoundedRectWithCornerRadius:(double)arg1 fillColor:(id)arg2;
+ (id)ig_resizableOutlineRectWithCornerRadius:(double)arg1 outlineColor:(id)arg2;
+ (id)roundedRectWithSize:(struct CGSize)arg1 fillColor:(id)arg2 cornerRadius:(double)arg3 borderColor:(id)arg4 borderWidth:(double)arg5 drawnBehindImage:(id)arg6;
+ (id)losengeWithSize:(struct CGSize)arg1 fillColor:(id)arg2 borderColor:(id)arg3 borderWidth:(double)arg4 drawnBehindImage:(id)arg5;
+ (id)losengeWithSize:(struct CGSize)arg1 gradientStartColor:(id)arg2 gradientEndColor:(id)arg3 gradientDirection:(long long)arg4;
+ (id)losengeWithSize:(struct CGSize)arg1 fillColor:(id)arg2 borderColor:(id)arg3 borderWidth:(double)arg4;
+ (id)tintImage:(id)arg1 withGradientLayerConfig:(id)arg2;
+ (id)filterImageNamed:(id)arg1;
+ (id)fb_imageWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2 scale:(double)arg3;
+ (id)fb_imageWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
+ (id)fb_imageWithPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2;
+ (id)fb_imageWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)ig_transformedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)ig_imageCopiedFromPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
+ (id)ig_imageWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2 scale:(double)arg3;
+ (id)ig_imageWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
+ (id)ig_imageWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)foa_renderedImageWithSize:(struct CGSize)arg1 actions:(CDUnknownBlockType)arg2;
+ (id)foa_renderedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)foa_renderedImageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3 actions:(CDUnknownBlockType)arg4;
+ (id)renderedImageWithSize:(struct CGSize)arg1 actions:(CDUnknownBlockType)arg2;
+ (id)renderedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)renderedImageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3 actions:(CDUnknownBlockType)arg4;
- (id)blurredImageWithRadius:(double)arg1 iterations:(unsigned long long)arg2 tintColor:(id)arg3;
- (id)avgColorInColumn:(double)arg1;
- (id)colorAtPoint:(struct CGPoint)arg1;
- (void)fetchSampleBufferOfSize:(struct CGSize)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)fetchPhotoBoothAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchBoomerangAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoWithUserSession:(CDUnknownBlockType)arg1 resultHandler:(id)arg2;
- (void)fetchImageOfSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) long long assetType;
@property(readonly, nonatomic) struct CGSize mediaSize;
- (unsigned long long)encodedCost;
- (id)ig_resizableImageWithCenterInsets;
- (struct CGRect)ig_cropRectForOrientation:(struct CGRect)arg1;
- (struct CGAffineTransform)ig_transformForOrientation:(struct CGSize)arg1;
- (_Bool)ig_needTransposeOnSize;
- (id)ig_imageShrunkToScreenWidth;
- (id)ig_resizedImageWithSize:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (struct __CVBuffer *)ig_createCVPixelBufferWithSize:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)ig_resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)ig_resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2;
- (id)ig_squareThumbnailImageOfSize:(long long)arg1;
- (id)ig_squareThumbnailImageOfSize:(long long)arg1 interpolationQuality:(int)arg2;
- (id)ig_paddedImageOfSize:(struct CGSize)arg1;
- (id)ig_croppedImage:(struct CGRect)arg1;
- (struct CGRect)ig_cropRectForCamera;
- (struct CGImage *)ig_CGImageWithCropRect:(struct CGRect)arg1;
- (id)imageWithRoundedBackgroundColor:(id)arg1 andSize:(struct CGSize)arg2;
- (id)ig_roundedImageOfSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)roundedImageOfSize:(struct CGSize)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 paddingWidth:(double)arg4 backgroundColor:(id)arg5;
- (id)roundedImageOfSize:(struct CGSize)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 backgroundColor:(id)arg4;
- (id)ig_templateImage;
- (id)ig_tintedImageWithGradientStartColor:(id)arg1 gradientEndColor:(id)arg2 gradientDirection:(long long)arg3;
- (id)ig_tintedImageWithTintColor:(id)arg1;
- (unsigned long long)cost;
- (id)fb_imageWithOrientation:(long long)arg1;
- (id)fb_imageWithTransform:(struct CGAffineTransform)arg1;
- (void)setFb_pixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly, nonatomic) struct __CVBuffer *fb_pixelBuffer;
- (id)ig_imageWithTransform:(struct CGAffineTransform)arg1;
- (id)boundingContourWithAlphaThreshold:(double)arg1 distanceThreshold:(double)arg2;
- (id)boundingContourWithAlphaThreshold:(double)arg1;
- (id)contourWithAlphaThreshold:(double)arg1;
- (id)fb_fixedOrientation;
@property(copy, nonatomic) NSString *ig_imageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


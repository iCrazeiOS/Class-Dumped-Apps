//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBScanUtils : NSObject
{
}

+ (id)recomputeQuadrilateralVertices:(id)arg1 forOrientation:(long long)arg2;
+ (struct CGRect)idealPDFCanvasSizeForImageSizes:(id)arg1;
+ (struct CGSize)smallestEnclosingSizeWithAspectRatio:(struct CGSize)arg1 forSizes:(id)arg2;
+ (int)db_exifOrientationWithDeviceOrientation:(long long)arg1 isUsingFrontFacingCamera:(_Bool)arg2;
+ (id)db_imageFromRectFeature:(id)arg1 onCIImage:(id)arg2;
+ (id)imageFromCIImage:(id)arg1 withRectFeature:(id)arg2 withOrientation:(long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/GPUImageFilter.h>

@interface PGPhotoToolFilter : GPUImageFilter
{
    int _aspectRatioUniform;
    int _widthUniform;
    int _heightUniform;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end


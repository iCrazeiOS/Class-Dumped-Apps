//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterGroup.h"

@class HTSGLFilter, HTSGLFilterAlphaBlend, HTSGLFilterBilateral, HTSGLFilterCustomBlend, HTSGLFilterSecondBlur, HTSGLFilterToneCurve, HTSGLWhitenFilter, HTSImageLookupFilter;

@interface HTSGLNewBeautyFilter : HTSGLFilterGroup
{
    HTSGLFilter *_firstFilter;
    HTSGLFilter *_shrinkFilter;
    HTSGLFilterBilateral *_beautyFilter;
    HTSGLWhitenFilter *_blendFilter;
    HTSGLFilterSecondBlur *_secondBlurFilter;
    HTSGLFilterCustomBlend *_lastBlendFilter;
    HTSGLFilterToneCurve *_curveFilter;
    HTSGLFilterAlphaBlend *_lightBlendFilter;
    HTSImageLookupFilter *_lookupFilter;
    double _intensity;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void).cxx_destruct;
- (id)init;

@end


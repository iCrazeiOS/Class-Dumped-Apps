//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface, NSString;

@interface IGLosAngelesFilter : IGImageFilter
{
    IGSurface *_lutBuff;
    IGSurface *_quarterBuffA;
    IGSurface *_quarterBuffB;
    int _passIndex;
    struct CGSize _inputImageSize;
    float _sharpen;
    float _sigmaFb;
    long long _lutStrength;
    NSString *_lutTextureName;
}

+ (id)filterName;
+ (long long)filterType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lutTextureName; // @synthesize lutTextureName=_lutTextureName;
@property(nonatomic) float sigmaFb; // @synthesize sigmaFb=_sigmaFb;
@property(nonatomic) float sharpen; // @synthesize sharpen=_sharpen;
@property(readonly, nonatomic) long long lutStrength; // @synthesize lutStrength=_lutStrength;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)renderIGL:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)samplers;
- (id)samplersIGL;
- (shared_ptr_fbaa1313)fragmentBufferIGL:(id)arg1 iglSource:(shared_ptr_b95409fc)arg2;
- (_Bool)filterSupportsIGL;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)postFragmentShader;
- (id)postSamplers;
- (id)fragmentShaderPrecision;
- (id)initWithLutStrength:(long long)arg1;
- (id)init;

@end


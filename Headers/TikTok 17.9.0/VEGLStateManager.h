//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLContext, IESGLesProgram, NSDictionary, NSMutableDictionary, NSString, VEGLRendererDrawable;

@interface VEGLStateManager : NSObject
{
    _Bool _shouldUpdateProgram;
    unsigned int _sfactor;
    unsigned int _dfactor;
    float _bgColorRed;
    float _bgColorGreen;
    float _bgColorBlue;
    float _bgColorAlpha;
    IESGLesProgram *_program;
    long long _programType;
    VEGLRendererDrawable *_glDrawable;
    NSMutableDictionary *_floatUniformDict;
    NSMutableDictionary *_intUniformDict;
    NSMutableDictionary *_dataUniformDict;
    NSString *_customProgramVertex;
    NSString *_customProgramFragment;
    NSDictionary *_customProgramAttribute;
    HTSGLContext *_context;
}

@property(retain, nonatomic) HTSGLContext *context; // @synthesize context=_context;
@property(nonatomic) float bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(nonatomic) float bgColorBlue; // @synthesize bgColorBlue=_bgColorBlue;
@property(nonatomic) float bgColorGreen; // @synthesize bgColorGreen=_bgColorGreen;
@property(nonatomic) float bgColorRed; // @synthesize bgColorRed=_bgColorRed;
@property(copy, nonatomic) NSDictionary *customProgramAttribute; // @synthesize customProgramAttribute=_customProgramAttribute;
@property(copy, nonatomic) NSString *customProgramFragment; // @synthesize customProgramFragment=_customProgramFragment;
@property(copy, nonatomic) NSString *customProgramVertex; // @synthesize customProgramVertex=_customProgramVertex;
@property(nonatomic) unsigned int dfactor; // @synthesize dfactor=_dfactor;
@property(nonatomic) unsigned int sfactor; // @synthesize sfactor=_sfactor;
@property(retain, nonatomic) NSMutableDictionary *dataUniformDict; // @synthesize dataUniformDict=_dataUniformDict;
@property(retain, nonatomic) NSMutableDictionary *intUniformDict; // @synthesize intUniformDict=_intUniformDict;
@property(retain, nonatomic) NSMutableDictionary *floatUniformDict; // @synthesize floatUniformDict=_floatUniformDict;
@property(readonly, nonatomic) VEGLRendererDrawable *glDrawable; // @synthesize glDrawable=_glDrawable;
@property(readonly, nonatomic) _Bool shouldUpdateProgram; // @synthesize shouldUpdateProgram=_shouldUpdateProgram;
@property(readonly, nonatomic) long long programType; // @synthesize programType=_programType;
@property(readonly, nonatomic) IESGLesProgram *program; // @synthesize program=_program;
- (void).cxx_destruct;
- (void)renderClearColor:(id)arg1;
- (void)presentScreenFBO;
- (_Bool)bindScreenFBO;
- (void)setDrawable:(id)arg1;
- (void)setBlendSFactor:(long long)arg1 dFactor:(long long)arg2;
- (void)renderClearColor;
- (void)setClearColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)diableBlend;
- (void)enableBlend;
- (void)resetRenderEnv;
- (void)loadExtraUniforms;
- (void)addUniform:(id)arg1;
- (void)loadMvpQuadData:(const float *)arg1;
- (void)customVertexShader:(id)arg1 fragmentShader:(id)arg2 attributes:(id)arg3;
- (void)updatePipeline:(long long)arg1;
- (void)loadPipeline;
- (id)init:(id)arg1;

@end


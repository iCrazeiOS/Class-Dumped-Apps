//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AWECoverTextEffectsViewModel : NSObject
{
    NSArray *_cellModels;
    double _fontScale;
    NSArray *_fonts;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *fonts; // @synthesize fonts=_fonts;
@property(nonatomic) double fontScale; // @synthesize fontScale=_fontScale;
@property(copy, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
- (void)startFetchCoverTextList:(CDUnknownBlockType)arg1;
- (void)p_generateCellModelsWithEffectList:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DMSDK/DMSStrategy.h>

@class NSArray;

@interface DMSBasicStrategy : DMSStrategy
{
    _Bool _shouldConfigureForMultipleScales;
    _Bool _shouldEnablePerspectiveCorrection;
    _Bool _shouldEnableRandomBlockInFrame;
    unsigned int _seed;
    NSArray *_movingBlocks;
    struct CGSize _frameSize;
    struct CGRect _regionOfInterest;
}

@property unsigned int seed; // @synthesize seed=_seed;
@property(retain) NSArray *movingBlocks; // @synthesize movingBlocks=_movingBlocks;
@property struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property _Bool shouldEnableRandomBlockInFrame; // @synthesize shouldEnableRandomBlockInFrame=_shouldEnableRandomBlockInFrame;
@property _Bool shouldEnablePerspectiveCorrection; // @synthesize shouldEnablePerspectiveCorrection=_shouldEnablePerspectiveCorrection;
@property _Bool shouldConfigureForMultipleScales; // @synthesize shouldConfigureForMultipleScales=_shouldConfigureForMultipleScales;
@property struct CGSize frameSize; // @synthesize frameSize=_frameSize;
- (void).cxx_destruct;
- (id)blocksForBlockField:(struct CGRect)arg1 scale:(unsigned long long)arg2 blockType:(long long)arg3;
- (id)blocksForPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (struct CGRect)eligibleAreaForRandomBlocksWithFrameSize:(struct CGSize)arg1 regionOfInterest:(struct CGRect)arg2;
- (struct CGPoint)randomPointInRect:(struct CGRect)arg1;
- (id)initWithOptions:(id)arg1;

@end


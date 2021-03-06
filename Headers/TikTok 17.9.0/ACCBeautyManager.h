//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEComposerBeautyEffectViewModel, NSString;

@interface ACCBeautyManager : NSObject
{
    _Bool _hasDetectMale;
    _Bool _useComposerBeautyEffect;
    NSString *_businessName;
    AWEComposerBeautyEffectViewModel *_composerEffectVM;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEComposerBeautyEffectViewModel *composerEffectVM; // @synthesize composerEffectVM=_composerEffectVM;
@property(nonatomic) _Bool useComposerBeautyEffect; // @synthesize useComposerBeautyEffect=_useComposerBeautyEffect;
@property(nonatomic) _Bool hasDetectMale; // @synthesize hasDetectMale=_hasDetectMale;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
- (void)resetWhenClearEffectCache;
- (void)resetWhenQuitRecoder;
- (id)init;

@end


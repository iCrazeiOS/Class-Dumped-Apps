//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class NSString, UIImage;

@interface IGPhotoFilter : IGImageFilter
{
    NSString *_borderName;
}

@property(readonly, copy, nonatomic) NSString *borderName; // @synthesize borderName=_borderName;
- (void).cxx_destruct;
- (id)strengthShaderCode;
@property(readonly, nonatomic) UIImage *borderImage;
- (id)init;
- (id)_dataForBundleTextureName:(id)arg1;
- (id)dictionaryRepresentation;

@end


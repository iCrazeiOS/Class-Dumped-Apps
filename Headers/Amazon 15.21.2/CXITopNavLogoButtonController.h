//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CXITopNavButtonController.h"

@class AWUser;

@interface CXITopNavLogoButtonController : CXITopNavButtonController
{
    AWUser *_user;
}

@property(retain, nonatomic) AWUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)initWithDependencies:(id)arg1;
- (_Bool)smileLogoFlag;
- (_Bool)primeLogoFlag;
- (void)updateButtonAssets;
- (id)iconAsset;
- (id)init;

@end


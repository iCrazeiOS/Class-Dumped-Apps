//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBaseModel.h>

@class NSNumber, NSString;

@interface UjetLanguageSetting : UjetBaseModel
{
    NSNumber *_enabled;
    NSString *_languageCode;
}

+ (id)objectMapping;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;

@end


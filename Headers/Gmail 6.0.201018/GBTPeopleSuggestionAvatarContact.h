//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAvatarContact-Protocol.h"

@class GTLRCloudSearch_PeopleSuggestion, NSArray, NSString;
@protocol JBTImageUrlSettings;

@interface GBTPeopleSuggestionAvatarContact : NSObject <GBTAvatarContact>
{
    GTLRCloudSearch_PeopleSuggestion *_peopleSuggestion;
    id <JBTImageUrlSettings> _imageUrlSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <JBTImageUrlSettings> imageUrlSettings; // @synthesize imageUrlSettings=_imageUrlSettings;
- (id)displayName;
@property(readonly, nonatomic) NSString *accessibilityValue;
@property(readonly, nonatomic) NSString *imageUrl;
@property(readonly, nonatomic) NSArray *titles;
- (id)initWithPeopleSuggestion:(id)arg1;

@end


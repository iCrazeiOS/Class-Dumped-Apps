//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingChoiceValue : NSObject
{
    NSString *_identifier;
    TFSTwitterOnboardingRichText *_text;
}

@property(readonly, nonatomic) TFSTwitterOnboardingRichText *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end


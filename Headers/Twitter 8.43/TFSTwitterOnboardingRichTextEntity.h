//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSCustomActiveTextRange.h>

@class TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingSubtaskDataReference;

@interface TFSTwitterOnboardingRichTextEntity : TFSCustomActiveTextRange
{
    TFSTwitterOnboardingNavigationLink *_navigationLink;
    TFSTwitterOnboardingSubtaskDataReference *_subtaskDataReference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterOnboardingSubtaskDataReference *subtaskDataReference; // @synthesize subtaskDataReference=_subtaskDataReference;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *navigationLink; // @synthesize navigationLink=_navigationLink;
- (long long)compare:(id)arg1;
- (id)initWithRangeValue:(struct _NSRange)arg1 displayString:(id)arg2 navigationLink:(id)arg3 subtaskDataReference:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 fullText:(id)arg2 error:(id *)arg3;

@end


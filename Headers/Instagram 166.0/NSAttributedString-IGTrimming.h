//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IGTrimming)
+ (id)initWithImage:(id)arg1 font:(id)arg2 color:(id)arg3;
+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;
- (id)ig_attributedStringByTrimming:(id)arg1;
- (struct _NSRange)rangeForLinkAtIndex:(long long)arg1;
- (id)urlAtIndex:(long long)arg1;
- (long long)lengthOfCollapsedStringWithWidth:(double)arg1 maximumUntruncatedNumberOfLines:(long long)arg2 truncatedToNumberOfLines:(long long)arg3 truncationToken:(id)arg4 trimmingCharacterSet:(id)arg5 useClusterBreak:(_Bool)arg6;
- (long long)lengthOfCollapsedStringWithWidth:(double)arg1 maximumUntruncatedNumberOfLines:(long long)arg2 truncatedToNumberOfLines:(long long)arg3 truncationToken:(id)arg4 trimmingCharacterSet:(id)arg5;
- (id)initWithFormat:(id)arg1 attributes:(id)arg2 arguments:(char *)arg3;
- (id)initWithFormat:(id)arg1 attributes:(id)arg2;
- (id)initWithFormat:(id)arg1 attributes:(id)arg2 formatArguments:(id)arg3;
- (struct CGRect)ig_boundingRectForWidth:(double)arg1;
@end


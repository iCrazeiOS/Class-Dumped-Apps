//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGCommentModelStyleConfiguration, NSArray, NSString;

@interface IGCommentModelStyledStringCacheKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    _Bool _newline;
    NSString *_primaryName;
    NSString *_text;
    NSString *_truncationString;
    double _width;
    long long _maximumUntruncatedNumberOfLines;
    long long _truncatedToNumberOfLines;
    NSArray *_entities;
    IGCommentModelStyleConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGCommentModelStyleConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) _Bool newline; // @synthesize newline=_newline;
@property(readonly, nonatomic) long long truncatedToNumberOfLines; // @synthesize truncatedToNumberOfLines=_truncatedToNumberOfLines;
@property(readonly, nonatomic) long long maximumUntruncatedNumberOfLines; // @synthesize maximumUntruncatedNumberOfLines=_maximumUntruncatedNumberOfLines;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *truncationString; // @synthesize truncationString=_truncationString;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *primaryName; // @synthesize primaryName=_primaryName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryName:(id)arg1 text:(id)arg2 truncationString:(id)arg3 width:(double)arg4 maximumUntruncatedNumberOfLines:(long long)arg5 truncatedToNumberOfLines:(long long)arg6 newline:(_Bool)arg7 entities:(id)arg8 configuration:(id)arg9;

@end


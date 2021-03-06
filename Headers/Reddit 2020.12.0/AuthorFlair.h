//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/FlairProtocol-Protocol.h>
#import <RedditCore/NSSecureCoding-Protocol.h>

@class FlairTemplate, NSArray, NSString;

@interface AuthorFlair : NSObject <FlairProtocol, NSSecureCoding>
{
    long long _textType;
    long long _textColorType;
    NSString *_text;
    NSArray *_richText;
    FlairTemplate *_template;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) FlairTemplate *template; // @synthesize template=_template;
@property(copy, nonatomic) NSArray *richText; // @synthesize richText=_richText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long textColorType; // @synthesize textColorType=_textColorType;
@property(nonatomic) long long textType; // @synthesize textType=_textType;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithText:(id)arg1;
- (id)initWithSubredditModeratorWidgetData:(id)arg1;
- (id)initWithCommentData:(id)arg1;
- (id)initWithPostData:(id)arg1;
- (id)initWithSubredditData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


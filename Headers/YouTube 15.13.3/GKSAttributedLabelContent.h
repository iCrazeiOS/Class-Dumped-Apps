//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface GKSAttributedLabelContent : NSObject <NSCopying>
{
    unsigned long long _type;
    NSString *_text;
    NSString *_link;
    NSDictionary *_style;
}

+ (id)link:(id)arg1 withText:(id)arg2 withStyle:(id)arg3;
+ (id)link:(id)arg1 withText:(id)arg2;
+ (id)text:(id)arg1 withStyle:(id)arg2;
+ (id)text:(id)arg1;
@property(copy, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 link:(id)arg3 style:(id)arg4;

@end


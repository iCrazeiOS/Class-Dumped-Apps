//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCSFormattedText_TextOrPlaceholder, JCSSmartMailTextId;
@protocol JavaUtilList;

@protocol JCSFormattedTextOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSFormattedText_TextOrPlaceholder *)getTranslationParametersWithInt:(int)arg1;
- (id <JavaUtilList>)getTranslationParametersList;
- (int)getTranslationParametersCount;
- (JCSSmartMailTextId *)getTranslationId;
- (_Bool)hasTranslationId;
- (JCSFormattedText_TextOrPlaceholder *)getPartWithInt:(int)arg1;
- (id <JavaUtilList>)getPartList;
- (int)getPartCount;
@end


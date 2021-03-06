//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonHashPrimitiveSink-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleCommonHashHashCode, IOSByteArray, JavaNioByteBuffer, JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel, ComGoogleCommonHashHasher, JavaLangCharSequence;

@protocol ComGoogleCommonHashHasher <ComGoogleCommonHashPrimitiveSink, JavaObject>
- (unsigned long long)hash;
- (ComGoogleCommonHashHashCode *)hash__;
- (id <ComGoogleCommonHashHasher>)putObjectWithId:(id)arg1 withComGoogleCommonHashFunnel:(id <ComGoogleCommonHashFunnel>)arg2;
- (id <ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id <JavaLangCharSequence>)arg1 withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg2;
- (id <ComGoogleCommonHashHasher>)putUnencodedCharsWithJavaLangCharSequence:(id <JavaLangCharSequence>)arg1;
- (id <ComGoogleCommonHashHasher>)putCharWithChar:(unsigned short)arg1;
- (id <ComGoogleCommonHashHasher>)putBooleanWithBoolean:(_Bool)arg1;
- (id <ComGoogleCommonHashHasher>)putDoubleWithDouble:(double)arg1;
- (id <ComGoogleCommonHashHasher>)putFloatWithFloat:(float)arg1;
- (id <ComGoogleCommonHashHasher>)putLongWithLong:(long long)arg1;
- (id <ComGoogleCommonHashHasher>)putIntWithInt:(int)arg1;
- (id <ComGoogleCommonHashHasher>)putShortWithShort:(short)arg1;
- (id <ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)arg1;
- (id <ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)arg1;
- (id <ComGoogleCommonHashHasher>)putByteWithByte:(BOOL)arg1;
@end


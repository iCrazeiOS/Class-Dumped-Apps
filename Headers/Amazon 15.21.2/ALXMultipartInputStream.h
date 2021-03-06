//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSData;
@protocol NSStreamDelegate;

@interface ALXMultipartInputStream : NSInputStream
{
    _Bool _shouldCloseStream;
    NSInputStream *_dataInputStream;
    NSData *_headerData;
    unsigned long long _numberOfHeaderBytesSent;
    id <NSStreamDelegate> _localDelegate;
}

@property(nonatomic) _Bool shouldCloseStream; // @synthesize shouldCloseStream=_shouldCloseStream;
@property(nonatomic) __weak id <NSStreamDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
@property(nonatomic) unsigned long long numberOfHeaderBytesSent; // @synthesize numberOfHeaderBytesSent=_numberOfHeaderBytesSent;
@property(retain, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSInputStream *dataInputStream; // @synthesize dataInputStream=_dataInputStream;
- (void).cxx_destruct;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)streamStatus;
- (void)close;
- (void)forceClose;
- (void)open;
- (id)initWithDataInputStream:(id)arg1 pryonMetadata:(id)arg2 boundaryTerm:(id)arg3 contentType:(id)arg4 requestParametersPart:(id)arg5;

@end


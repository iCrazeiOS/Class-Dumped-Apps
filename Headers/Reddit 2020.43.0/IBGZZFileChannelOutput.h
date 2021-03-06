//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGZZChannelOutput-Protocol.h>

@interface IBGZZFileChannelOutput : NSObject <IBGZZChannelOutput>
{
    int _fileDescriptor;
    unsigned int _offset;
}

@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
- (void)close;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (id)initWithFileDescriptor:(int)arg1;

@end


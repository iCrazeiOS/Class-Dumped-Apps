//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RawDataBufferPacket : NSObject
{
    char *_buffer;
    int _len;
}

- (char *)getBufferPointWithData:(char *)arg1 Width:(int)arg2 Height:(int)arg3 bytesRow:(int)arg4;
- (void)imgCpyWithDst:(char *)arg1 Src:(char *)arg2 Witdh:(int)arg3 Height:(int)arg4 ChromPerRaw:(int)arg5;
- (_Bool)createBuffer:(int)arg1;
- (void)dealloc;
- (id)init;

@end


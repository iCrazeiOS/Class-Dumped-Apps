//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface RCTSource : NSObject
{
    NSURL *_url;
    NSData *_data;
    unsigned long long _length;
    long long _filesChangedCount;
}

@property(readonly, nonatomic) long long filesChangedCount; // @synthesize filesChangedCount=_filesChangedCount;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end


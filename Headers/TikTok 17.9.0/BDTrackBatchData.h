//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BDTrackBatchData : NSObject
{
    _Bool _hasMore;
    _Bool _limited;
    unsigned long long _limitSize;
    NSDictionary *_header;
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(nonatomic) _Bool limited; // @synthesize limited=_limited;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long limitSize; // @synthesize limitSize=_limitSize;
- (void).cxx_destruct;
- (id)init;

@end


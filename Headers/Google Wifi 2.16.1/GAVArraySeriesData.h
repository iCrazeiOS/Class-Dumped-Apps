//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVSeriesData-Protocol.h"

@class NSArray;

@interface GAVArraySeriesData : NSObject <GAVSeriesData>
{
    NSArray *_array;
}

@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)datumAtIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end


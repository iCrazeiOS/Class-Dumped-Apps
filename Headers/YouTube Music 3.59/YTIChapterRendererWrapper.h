//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTIChapterRendererWrapper : NSObject
{
    double _startTime;
    double _endTime;
    NSString *_title;
}

+ (id)chapterRendererWrapperWithRenderer:(id)arg1;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 title:(id)arg3;

@end


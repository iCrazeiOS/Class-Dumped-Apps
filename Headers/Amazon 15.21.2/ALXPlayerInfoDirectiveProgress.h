//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface ALXPlayerInfoDirectiveProgress : JSONModel
{
    _Bool _allowScrubbing;
    _Bool _showTiming;
    _Bool _visible;
    NSString<Optional> *_locationInfo;
    long long _mediaLength;
    long long _mediaProgress;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool showTiming; // @synthesize showTiming=_showTiming;
@property(nonatomic) long long mediaProgress; // @synthesize mediaProgress=_mediaProgress;
@property(nonatomic) long long mediaLength; // @synthesize mediaLength=_mediaLength;
@property(retain, nonatomic) NSString<Optional> *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) _Bool allowScrubbing; // @synthesize allowScrubbing=_allowScrubbing;
- (void).cxx_destruct;

@end


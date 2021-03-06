//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSString, TFNTwitterPlacePageTweetsChunk, TFSTwitterPlace;

@interface TFNTwitterPlacePageResponse : NSObject <TFSModel>
{
    TFSTwitterPlace *_place;
    TFNTwitterPlacePageTweetsChunk *_tweetChunk;
    TFNTwitterPlacePageTweetsChunk *_mediaChunk;
}

+ (id)placePageResponseWithJSONData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterPlacePageTweetsChunk *mediaChunk; // @synthesize mediaChunk=_mediaChunk;
@property(readonly, nonatomic) TFNTwitterPlacePageTweetsChunk *tweetChunk; // @synthesize tweetChunk=_tweetChunk;
@property(readonly, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithPlace:(id)arg1 tweetChunk:(id)arg2 mediaChunk:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


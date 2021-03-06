//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, SPTSharingSDKUTMTag;

@interface SPTSharingSDKLinkGenerationPayload : NSObject
{
    NSString *_spotifyURIString;
    SPTSharingSDKUTMTag *_utmTag;
    NSSet *_extraQueryItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *extraQueryItems; // @synthesize extraQueryItems=_extraQueryItems;
@property(readonly, nonatomic) SPTSharingSDKUTMTag *utmTag; // @synthesize utmTag=_utmTag;
@property(readonly, copy, nonatomic) NSString *spotifyURIString; // @synthesize spotifyURIString=_spotifyURIString;
- (id)initWithSpotifyURIString:(id)arg1 utmTag:(id)arg2 extraQueryItems:(id)arg3;

@end


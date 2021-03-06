//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTDataLoaderFactory;

@interface SPTModerationWebViewAuthoriserFactory : NSObject
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    NSURL *_authoriserURL;
}

@property(readonly, nonatomic) NSURL *authoriserURL; // @synthesize authoriserURL=_authoriserURL;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createAuthoriser;
- (id)initWithAuthoriserURL:(id)arg1 dataLoaderFactory:(id)arg2 authoriser:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTIAPSpotifyProductRequestDelegate;

@interface SPTIAPSpotifyProductRequest : NSObject
{
    id <SPTIAPSpotifyProductRequestDelegate> _delegate;
}

+ (id)productRequestWithDataLoaderFactory:(id)arg1;
+ (id)productRequestWithHermesController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTIAPSpotifyProductRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (id)productIdentifiersFromResponseData:(id)arg1 error:(id *)arg2;
- (void)start;

@end


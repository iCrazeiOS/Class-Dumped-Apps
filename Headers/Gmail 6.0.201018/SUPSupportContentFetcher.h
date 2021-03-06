//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUPSupportContentFetcher : NSObject
{
}

+ (id)contentURLStringWithColorThemeParam:(id)arg1;
+ (_Bool)isValidSupportContentJson:(id)arg1;
+ (id)parseRenderedContentFromData:(id)arg1 contentType:(unsigned long long)arg2 visitID:(id)arg3;
+ (void)callHandler:(CDUnknownBlockType)arg1 renderedContent:(id)arg2 error:(id)arg3;
+ (void)fetchWithRequest:(id)arg1 fetcherService:(id)arg2 contentType:(unsigned long long)arg3 visitID:(id)arg4 ETag:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)mobileRenderingAPIEndpointForConfig:(id)arg1;
+ (void)fetchRenderedContentForPathOrURL:(id)arg1 contentType:(unsigned long long)arg2 supportContentConfig:(id)arg3 receiverConfig:(id)arg4 ETag:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchSearchResultContentForSearchQuery:(id)arg1 receiverConfig:(id)arg2 config:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchRenderedContent:(id)arg1 receiverConfig:(id)arg2 config:(id)arg3 ETag:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end


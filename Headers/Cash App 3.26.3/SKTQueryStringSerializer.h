//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKTQueryStringSerializer : NSObject
{
}

- (id)scaleDownImage:(id)arg1;
- (id)serializeRequest:(id)arg1 withImage:(id)arg2 fileUrl:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (void)addQueryStringToRequest:(id)arg1 withParameters:(id)arg2;
- (id)serializeRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)queryStringFromParams:(id)arg1;

@end


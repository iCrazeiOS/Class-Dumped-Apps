//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/TFSTwitterAPIEndpointRequest.h>

@interface TFSTwitterAPIDirectMessageInboxTimelineRequest : TFSTwitterAPIEndpointRequest
{
}

+ (id)_pathComponentForType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 maxID:(id)arg2 filterLowQuality:(id)arg3 includeQualityParameter:(id)arg4 filterNSFW:(_Bool)arg5 filterMuted:(_Bool)arg6 dmUsers:(_Bool)arg7 context:(id)arg8 responseModelBuilder:(id)arg9;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end


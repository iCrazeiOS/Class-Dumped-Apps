//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class YTApiaryResourceParser;

@interface YTUpdateVideoMetadataService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_updateResourceParser;
    YTApiaryResourceParser *_metadataEditorResourceParser;
}

+ (id)metadataUpdateRequestWithVideoID:(id)arg1 metadata:(id)arg2;
- (void).cxx_destruct;
- (void)makeMetadataUpdateRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeGetMetadataEditorRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end


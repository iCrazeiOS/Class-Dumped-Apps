//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCRootModel.h"

@class ACCCommerceStickerDetailModel, ACCURLModel, NSArray, NSDictionary, NSString;

@interface ACCStickerDetailModel : ACCRootModel
{
    NSString *_stickerID;
    NSString *_stickerName;
    ACCURLModel *_iconURL;
    NSString *_designerID;
    NSString *_designerName;
    long long _userCount;
    long long _visitCount;
    NSArray *_tags;
    NSString *_extra;
    NSString *_desc;
    ACCCommerceStickerDetailModel *_commerceStickerModel;
    ACCURLModel *_avatarThumb;
    ACCURLModel *_avatarMedium;
    NSArray *_shareExtVideoCoverURLs;
    NSDictionary *_extraLogInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraLogInfo; // @synthesize extraLogInfo=_extraLogInfo;
@property(copy, nonatomic) NSArray *shareExtVideoCoverURLs; // @synthesize shareExtVideoCoverURLs=_shareExtVideoCoverURLs;
@property(retain, nonatomic) ACCURLModel *avatarMedium; // @synthesize avatarMedium=_avatarMedium;
@property(retain, nonatomic) ACCURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(retain, nonatomic) ACCCommerceStickerDetailModel *commerceStickerModel; // @synthesize commerceStickerModel=_commerceStickerModel;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *designerName; // @synthesize designerName=_designerName;
@property(copy, nonatomic) NSString *designerID; // @synthesize designerID=_designerID;
@property(retain, nonatomic) ACCURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *stickerName; // @synthesize stickerName=_stickerName;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


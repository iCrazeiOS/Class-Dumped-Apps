//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPPkgFileIndexInfo, BDPPkgHeaderInfo, NSData, NSDate, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface BDPPkgHeaderParser : NSObject
{
    _Bool _canContinue;
    unsigned int _fileExtSize;
    unsigned int _fileCount;
    unsigned int _fileNameSize;
    CDUnknownBlockType _versionValidateBlk;
    CDUnknownBlockType _completionBlk;
    NSDate *_beginDate;
    unsigned long long _target;
    unsigned long long _infoType;
    NSMutableData *_data;
    BDPPkgHeaderInfo *_fileInfo;
    BDPPkgFileIndexInfo *_curFileIndexModel;
    NSMutableArray *_fileIndexes;
    NSMutableDictionary *_fileIndexesDic;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int fileNameSize; // @synthesize fileNameSize=_fileNameSize;
@property(nonatomic) unsigned int fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) unsigned int fileExtSize; // @synthesize fileExtSize=_fileExtSize;
@property(retain, nonatomic) NSMutableDictionary *fileIndexesDic; // @synthesize fileIndexesDic=_fileIndexesDic;
@property(retain, nonatomic) NSMutableArray *fileIndexes; // @synthesize fileIndexes=_fileIndexes;
@property(retain, nonatomic) BDPPkgFileIndexInfo *curFileIndexModel; // @synthesize curFileIndexModel=_curFileIndexModel;
@property(retain, nonatomic) BDPPkgHeaderInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) _Bool canContinue; // @synthesize canContinue=_canContinue;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
@property(nonatomic) unsigned long long target; // @synthesize target=_target;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(copy, nonatomic) CDUnknownBlockType completionBlk; // @synthesize completionBlk=_completionBlk;
@property(copy, nonatomic) CDUnknownBlockType versionValidateBlk; // @synthesize versionValidateBlk=_versionValidateBlk;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long size;
@property(readonly, copy, nonatomic) NSData *availableData;
- (void)parseFileIndexInfoSize;
- (void)parseFileIndexInfoOffset;
- (void)parseFileIndexInfoName;
- (void)parseFileIndexInfoNameSize;
- (void)parseNextFileInfoTypeWithSize:(unsigned int)arg1;
- (void)parseFileIndexInfo;
- (void)parseFileCount;
- (void)parseExtInfo;
- (void)parseFileExtLength;
- (void)parseFileVersion;
- (void)parseFileID;
- (void)tryToParseNextTargetWithSize:(unsigned int)arg1;
- (void)tryToParse;
- (void)stopParseWithException:(id)arg1;
- (void)emptyData;
- (void)appendData:(id)arg1;

@end


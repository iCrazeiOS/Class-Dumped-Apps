//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBChunkedUploadDataLoader-Protocol.h>

@class DBCrossAppUploadQueueLockFactory, DBQueuedUploadInfo, NSString;

@interface DBQueuedUploadLocalFileDataLoader : NSObject <DBChunkedUploadDataLoader>
{
    NSString *_sourceFileName;
    NSString *_bufferFileName;
    DBQueuedUploadInfo *_uploadInfo;
    _Bool _prepareReturnedSuccessfully;
    DBCrossAppUploadQueueLockFactory *_lockFactory;
    NSString *_uploadContainerDirPath;
}

+ (id)db_resultFromReadingSourceFileName:(id)arg1 bufferFileName:(id)arg2 uploadInfo:(id)arg3 uploadContainerDirPath:(id)arg4 lock:(id)arg5;
@property(readonly, copy, nonatomic) NSString *uploadContainerDirPath; // @synthesize uploadContainerDirPath=_uploadContainerDirPath;
- (void).cxx_destruct;
- (id)writeFileChunkFromOffset:(unsigned long long)arg1 fileChunkSize:(unsigned long long *)arg2;
- (id)loadDataFromOffset:(unsigned long long)arg1 error:(id *)arg2;
- (id)prepareDataLoaderWithError:(id *)arg1;
- (id)initWithSourceFileName:(id)arg1 uploadInfo:(id)arg2 uploadContainerDirPath:(id)arg3 lockFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


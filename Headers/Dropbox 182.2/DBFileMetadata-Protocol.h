//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBDropboxPath, NSDate, NSString;

@protocol DBFileMetadata <NSObject>
@property(nonatomic, readonly) NSString *cameraUploadHash;
@property(nonatomic, readonly) _Bool isReadOnly;
@property(nonatomic, readonly) NSString *iconName;
@property(nonatomic, readonly) unsigned long long bytes;
@property(nonatomic, readonly) NSString *rev;
@property(nonatomic, readonly) NSDate *modifiedDate;
@property(nonatomic, readonly) _Bool isNoAccess;
@property(nonatomic, readonly) _Bool isDirectory;
@property(nonatomic, readonly) NSString *fileId;
@property(nonatomic, readonly) DBDropboxPath *filePath;
@end


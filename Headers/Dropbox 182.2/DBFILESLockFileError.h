//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBFILESLockConflictError, DBFILESLookupError, NSString;

@interface DBFILESLockFileError : NSObject <DBSerializable, NSCopying>
{
    DBFILESLookupError *_pathLookup;
    DBFILESLockConflictError *_lockConflict;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToLockFileError:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isUnlockToken;
- (_Bool)isInternalError;
- (_Bool)isLockConflict;
- (_Bool)isFileNotShared;
- (_Bool)isCannotBeLocked;
- (_Bool)isNoWritePermission;
- (_Bool)isTooManyFiles;
- (_Bool)isTooManyWriteOperations;
- (_Bool)isPathLookup;
@property(readonly, nonatomic) DBFILESLockConflictError *lockConflict; // @synthesize lockConflict=_lockConflict;
@property(readonly, nonatomic) DBFILESLookupError *pathLookup; // @synthesize pathLookup=_pathLookup;
- (id)initWithOther;
- (id)initWithUnlockToken;
- (id)initWithInternalError;
- (id)initWithLockConflict:(id)arg1;
- (id)initWithFileNotShared;
- (id)initWithCannotBeLocked;
- (id)initWithNoWritePermission;
- (id)initWithTooManyFiles;
- (id)initWithTooManyWriteOperations;
- (id)initWithPathLookup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


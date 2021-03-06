//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBDbxCameraUploadsController : NSObject
{
    struct Handle<std::__1::shared_ptr<dropbox::product::dbapp::camera_upload::cu_engine::DbxCameraUploadsController>, std::__1::shared_ptr<dropbox::product::dbapp::camera_upload::cu_engine::DbxCameraUploadsController>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addNativeHasher:(id)arg1;
- (void)getPhotosWithHash:(id)arg1 callback:(id)arg2;
- (void)getPhoto:(id)arg1 callback:(id)arg2;
- (id)generateStringDump:(int)arg1;
- (void)setUploadPriority:(id)arg1 priority:(long long)arg2;
- (_Bool)clearCursor;
- (void)setConfig:(id)arg1;
- (void)ignoreLocalIds:(id)arg1;
- (void)addServerHashes:(id)arg1;
- (void)blacklistLocalPhoto:(id)arg1 appleSignature:(id)arg2 photoStream:(id)arg3 source:(long long)arg4;
- (void)userDeletedPhotosWithErrors:(id)arg1;
- (void)retryAll;
- (void)teardown;
- (void)stop:(long long)arg1;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 localPhotosCursor:(id)arg2;
- (void)initialize:(id)arg1 config:(id)arg2 importsEnumerator:(id)arg3;
- (id)initWithCpp:(const shared_ptr_8f1c5ead *)arg1;

@end


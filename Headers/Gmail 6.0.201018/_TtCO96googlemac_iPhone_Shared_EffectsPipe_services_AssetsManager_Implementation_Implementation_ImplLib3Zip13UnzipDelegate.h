//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSZipArchiveDelegate-Protocol.h"

@interface _TtCO96googlemac_iPhone_Shared_EffectsPipe_services_AssetsManager_Implementation_Implementation_ImplLib3Zip13UnzipDelegate : NSObject <SSZipArchiveDelegate>
{
    // Error parsing type: , name: logger
    // Error parsing type: , name: completion
    // Error parsing type: , name: validatePollingTimer
    // Error parsing type: , name: validateAttemptsCount
    // Error parsing type: , name: debugSource
    // Error parsing type: , name: didUnzipArchiveCalled
    // Error parsing type: , name: _files
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)zipArchiveShouldUnzipFileAtIndex:(long long)arg1 totalFiles:(long long)arg2 archivePath:(id)arg3 fileInfo:(struct unz_file_info_s)arg4;
- (void)zipArchiveDidUnzipArchiveAtPath:(id)arg1 zipInfo:(struct unz_global_info_s)arg2 unzippedPath:(id)arg3;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSharedContentPermissionState-Protocol.h>

@class DBSharedContentAction, DBSharedContentPermissionDeniedReasonV2;

@interface DBSharedContentPermission : NSObject <DBSharedContentPermissionState>
{
    // Error parsing type: , name: action
    // Error parsing type: , name: allow
    // Error parsing type: , name: deniedReason
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAction:(id)arg1 allow:(_Bool)arg2 deniedReason:(id)arg3;
@property(nonatomic, readonly) DBSharedContentPermissionDeniedReasonV2 *deniedReason; // @synthesize deniedReason;
@property(nonatomic, readonly) _Bool allow; // @synthesize allow;
@property(nonatomic, readonly) DBSharedContentAction *action; // @synthesize action;

@end


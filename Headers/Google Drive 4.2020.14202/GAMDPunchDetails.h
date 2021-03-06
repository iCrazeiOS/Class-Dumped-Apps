//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMDPunchDetails_PunchRemoteSession;

@interface GAMDPunchDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInGridView; // @dynamic hasInGridView;
@property(nonatomic) _Bool hasInStreamView; // @dynamic hasInStreamView;
@property(nonatomic) _Bool hasNavigationMethod; // @dynamic hasNavigationMethod;
@property(nonatomic) _Bool hasPunchRemoteSession; // @dynamic hasPunchRemoteSession;
@property(nonatomic) _Bool hasThorCallCreationPermissionsAvailable; // @dynamic hasThorCallCreationPermissionsAvailable;
@property(nonatomic) _Bool inGridView; // @dynamic inGridView;
@property(nonatomic) _Bool inStreamView; // @dynamic inStreamView;
@property(nonatomic) int navigationMethod; // @dynamic navigationMethod;
@property(retain, nonatomic) GAMDPunchDetails_PunchRemoteSession *punchRemoteSession; // @dynamic punchRemoteSession;
@property(nonatomic) _Bool thorCallCreationPermissionsAvailable; // @dynamic thorCallCreationPermissionsAvailable;

@end


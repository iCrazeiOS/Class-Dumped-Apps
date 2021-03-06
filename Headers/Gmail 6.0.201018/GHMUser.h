//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface GHMUser : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adminSendBandwidth; // @dynamic adminSendBandwidth;
@property(nonatomic) int audioDscp; // @dynamic audioDscp;
@property(copy, nonatomic) NSString *avatarURL; // @dynamic avatarURL;
@property(nonatomic) int denoiserMode; // @dynamic denoiserMode;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) int logUploadPolicy; // @dynamic logUploadPolicy;
@property(nonatomic) _Bool mayAccessDelve; // @dynamic mayAccessDelve;
@property(nonatomic) _Bool mayAccessDomainQualityDashboard; // @dynamic mayAccessDomainQualityDashboard;
@property(nonatomic) _Bool mayAddBroadcast; // @dynamic mayAddBroadcast;
@property(nonatomic) _Bool mayCreateMeetingDevice; // @dynamic mayCreateMeetingDevice;
@property(nonatomic) _Bool mayCreateMeetingSpace; // @dynamic mayCreateMeetingSpace;
@property(nonatomic) _Bool mayResolveMeetingSpaceByAlias; // @dynamic mayResolveMeetingSpaceByAlias;
@property(nonatomic) _Bool maySendToRoom; // @dynamic maySendToRoom;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *organizationName; // @dynamic organizationName;
@property(nonatomic) int upgradePath; // @dynamic upgradePath;
@property(nonatomic) int videoDscp; // @dynamic videoDscp;

@end


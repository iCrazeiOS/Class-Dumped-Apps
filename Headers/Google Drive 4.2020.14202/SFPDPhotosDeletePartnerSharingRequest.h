//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCActorId, PhotosMCDeletePartnerSharingOperation, SFPDConsentInfo;

@interface SFPDPhotosDeletePartnerSharingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SFPDConsentInfo *deletePartnerSharingClientConsentInfo; // @dynamic deletePartnerSharingClientConsentInfo;
@property(retain, nonatomic) PhotosMCDeletePartnerSharingOperation *delete_p; // @dynamic delete_p;
@property(nonatomic) _Bool hasDeletePartnerSharingClientConsentInfo; // @dynamic hasDeletePartnerSharingClientConsentInfo;
@property(nonatomic) _Bool hasDelete_p; // @dynamic hasDelete_p;
@property(nonatomic) _Bool hasPartner; // @dynamic hasPartner;
@property(retain, nonatomic) PhotosMCActorId *partner; // @dynamic partner;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GPBEnumArray, PhotosMCAnnotationId, PhotosMCFaceTag;

@interface PhotosMCAnnotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *allowedActionsArray; // @dynamic allowedActionsArray;
@property(readonly, nonatomic) unsigned long long allowedActionsArray_Count; // @dynamic allowedActionsArray_Count;
@property(retain, nonatomic) PhotosMCFaceTag *faceTag; // @dynamic faceTag;
@property(nonatomic) _Bool hasFaceTag; // @dynamic hasFaceTag;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) PhotosMCAnnotationId *id_p; // @dynamic id_p;
@property(nonatomic) int type; // @dynamic type;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GDSFAncestorDowngradeDetail, NSMutableArray, NSString;

@interface GDSFVisibilitySelectorViewProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GDSFAncestorDowngradeDetail *ancestorRemovalDetail; // @dynamic ancestorRemovalDetail;
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasAncestorRemovalDetail; // @dynamic hasAncestorRemovalDetail;
@property(copy, nonatomic) NSString *invalidationWarningMessage; // @dynamic invalidationWarningMessage;
@property(nonatomic) _Bool removalRequiresAncestorDowngrade; // @dynamic removalRequiresAncestorDowngrade;
@property(nonatomic) int validity; // @dynamic validity;
@property(retain, nonatomic) NSMutableArray *visibilityOptionsArray; // @dynamic visibilityOptionsArray;
@property(readonly, nonatomic) unsigned long long visibilityOptionsArray_Count; // @dynamic visibilityOptionsArray_Count;
@property(nonatomic) int visibilityState; // @dynamic visibilityState;

@end


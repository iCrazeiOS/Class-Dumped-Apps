//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSCardItem_CardItemFixedFooter, ADDONSCardItem_CardItemHeader, ADDONSCardItem_CardItemRefreshAction, ADDONSThemeColors, NSMutableArray, NSString;

@interface ADDONSCardItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ADDONSThemeColors *backgroundThemeColors; // @dynamic backgroundThemeColors;
@property(retain, nonatomic) NSMutableArray *cardActionsArray; // @dynamic cardActionsArray;
@property(readonly, nonatomic) unsigned long long cardActionsArray_Count; // @dynamic cardActionsArray_Count;
@property(nonatomic) int displayStyle; // @dynamic displayStyle;
@property(retain, nonatomic) ADDONSCardItem_CardItemFixedFooter *fixedFooter; // @dynamic fixedFooter;
@property(nonatomic) _Bool hasBackgroundThemeColors; // @dynamic hasBackgroundThemeColors;
@property(nonatomic) _Bool hasDisplayStyle; // @dynamic hasDisplayStyle;
@property(nonatomic) _Bool hasFixedFooter; // @dynamic hasFixedFooter;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPeekCardHeader; // @dynamic hasPeekCardHeader;
@property(nonatomic) _Bool hasRefreshAction; // @dynamic hasRefreshAction;
@property(retain, nonatomic) ADDONSCardItem_CardItemHeader *header; // @dynamic header;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) ADDONSCardItem_CardItemHeader *peekCardHeader; // @dynamic peekCardHeader;
@property(retain, nonatomic) ADDONSCardItem_CardItemRefreshAction *refreshAction; // @dynamic refreshAction;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;

@end


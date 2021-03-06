//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GADAApprovalChange_ApprovalCancelled, GADAApprovalChange_ApprovalRequested, GADAApprovalChange_CommentAdded, GADAApprovalChange_DueTimeChanged, GADAApprovalChange_ReviewerResponded, GADAApprovalChange_ReviewersChanged, GADAUser, GPBTimestamp, NSMutableArray, NSString;

@interface GADAApprovalChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GADAApprovalChange_ApprovalCancelled *approvalCancelled; // @dynamic approvalCancelled;
@property(retain, nonatomic) NSMutableArray *approvalEventNamesArray; // @dynamic approvalEventNamesArray;
@property(readonly, nonatomic) unsigned long long approvalEventNamesArray_Count; // @dynamic approvalEventNamesArray_Count;
@property(copy, nonatomic) NSString *approvalName; // @dynamic approvalName;
@property(retain, nonatomic) GADAApprovalChange_ApprovalRequested *approvalRequested; // @dynamic approvalRequested;
@property(retain, nonatomic) GADAApprovalChange_CommentAdded *commentAdded; // @dynamic commentAdded;
@property(retain, nonatomic) GPBTimestamp *dueTime; // @dynamic dueTime;
@property(retain, nonatomic) GADAApprovalChange_DueTimeChanged *dueTimeChanged; // @dynamic dueTimeChanged;
@property(nonatomic) _Bool hasDueTime; // @dynamic hasDueTime;
@property(nonatomic) _Bool hasInitiator; // @dynamic hasInitiator;
@property(retain, nonatomic) GADAUser *initiator; // @dynamic initiator;
@property(retain, nonatomic) GADAApprovalChange_ReviewerResponded *reviewerResponded; // @dynamic reviewerResponded;
@property(retain, nonatomic) NSMutableArray *reviewersArray; // @dynamic reviewersArray;
@property(readonly, nonatomic) unsigned long long reviewersArray_Count; // @dynamic reviewersArray_Count;
@property(retain, nonatomic) GADAApprovalChange_ReviewersChanged *reviewersChanged; // @dynamic reviewersChanged;
@property(nonatomic) int status; // @dynamic status;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end


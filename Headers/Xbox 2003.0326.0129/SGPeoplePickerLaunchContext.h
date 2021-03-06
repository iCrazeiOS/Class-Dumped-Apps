//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;
@protocol SGPeoplePickerDelegate;

@interface SGPeoplePickerLaunchContext : NSObject <NSCoding>
{
    _Bool _showsMultiplayerSummary;
    _Bool _allowUnlimitedRecipients;
    NSMutableArray *_selectedRecipients;
    id <SGPeoplePickerDelegate> _delegate;
    long long _peoplePickerType;
}

@property(nonatomic) long long peoplePickerType; // @synthesize peoplePickerType=_peoplePickerType;
@property(nonatomic) _Bool allowUnlimitedRecipients; // @synthesize allowUnlimitedRecipients=_allowUnlimitedRecipients;
@property(nonatomic) _Bool showsMultiplayerSummary; // @synthesize showsMultiplayerSummary=_showsMultiplayerSummary;
@property(nonatomic) __weak id <SGPeoplePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


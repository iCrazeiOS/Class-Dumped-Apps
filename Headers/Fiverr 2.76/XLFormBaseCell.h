//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "XLFormDescriptorCell-Protocol.h"

@class NSString, XLFormRowDescriptor;

@interface XLFormBaseCell : UITableViewCell <XLFormDescriptorCell>
{
    XLFormRowDescriptor *_rowDescriptor;
}

@property(nonatomic) __weak XLFormRowDescriptor *rowDescriptor; // @synthesize rowDescriptor=_rowDescriptor;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (id)inputAccessoryView;
- (id)formViewController;
- (void)unhighlight;
- (void)highlight;
- (void)update;
- (void)configure;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


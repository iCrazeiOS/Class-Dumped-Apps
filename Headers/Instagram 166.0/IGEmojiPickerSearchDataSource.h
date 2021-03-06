//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAsyncTask, IGLabelItemViewModel, IGUserSession, NSArray, NSString;
@protocol IGEmojiPickerSearchDataSourceDelegate;

@interface IGEmojiPickerSearchDataSource : NSObject
{
    NSString *_searchText;
    IGUserSession *_userSession;
    IGAsyncTask *_stickerSearchTask;
    NSArray *_defaultItems;
    IGLabelItemViewModel *_emptyResultsLabelModel;
    id <IGEmojiPickerSearchDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGEmojiPickerSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDefaultItems;
- (void)_handleStickerSearchResponse:(id)arg1 searchText:(id)arg2;
- (void)searchForText:(id)arg1;
- (id)initWithDefaultItems:(id)arg1 userSession:(id)arg2 textColor:(id)arg3;

@end


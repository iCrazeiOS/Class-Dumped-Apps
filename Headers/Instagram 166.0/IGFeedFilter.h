//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedFilterType-Protocol.h>

@class NSString;

@interface IGFeedFilter : NSObject <IGFeedFilterType>
{
    _Bool _isEditable;
    NSString *_title;
    CDUnknownBlockType _condition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)filterIDs;
- (_Bool)canApplyRemotely;
- (id)typeName;
- (id)identifier;
- (_Bool)matchesItem:(id)arg1 sponsoredSupportConfiguration:(id)arg2;
- (id)initWithTitle:(id)arg1 isEditable:(_Bool)arg2 condition:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


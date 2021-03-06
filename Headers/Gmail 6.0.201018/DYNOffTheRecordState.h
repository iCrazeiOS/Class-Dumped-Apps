//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNUser;

@interface DYNOffTheRecordState : NSObject
{
    _Bool _offTheRecord;
    _Bool _hideOffTheRecordLabel;
    _Bool _hideOffTheRecordButton;
    _Bool _haveFetched;
    _Bool _haveAppliedGroupDomainPolicies;
    _Bool _toggledByGroupUpdate;
    id <DYNUser> _toggledByUser;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool toggledByGroupUpdate; // @synthesize toggledByGroupUpdate=_toggledByGroupUpdate;
@property(retain, nonatomic) id <DYNUser> toggledByUser; // @synthesize toggledByUser=_toggledByUser;
@property(nonatomic) _Bool haveAppliedGroupDomainPolicies; // @synthesize haveAppliedGroupDomainPolicies=_haveAppliedGroupDomainPolicies;
@property(nonatomic) _Bool haveFetched; // @synthesize haveFetched=_haveFetched;
@property(nonatomic) _Bool hideOffTheRecordButton; // @synthesize hideOffTheRecordButton=_hideOffTheRecordButton;
@property(nonatomic) _Bool hideOffTheRecordLabel; // @synthesize hideOffTheRecordLabel=_hideOffTheRecordLabel;
@property(nonatomic) _Bool offTheRecord; // @synthesize offTheRecord=_offTheRecord;
- (id)copyWithToggledOffTheRecordValue;
- (_Bool)isFinalized;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOffTheRecord:(_Bool)arg1 hideOffTheRecordLabel:(_Bool)arg2 hideOffTheRecordButton:(_Bool)arg3 haveFetched:(_Bool)arg4 haveAppliedGroupDomainPolicies:(_Bool)arg5 toggledByUser:(id)arg6 toggledByGroupUpdate:(_Bool)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplLivelistLiveListChangeImpl.h"

#import "JBTSectionChange-Protocol.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplSectionsSectionManagerImpl_SectionChangeImpl : ComGoogleAppsBigtopSyncClientImplLivelistLiveListChangeImpl <JBTSectionChange>
{
    int sectionIndexBefore_;
    int sectionIndexAfter_;
    int relativeIndexBefore_;
    int relativeIndexAfter_;
    int sectionIndexOffset_;
}

- (void)setSectionIndexOffsetWithInt:(int)arg1;
- (int)getRelativeIndexAfterChange;
- (int)getRelativeIndexBeforeChange;
- (int)getSectionIndexAfterChange;
- (int)getSectionIndexBeforeChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


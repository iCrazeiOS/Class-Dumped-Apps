//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplAdsFormfillFieldPrefillSourceInfoImpl.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList;

@interface ComGoogleAppsBigtopSyncClientImplAdsAutoValue_FormfillFieldPrefillSourceInfoImpl : ComGoogleAppsBigtopSyncClientImplAdsFormfillFieldPrefillSourceInfoImpl
{
    ComGoogleCommonBaseOptional *link_;
    ComGoogleCommonBaseOptional *helpText_;
    ComGoogleCommonBaseOptional *helpTextKeywords_;
    ComGoogleCommonCollectImmutableList *sourceLinks_;
    ComGoogleCommonCollectImmutableList *sourceLinkText_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getSourceLinkText;
- (id)getSourceLinks;
- (id)getHelpTextKeywords;
- (id)getHelpText;
- (id)getLink;

@end


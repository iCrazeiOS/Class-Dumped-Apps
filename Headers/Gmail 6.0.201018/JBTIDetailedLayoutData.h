//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList;
@protocol ComGoogleCommonBaseSupplier, JBTRichText, JavaUtilList;

@interface JBTIDetailedLayoutData : NSObject
{
    id <JBTRichText> title_;
    ComGoogleCommonBaseOptional *subtitle_;
    id <JavaUtilList> images_;
    id <JavaUtilList> widgetDetails_;
    id <JavaUtilList> deprecatedLayoutSections_;
    ComGoogleCommonBaseOptional *collapsedRow_;
    id <ComGoogleCommonBaseSupplier> actionsSupplier_;
    int lastCachedNumberOfColumns_;
    ComGoogleCommonCollectImmutableList *rows_;
}

- (void)dealloc;
- (id)getActions;
- (id)getCollapsedDetailSection;
- (id)getFirstImage;
- (id)getImages;
- (id)getRowsWithInt:(int)arg1;
- (id)getExpandedDetailSectionWidgets;
- (id)getExpandedDetailSections;
- (_Bool)hasSubtitle;
- (id)getSubtitle;
- (id)getTitle;

@end


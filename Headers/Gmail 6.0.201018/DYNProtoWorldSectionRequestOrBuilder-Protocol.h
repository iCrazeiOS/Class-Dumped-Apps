//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoSortingOrder, DYNProtoWorldFilter, DYNProtoWorldSection, DYNProtoWorldSectionRequest_PaginationCase, NSString;

@protocol DYNProtoWorldSectionRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoWorldSectionRequest_PaginationCase *)getPaginationCase;
- (DYNProtoSortingOrder *)getSortingOrder;
- (_Bool)hasSortingOrder;
- (NSString *)getPaginationToken;
- (_Bool)hasPaginationToken;
- (long long)getAnchorSortTimestampMicros;
- (_Bool)hasAnchorSortTimestampMicros;
- (int)getNumWorldItemsWithSnippet;
- (_Bool)hasNumWorldItemsWithSnippet;
- (DYNProtoWorldFilter *)getWorldFilter;
- (_Bool)hasWorldFilter;
- (DYNProtoWorldSection *)getWorldSection;
- (_Bool)hasWorldSection;
- (int)getPageSize;
- (_Bool)hasPageSize;
@end


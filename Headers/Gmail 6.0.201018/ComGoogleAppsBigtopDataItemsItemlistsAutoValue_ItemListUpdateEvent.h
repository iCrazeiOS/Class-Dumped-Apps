//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsItemlistsItemListUpdateEvent.h"

@class ComGoogleAppsBigtopDataItemsItemlistsItemListUpdateEvent_UpdateType, ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig;

@interface ComGoogleAppsBigtopDataItemsItemlistsAutoValue_ItemListUpdateEvent : ComGoogleAppsBigtopDataItemsItemlistsItemListUpdateEvent
{
    ComGoogleAppsBigtopDataItemsItemlistsItemListUpdateEvent_UpdateType *updateType_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig *itemListConfig_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)itemListConfig;
- (id)updateType;

@end


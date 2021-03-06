//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@protocol SPTFormatListModel <NSObject>
@property(readonly, nonatomic) NSNumber *followerCount;
@property(readonly, nonatomic) _Bool isFollowed;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSDate *lastModifiedTime;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, copy, nonatomic) NSString *madeForName;
@property(readonly, copy, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *freeformDescription;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *formatListAttributes;
@end


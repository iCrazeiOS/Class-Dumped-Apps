//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface ComAmazonModelFeedService_GetFeedDataRequest : CoralModel <NSCoding, NSCopying>
{
    NSArray *_feedItemTypes;
    NSString *_notificationToken;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(copy, nonatomic) NSString *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSArray *feedItemTypes; // @synthesize feedItemTypes=_feedItemTypes;
- (void).cxx_destruct;

@end


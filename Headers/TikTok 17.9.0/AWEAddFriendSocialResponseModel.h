//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AWEAddFriendSocialResponseModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_statusCode;
    NSArray *_users;
    NSDictionary *_extra;
}

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


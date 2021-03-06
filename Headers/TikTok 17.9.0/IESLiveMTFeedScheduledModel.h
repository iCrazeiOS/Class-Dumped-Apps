//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IESLiveMTFeedScheduledModel : MTLModel <MTLJSONSerializing>
{
    NSArray *_labelURLList;
    NSString *_nickname;
    NSString *_rightText;
    NSString *_secUid;
    NSString *_underNameText;
    NSNumber *_userid;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *underNameText; // @synthesize underNameText=_underNameText;
@property(retain, nonatomic) NSString *secUid; // @synthesize secUid=_secUid;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSArray *labelURLList; // @synthesize labelURLList=_labelURLList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseStage.h"

@class AWECreateAwemeResponse, AWEVideoPublishViewModel;

@interface AWEPublishShareStage : AWEPublishBaseStage
{
    AWEVideoPublishViewModel *_publishViewModel;
    AWECreateAwemeResponse *_createAwemeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse; // @synthesize createAwemeResponse=_createAwemeResponse;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
- (void)run;
- (id)initWithModel:(id)arg1 createAwemeResponse:(id)arg2;

@end


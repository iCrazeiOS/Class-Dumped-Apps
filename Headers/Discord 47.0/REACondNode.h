//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REANode.h"

@class NSNumber;

@interface REACondNode : REANode
{
    NSNumber *_condNodeID;
    NSNumber *_ifBlockID;
    NSNumber *_elseBlockID;
}

- (void).cxx_destruct;
- (id)evaluate;
- (id)initWithID:(id)arg1 config:(id)arg2;

@end


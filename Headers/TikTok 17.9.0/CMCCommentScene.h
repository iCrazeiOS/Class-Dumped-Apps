//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMCScene.h"

@class CMCCallable;

@interface CMCCommentScene : CMCScene
{
    CMCCallable *_didClickUser;
    CMCCallable *_didClickCell;
    CMCCallable *_trackLink;
    CMCCallable *_makeAdComment;
    CMCCallable *_didClickExtraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMCCallable *didClickExtraInfo; // @synthesize didClickExtraInfo=_didClickExtraInfo;
@property(retain, nonatomic) CMCCallable *makeAdComment; // @synthesize makeAdComment=_makeAdComment;
@property(retain, nonatomic) CMCCallable *trackLink; // @synthesize trackLink=_trackLink;
@property(retain, nonatomic) CMCCallable *didClickCell; // @synthesize didClickCell=_didClickCell;
@property(retain, nonatomic) CMCCallable *didClickUser; // @synthesize didClickUser=_didClickUser;
- (id)init;

@end


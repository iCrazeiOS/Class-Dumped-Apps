//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCTNGOperation-Protocol.h>

@class FEEDToken, GNPContentId, NSString;

@interface DSCTNGPaginationOperation : NSObject <DSCTNGOperation>
{
    GNPContentId *_contentID;
    FEEDToken *_token;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FEEDToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) GNPContentId *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic, getter=isUndoable) _Bool undoable;
- (id)initWithContentID:(id)arg1 token:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


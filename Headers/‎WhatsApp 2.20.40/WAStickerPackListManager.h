//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerPackListPresenting-Protocol.h"

@class WAFetchedResultsController;

@interface WAStickerPackListManager : NSObject <WAStickerPackListPresenting>
{
    WAFetchedResultsController *_fetchedResultsController;
}

- (void).cxx_destruct;
- (_Bool)canMoveItems;
- (id)stickerPacks;
- (long long)numberOfItems;
- (id)mainController;
- (void)invalidateDelegate;
- (void)dealloc;
- (id)initWithFetchedResultsController:(id)arg1;

@end


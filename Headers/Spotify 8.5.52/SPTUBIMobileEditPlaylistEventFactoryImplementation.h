//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileEditPlaylistEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileEditPlaylistEventFactoryImplementation : NSObject <SPTUBIMobileEditPlaylistEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)itemFactoryWithUri:(id)arg1;
- (id)discardDialogFactory;
- (id)discardButtonFactory;
- (id)cancelButtonFactory;
- (id)undoButtonFactory;
- (id)coverArtFactory;
- (id)descriptionFieldFactory;
- (id)nameFieldFactory;
- (id)closeButtonFactory;
- (id)saveButtonFactory;
- (id)backFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


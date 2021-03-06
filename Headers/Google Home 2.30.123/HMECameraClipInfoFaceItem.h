//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraClipInfoItem-Protocol.h"
#import "HMEFaceObserver-Protocol.h"

@class NSString;
@protocol HMECameraClipInfoFaceItemDelegate, HMEFace;

@interface HMECameraClipInfoFaceItem : NSObject <HMEFaceObserver, HMECameraClipInfoItem>
{
    _Bool _wasSeen;
    id <HMECameraClipInfoFaceItemDelegate> _delegate;
    id <HMEFace> _face;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEFace> face; // @synthesize face=_face;
@property(nonatomic) _Bool wasSeen; // @synthesize wasSeen=_wasSeen;
@property(nonatomic) __weak id <HMECameraClipInfoFaceItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateNameForFace:(id)arg1;
- (id)assetName;
- (id)image;
- (id)title;
- (long long)type;
- (_Bool)isNew;
- (_Bool)needsName;
- (id)initWithFace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


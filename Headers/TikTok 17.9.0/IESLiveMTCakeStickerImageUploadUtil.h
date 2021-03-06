//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveMTCakeStickerApi, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveMTCakeStickerImageUploadUtil : NSObject
{
    _Bool _uploading;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableArray *_imageDataArray;
    IESLiveMTCakeStickerApi *_uploadApi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(retain, nonatomic) IESLiveMTCakeStickerApi *uploadApi; // @synthesize uploadApi=_uploadApi;
@property(retain, nonatomic) NSMutableArray *imageDataArray; // @synthesize imageDataArray=_imageDataArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (id)fetchImageData;
- (void)addImageData:(id)arg1;
- (void)uploadIfNeeded;
- (void)uploadImage:(id)arg1;
- (id)initWithRoomModel:(id)arg1;

@end


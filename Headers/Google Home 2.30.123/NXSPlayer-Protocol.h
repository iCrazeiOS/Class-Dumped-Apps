//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NXSConnection, UIImage, UIView;
@protocol NXSPlayerDelegate;

@protocol NXSPlayer <NSObject>
@property(nonatomic) float volume;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) __weak id <NXSPlayerDelegate> delegate;
- (void)clearView;
- (UIImage *)snapshot;
- (void)stopPlaying;
- (void)playThumbnailStream;
- (void)playAtTime:(NSDate *)arg1 directorsCutEnabled:(_Bool)arg2 metadataEnabled:(_Bool)arg3;
- (void)disconnect;
- (void)connect;
- (void)setConnection:(NXSConnection *)arg1;
@end


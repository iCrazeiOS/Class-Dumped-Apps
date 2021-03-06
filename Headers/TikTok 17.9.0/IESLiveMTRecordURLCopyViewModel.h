//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol IESLiveMTInternalRouter, IESLiveSettings, IESLiveToastFactory, IESLiveTracker;

@interface IESLiveMTRecordURLCopyViewModel : NSObject
{
    NSString *_rtmpPushURL;
    NSString *_requestPage;
    NSString *_notice;
    NSNumber *_roomID;
    NSString *_serverUrl;
    NSString *_streamKey;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveMTInternalRouter> _internalRouter;
    id <IESLiveTracker> _tracker;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMTInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *streamKey; // @synthesize streamKey=_streamKey;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *requestPage; // @synthesize requestPage=_requestPage;
@property(copy, nonatomic) NSString *rtmpPushURL; // @synthesize rtmpPushURL=_rtmpPushURL;
- (void)copyURL:(id)arg1;
- (void)goToOBSLiveGuideView;

@end


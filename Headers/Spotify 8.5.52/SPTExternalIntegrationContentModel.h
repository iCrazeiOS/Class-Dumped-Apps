//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationContent-Protocol.h"

@class NSArray, NSString, NSURL, SPTSkipToTrack;
@protocol SPTExternalIntegrationContentRequestOptions;

@interface SPTExternalIntegrationContentModel : NSObject <SPTExternalIntegrationContent>
{
    _Bool _container;
    _Bool _availableOffline;
    _Bool _explicitContent;
    float _playbackProgress;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentDescription;
    NSURL *_URI;
    NSURL *_viewURI;
    NSURL *_imageURI;
    long long _placeholderIcon;
    NSString *_emptyContainerDescription;
    NSURL *_contextURI;
    SPTSkipToTrack *_skipToTrack;
    id <SPTExternalIntegrationContentRequestOptions> _requestOptions;
    NSArray *_children;
    NSString *_uniqueId;
    NSString *_source;
}

@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(readonly, nonatomic, getter=isAvailableOffline) _Bool availableOffline; // @synthesize availableOffline=_availableOffline;
@property(readonly, copy, nonatomic) id <SPTExternalIntegrationContentRequestOptions> requestOptions; // @synthesize requestOptions=_requestOptions;
@property(readonly, copy, nonatomic) SPTSkipToTrack *skipToTrack; // @synthesize skipToTrack=_skipToTrack;
@property(readonly, copy, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, copy, nonatomic) NSString *emptyContainerDescription; // @synthesize emptyContainerDescription=_emptyContainerDescription;
@property(readonly, nonatomic, getter=isContainer) _Bool container; // @synthesize container=_container;
@property(readonly, nonatomic) long long placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, copy, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithChildren:(id)arg1 title:(id)arg2 subtitle:(id)arg3 contentDescription:(id)arg4 URI:(id)arg5 viewURI:(id)arg6 imageURI:(id)arg7 placeholderIcon:(long long)arg8 availableOffline:(_Bool)arg9;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contentDescription:(id)arg3 URI:(id)arg4 viewURI:(id)arg5 imageURI:(id)arg6 placeholderIcon:(long long)arg7 container:(_Bool)arg8 emptyContainerDescription:(id)arg9 children:(id)arg10 contextURI:(id)arg11 skipToTrack:(id)arg12 requestOptions:(id)arg13 availableOffline:(_Bool)arg14 explicitContent:(_Bool)arg15 playbackProgress:(float)arg16;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 URI:(id)arg3 viewURI:(id)arg4 imageURI:(id)arg5 placeholderIcon:(long long)arg6 container:(_Bool)arg7 emptyContainerDescription:(id)arg8 children:(id)arg9 contextURI:(id)arg10 skipToTrack:(id)arg11 requestOptions:(id)arg12 availableOffline:(_Bool)arg13 explicitContent:(_Bool)arg14 playbackProgress:(float)arg15;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contentDescription:(id)arg3 URI:(id)arg4 viewURI:(id)arg5 imageURI:(id)arg6 placeholderIcon:(long long)arg7 container:(_Bool)arg8 emptyContainerDescription:(id)arg9 children:(id)arg10 contextURI:(id)arg11 skipToTrack:(id)arg12 requestOptions:(id)arg13 availableOffline:(_Bool)arg14 explicitContent:(_Bool)arg15 playbackProgress:(float)arg16 uniqueId:(id)arg17 source:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


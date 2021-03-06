//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class IESGLAudioWriter, IESMMAudioResonance, NSMutableDictionary, NSObject, VEAudioQueueUnit;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VEAudioMixUnit : IESMMObject
{
    unsigned long long _algorithmType;
    char *_config;
    _Bool _stopThread;
    _Bool _startFlag;
    VEAudioQueueUnit *_audioQueneUnit;
    NSObject<OS_dispatch_queue> *_playerQueue;
    NSObject<OS_dispatch_queue> *_writerQueue;
    IESMMAudioResonance *_resonance;
    NSMutableDictionary *_datas;
    struct AudioBufferList *_outBufferList;
    IESGLAudioWriter *_writer;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(nonatomic) _Bool startFlag; // @synthesize startFlag=_startFlag;
@property(retain, nonatomic) IESGLAudioWriter *writer; // @synthesize writer=_writer;
@property(nonatomic) struct AudioBufferList *outBufferList; // @synthesize outBufferList=_outBufferList;
@property(retain, nonatomic) NSMutableDictionary *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) IESMMAudioResonance *resonance; // @synthesize resonance=_resonance;
@property(nonatomic) _Bool stopThread; // @synthesize stopThread=_stopThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // @synthesize writerQueue=_writerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) VEAudioQueueUnit *audioQueneUnit; // @synthesize audioQueneUnit=_audioQueneUnit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destoryResource;
- (void)setAudioAlgorithmConfig:(unsigned long long)arg1 config:(const char *)arg2;
- (void)set3DAudioParam:(struct ve_3Daudio_param_st)arg1 asset:(id)arg2;
- (id)createUrl;
- (id)pauseRecording;
- (void)creatWriter;
- (void)startRecording;
- (_Bool)getStopThread;
- (void)stop;
- (void)start;
- (long long)getPendingCount:(id)arg1;
- (void)processData:(id)arg1;
- (struct opaqueCMSampleBuffer *)creatSampleBuffer:(struct AudioBufferList *)arg1;
- (void)mixAudioInterleavingBufferList:(struct AudioBufferList *)arg1 inBufferList:(float *)arg2 size:(unsigned int)arg3;
- (struct AudioBufferList *)getData;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
- (void)startReadQueue;
- (id)init;

@end


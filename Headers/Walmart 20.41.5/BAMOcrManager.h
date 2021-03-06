//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BAMCardInformation, NSString;
@protocol OcrDelegate;

@interface BAMOcrManager : NSObject
{
    struct OcrEngine *ocrEngine;
    struct shared_ptr<OcrEngineSession> ocrEngineSession;
    struct OcrEngineSettings ocrEngineSettings;
    struct shared_ptr<OcrEngineInternalSettings> ocrEngineInternalSettings;
    struct shared_ptr<const OcrResult> ocrResult;
    struct PartialResultAcceptor acceptor;
    char *_imageFrameCurrentlyBeingProcessed;
    _Bool _ocrRunning;
    _Bool _ocrEngineLoaded;
    int _recognitionState;
    int _state;
    NSObject<OcrDelegate> *delegate;
    NSString *dataPath;
    double roiHorizontal;
    double roiVertical;
    double roiDeviationWidth;
    double roiDeviationHeight;
    BAMCardInformation *_cardInformation;
    double _ocrEngineLoadTime;
}

@property(nonatomic) double ocrEngineLoadTime; // @synthesize ocrEngineLoadTime=_ocrEngineLoadTime;
@property(nonatomic, getter=isOcrEngineLoaded) _Bool ocrEngineLoaded; // @synthesize ocrEngineLoaded=_ocrEngineLoaded;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) BAMCardInformation *cardInformation; // @synthesize cardInformation=_cardInformation;
@property(getter=isOcrRunning) _Bool ocrRunning; // @synthesize ocrRunning=_ocrRunning;
@property(nonatomic) int recognitionState; // @synthesize recognitionState=_recognitionState;
@property(nonatomic) double roiDeviationHeight; // @synthesize roiDeviationHeight;
@property(nonatomic) double roiDeviationWidth; // @synthesize roiDeviationWidth;
@property(nonatomic) double roiVertical; // @synthesize roiVertical;
@property(nonatomic) double roiHorizontal; // @synthesize roiHorizontal;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath;
@property(nonatomic) NSObject<OcrDelegate> *delegate; // @synthesize delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)scaleMaskRect:(struct CGRect)arg1 forImageSize:(struct CGSize)arg2;
- (void)ocrFinishedWithCardInformation:(id)arg1;
- (void)performOcrOnRawImageFrame:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (void)freeOcrEngine;
@property(readonly, nonatomic) double loadTime;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)resetConfiguration;
- (void)loadOcrEngine;
- (id)createScanConfiguration;
- (void)dealloc;
- (id)initWithOcrDelegate:(id)arg1;

@end


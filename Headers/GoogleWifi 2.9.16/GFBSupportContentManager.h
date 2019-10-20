//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GFBFeedbackConfigurationsManager, NSMutableArray, SUPReceiverConfig, SUPSupportContentService;

@interface GFBSupportContentManager : NSObject
{
    NSMutableArray *_supportContentServiceHandlers;
    SUPReceiverConfig *_receiverConfig;
    GFBFeedbackConfigurationsManager *_configurationsManager;
    SUPSupportContentService *_supportContentService;
    unsigned long long _bootstrapStatus;
}

@property unsigned long long bootstrapStatus; // @synthesize bootstrapStatus=_bootstrapStatus;
@property(retain, nonatomic) SUPSupportContentService *supportContentService; // @synthesize supportContentService=_supportContentService;
- (void).cxx_destruct;
- (void)fetchConfigurationsAndCreateContentService;
- (void)resolveSupportContentServiceHandlers;
- (void)getSupportContentServiceWithHandler:(CDUnknownBlockType)arg1;
- (void)precacheHelpArticle:(id)arg1;
- (id)initWithReceiverConfig:(id)arg1 configurationsManager:(id)arg2;

@end


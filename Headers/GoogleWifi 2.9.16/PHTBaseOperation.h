//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHTPhenotypeDatabase, PHTPhenotypeLogger;

@interface PHTBaseOperation : NSObject
{
    int _eventType;
    NSString *_counterName;
    PHTPhenotypeDatabase *_db;
    PHTPhenotypeLogger *_logger;
}

@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) PHTPhenotypeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) PHTPhenotypeDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *counterName; // @synthesize counterName=_counterName;
- (void).cxx_destruct;
- (id)phenotypePackageName;
- (_Bool)shouldBeLogged;
- (id)phenotypeLogEvent;
- (id)applicationInfo;
- (void)execute;
- (id)initWithCounterName:(id)arg1 phenotypeEventType:(int)arg2 logger:(id)arg3 database:(id)arg4;

@end


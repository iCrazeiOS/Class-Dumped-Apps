//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Instabug/IBGDictionaryProtocol-Protocol.h>

@class NSDate, NSSet, NSString;

@interface IBGAnalytics : NSManagedObject <IBGDictionaryProtocol>
{
}

+ (id)entityName;
+ (id)fetchRequestTillDate:(id)arg1;
+ (id)fetchRequestWithMethodName:(id)arg1;
+ (id)fetchRequest;
- (id)toDictionaryWithDate:(id)arg1;
- (id)toDictionary;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *eventLog; // @dynamic eventLog;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDeprecated; // @dynamic isDeprecated;
@property(copy, nonatomic) NSString *methodLog; // @dynamic methodLog;
@property(retain, nonatomic) NSSet *param; // @dynamic param;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

